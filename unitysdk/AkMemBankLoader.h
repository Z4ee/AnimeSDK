#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandle.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define AKMEMBANKLOADER_ALLOCATEALIGNEDBUFFER_OFFSET UNITYSDK_OFFSET(0x1E7EB610)
#define AKMEMBANKLOADER_DOLOADBANK_OFFSET UNITYSDK_OFFSET(0x1E7EB550)
#define AKMEMBANKLOADER_LOADFILE_OFFSET UNITYSDK_OFFSET(0x1E7EB7F0)
#define AKMEMBANKLOADER_LOADLOCALIZEDBANK_OFFSET UNITYSDK_OFFSET(0x1E7EB260)
#define AKMEMBANKLOADER_LOADNONLOCALIZEDBANK_OFFSET UNITYSDK_OFFSET(0x1E7EB3F0)
#define AKMEMBANKLOADER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1E7EB840)
#define AKMEMBANKLOADER_START_OFFSET UNITYSDK_OFFSET(0x1E7EB240)
#define AKMEMBANKLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7EB9A0)

inline static constexpr unsigned int AkMemBankLoader_TypeDefinitionIndex = 33158;

class AkMemBankLoader : public ::UnityEngine::MonoBehaviour
{
public:
	// static const ::System::Int32 WaitMs = 0x32; // 0x0
	// static const ::System::Int64 AK_BANK_PLATFORM_DATA_ALIGNMENT = 0x10; // 0x0
	// static const ::System::Int64 AK_BANK_PLATFORM_DATA_ALIGNMENT_MASK = 0xF; // 0x0
	::System::String* bankName; // 0x18
	::System::Boolean isLocalizedBank; // 0x20
	::System::String* m_bankPath; // 0x28
	::System::UInt32 ms_bankID; // 0x30
	::System::IntPtr ms_pInMemoryBankPtr; // 0x38
	::System::Runtime::InteropServices::GCHandle ms_pinnedArray; // 0x40
	::UnityEngine::Networking::UnityWebRequest* ms_www; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMEMBANKLOADER__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMEMBANKLOADER_START_OFFSET))(this);
	}

	::System::Void LoadNonLocalizedBank(::System::String* in_bankFilename)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKMEMBANKLOADER_LOADNONLOCALIZEDBANK_OFFSET))(this, in_bankFilename);
	}

	::System::Void LoadLocalizedBank(::System::String* in_bankFilename)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKMEMBANKLOADER_LOADLOCALIZEDBANK_OFFSET))(this, in_bankFilename);
	}

	::System::UInt32 AllocateAlignedBuffer(::Il2CppArray<::System::Byte>* data)
	{
		return ((::System::UInt32(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + AKMEMBANKLOADER_ALLOCATEALIGNEDBUFFER_OFFSET))(this, data);
	}

	::System::Collections::IEnumerator* LoadFile()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMEMBANKLOADER_LOADFILE_OFFSET))(this);
	}

	::System::Void DoLoadBank(::System::String* in_bankPath)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKMEMBANKLOADER_DOLOADBANK_OFFSET))(this, in_bankPath);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMEMBANKLOADER_ONDESTROY_OFFSET))(this);
	}
};
