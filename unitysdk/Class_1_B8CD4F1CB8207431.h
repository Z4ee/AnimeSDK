#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace System { class String; }

#define CLASS_1_B8CD4F1CB8207431_CLEAR_OFFSET UNITYSDK_OFFSET(0x169E1080)
#define CLASS_1_B8CD4F1CB8207431_ONALLOC_OFFSET UNITYSDK_OFFSET(0x169E1140)
#define CLASS_1_B8CD4F1CB8207431_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x169E1210)
#define CLASS_1_B8CD4F1CB8207431__CTOR_OFFSET UNITYSDK_OFFSET(0x169E1250)

inline static constexpr unsigned int Class_1_B8CD4F1CB8207431_TypeDefinitionIndex = 33527;

class Class_1_B8CD4F1CB8207431 : public ::System::Object
{
public:
	::System::String* Field_1_5; // 0x10
	::RPG::PoolList_1<::System::Int32>* Field_1_7; // 0x18
	::RPG::PoolDictionary_2<::System::Int32, ::System::Boolean>* Field_1_6; // 0x20
	::System::String* Field_1_8; // 0x28
	::System::Int32 Field_1_1; // 0x30
	::UnityEngine::Vector3 Field_1_4; // 0x34
	::UnityEngine::Vector3 Field_1_3; // 0x40
	::System::Boolean Field_1_0; // 0x4C
	::System::Boolean Field_1_2; // 0x4D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8CD4F1CB8207431__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8CD4F1CB8207431_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8CD4F1CB8207431_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8CD4F1CB8207431_ONRECYCLE_OFFSET))(this);
	}
};
