#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3DFF974943A619B7.h"
#include "unitysdk/Enum_3_63AB81693044A959.h"
#include "unitysdk/Enum_3_C2761E57EE0B71AF.h"
#include "unitysdk/Enum_3_D02046A15137AAB0.h"
#include "unitysdk/MoleMole/Config/AidAttackType.h"
#include "unitysdk/MoleMole/Config/RelayAttackType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_82A04EA7E45454A5__CTOR_OFFSET UNITYSDK_OFFSET(0x13A2A170)

inline static constexpr unsigned int Class_1_82A04EA7E45454A5_TypeDefinitionIndex = 87032;

class Class_1_82A04EA7E45454A5 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_11; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* Field_1_9; // 0x18
	::MoleMole::Config::AidAttackType Field_1_6; // 0x20
	::Enum_3_3DFF974943A619B7 Field_1_1; // 0x24
	::System::Single Field_1_5; // 0x28
	::Enum_3_63AB81693044A959 Field_1_8; // 0x2C
	::System::Single Field_1_2; // 0x30
	::UnityEngine::Vector3 Field_1_4; // 0x34
	::System::Single Field_1_3; // 0x40
	::System::Boolean Field_1_7; // 0x44
	::System::Boolean Field_1_10; // 0x45
	::Enum_3_C2761E57EE0B71AF Field_1_12; // 0x48
	::Enum_3_D02046A15137AAB0 Field_1_14; // 0x4C
	::System::Int32 Field_1_0; // 0x50
	::MoleMole::Config::RelayAttackType Field_1_13; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82A04EA7E45454A5__CTOR_OFFSET))(this);
	}
};
