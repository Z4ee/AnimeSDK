#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandle.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define AKMEMBANKLOADER_ALLOCATEALIGNEDBUFFER_OFFSET UNITYSDK_OFFSET(0x1B445F30)
#define AKMEMBANKLOADER_DOLOADBANK_OFFSET UNITYSDK_OFFSET(0x1B445E70)
#define AKMEMBANKLOADER_LOADFILE_OFFSET UNITYSDK_OFFSET(0x1B446130)
#define AKMEMBANKLOADER_LOADLOCALIZEDBANK_OFFSET UNITYSDK_OFFSET(0x1B445BB0)
#define AKMEMBANKLOADER_LOADNONLOCALIZEDBANK_OFFSET UNITYSDK_OFFSET(0x1B445D30)
#define AKMEMBANKLOADER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B4461C0)
#define AKMEMBANKLOADER_START_OFFSET UNITYSDK_OFFSET(0x1B445B50)
#define AKMEMBANKLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4463F0)

inline static constexpr unsigned int AkMemBankLoader_TypeDefinitionIndex = 41318;

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

	::System::Void LoadNonLocalizedBank(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKMEMBANKLOADER_LOADNONLOCALIZEDBANK_OFFSET))(this, a1);
	}

	::System::Void LoadLocalizedBank(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKMEMBANKLOADER_LOADLOCALIZEDBANK_OFFSET))(this, a1);
	}

	::System::UInt32 AllocateAlignedBuffer(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + AKMEMBANKLOADER_ALLOCATEALIGNEDBUFFER_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* LoadFile()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMEMBANKLOADER_LOADFILE_OFFSET))(this);
	}

	::System::Void DoLoadBank(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKMEMBANKLOADER_DOLOADBANK_OFFSET))(this, a1);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMEMBANKLOADER_ONDESTROY_OFFSET))(this);
	}
};
