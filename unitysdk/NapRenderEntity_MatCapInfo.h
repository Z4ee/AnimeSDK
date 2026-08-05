#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class NapMaterial;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture2D; }

#define NAPRENDERENTITY_MATCAPINFO_INIT_OFFSET UNITYSDK_OFFSET(0x9DB160)
#define NAPRENDERENTITY_MATCAPINFO_RELEASE_OFFSET UNITYSDK_OFFSET(0x9DB170)

inline static constexpr unsigned int NapRenderEntity_MatCapInfo_TypeDefinitionIndex = 27222;

struct alignas(8) NapRenderEntity_MatCapInfo
{
	::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>* matCapTexs; // 0x10
	::System::Collections::Generic::List_1<::Il2CppArray<::System::Int32>*>* matCapTexIDs; // 0x18
	::System::Collections::Generic::List_1<::NapMaterial*>* napMaterials; // 0x20

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_MATCAPINFO_INIT_OFFSET))(this);
	}

	::System::Void Release()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_MATCAPINFO_RELEASE_OFFSET))(this);
	}
};
