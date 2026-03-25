#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_98;
namespace RPG { template <typename T> class PoolList_1; }
namespace UnityEngine { class Collider; }

#define CLASS_1_AE5442AB62D99892_CLEAR_OFFSET UNITYSDK_OFFSET(0x16757AB0)
#define CLASS_1_AE5442AB62D99892__CTOR_OFFSET UNITYSDK_OFFSET(0x16757B30)

inline static constexpr unsigned int Class_1_AE5442AB62D99892_TypeDefinitionIndex = 33300;

class Class_1_AE5442AB62D99892 : public ::System::Object
{
public:
	::RPG::PoolList_1<::UnityEngine::Collider*>* Field_1_3; // 0x10
	::RPG::PoolList_1<::UnityEngine::Collider*>* Field_1_2; // 0x18
	::Class_0_16E4307DCC419505_98* Field_1_1; // 0x20
	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE5442AB62D99892__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE5442AB62D99892_CLEAR_OFFSET))(this);
	}
};
