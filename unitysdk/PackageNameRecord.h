#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }

#define PACKAGENAMERECORD_METHOD_5_B8FAD8726C647FA2_OFFSET UNITYSDK_OFFSET(0x8EB9710)
#define PACKAGENAMERECORD_METHOD_5_BBE2D28D8A6AFB06_OFFSET UNITYSDK_OFFSET(0x8EB9680)
#define PACKAGENAMERECORD_WRITEANDUPLOADBRANCHDATA_OFFSET UNITYSDK_OFFSET(0x8EB8FA0)
#define PACKAGENAMERECORD__CTOR_OFFSET UNITYSDK_OFFSET(0x8EB97B0)

inline static constexpr unsigned int PackageNameRecord_TypeDefinitionIndex = 38441;

class PackageNameRecord : public ::UnityEngine::MonoBehaviour
{
public:
	// static const ::System::String* Field_5_0; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PACKAGENAMERECORD__CTOR_OFFSET))(this);
	}

	static ::System::Void WriteAndUploadBranchData()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PACKAGENAMERECORD_WRITEANDUPLOADBRANCHDATA_OFFSET))();
	}

	static ::System::Void Method_5_BBE2D28D8A6AFB06(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + PACKAGENAMERECORD_METHOD_5_BBE2D28D8A6AFB06_OFFSET))(a1, a2);
	}

	static ::System::Collections::IEnumerator* Method_5_B8FAD8726C647FA2(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + PACKAGENAMERECORD_METHOD_5_B8FAD8726C647FA2_OFFSET))(a1, a2);
	}
};
