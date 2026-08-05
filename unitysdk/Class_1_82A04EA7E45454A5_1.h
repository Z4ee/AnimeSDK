#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3DFF974943A619B7.h"
#include "unitysdk/Enum_3_BE43F8A34B427A8E.h"
#include "unitysdk/Enum_3_C2761E57EE0B71AF.h"
#include "unitysdk/Enum_3_E85FEBB737D7B1FC.h"
#include "unitysdk/MoleMole/Config/AidAttackType.h"
#include "unitysdk/MoleMole/Config/RelayAttackType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_82A04EA7E45454A5_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB70D80)

inline static constexpr unsigned int Class_1_82A04EA7E45454A5_1_TypeDefinitionIndex = 66382;

class Class_1_82A04EA7E45454A5_1 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_15; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* Field_1_9; // 0x18
	::MoleMole::Config::RelayAttackType Field_1_13; // 0x20
	::System::Single Field_1_5; // 0x24
	::Enum_3_BE43F8A34B427A8E Field_1_10; // 0x28
	::Enum_3_E85FEBB737D7B1FC Field_1_12; // 0x2C
	::MoleMole::Config::AidAttackType Field_1_4; // 0x30
	::System::Boolean Field_1_8; // 0x34
	::System::Boolean Field_1_11; // 0x35
	::System::Single Field_1_7; // 0x38
	::System::Single Field_1_0; // 0x3C
	::UnityEngine::Vector3 Field_1_6; // 0x40
	::Enum_3_3DFF974943A619B7 Field_1_1; // 0x4C
	::System::Int32 Field_1_2; // 0x50
	::Enum_3_C2761E57EE0B71AF Field_1_14; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82A04EA7E45454A5_1__CTOR_OFFSET))(this);
	}
};
