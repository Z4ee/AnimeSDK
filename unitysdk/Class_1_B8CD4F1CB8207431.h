#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace System { class String; }

#define CLASS_1_B8CD4F1CB8207431_CLEAR_OFFSET UNITYSDK_OFFSET(0x17F37370)
#define CLASS_1_B8CD4F1CB8207431_ONALLOC_OFFSET UNITYSDK_OFFSET(0x17F37440)
#define CLASS_1_B8CD4F1CB8207431_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x17F37510)
#define CLASS_1_B8CD4F1CB8207431__CTOR_OFFSET UNITYSDK_OFFSET(0x17F37550)

inline static constexpr unsigned int Class_1_B8CD4F1CB8207431_TypeDefinitionIndex = 39324;

class Class_1_B8CD4F1CB8207431 : public ::System::Object
{
public:
	::RPG::PoolList_1<::System::Int32>* Field_1_9; // 0x10
	::RPG::PoolDictionary_2<::System::Int32, ::System::Boolean>* Field_1_8; // 0x18
	::System::String* Field_1_10; // 0x20
	::System::String* Field_1_6; // 0x28
	::System::String* Field_1_7; // 0x30
	::System::Boolean Field_1_3; // 0x38
	::System::Boolean Field_1_0; // 0x39
	::UnityEngine::Vector3 Field_1_4; // 0x3C
	::System::Int32 Field_1_1; // 0x48
	::UnityEngine::Vector3 Field_1_5; // 0x4C
	::System::Int32 Field_1_2; // 0x58

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
