#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_79.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/Struct_2_90F2E0A39C190236.h"
#include "unitysdk/Struct_2_F213AC3D3FBF57B9_1.h"

class Class_3_1699D6295DC3F818_5;
class Class_3_8018CDF1371D00D2;
class Class_3_9F091E965E210217_14;
namespace MoleMole { class TurnBattleEntityUnit; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_2_54D31199DB132D48_NEWTURNBATTLEUNIT_OFFSET UNITYSDK_OFFSET(0x1020D0A0)
#define CLASS_2_54D31199DB132D48__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1020C7A0)
#define CLASS_2_54D31199DB132D48__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1020CC60)
#define CLASS_2_54D31199DB132D48__CTOR_OFFSET UNITYSDK_OFFSET(0x1020C1B0)

inline static constexpr unsigned int Class_2_54D31199DB132D48_TypeDefinitionIndex = 71792;

class Class_2_54D31199DB132D48 : public ::Class_1_43BD383C98B4C0C5_79
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::Struct_2_F213AC3D3FBF57B9_1>* Field_2_4; // 0x10
	::Class_3_8018CDF1371D00D2* Field_2_6; // 0x18
	::Il2CppArray<::Struct_2_90F2E0A39C190236>* Field_2_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_1699D6295DC3F818_5*>* Field_2_5; // 0x28
	::System::Single Field_2_1; // 0x30
	::System::Int32 Field_2_0; // 0x34
	::System::UInt32 Field_2_3; // 0x38

	::System::Void _ctor(::System::Int32 a1, ::System::UInt32 a2, ::System::Collections::Generic::IReadOnlyList_1<::Class_3_9F091E965E210217_14*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::Class_3_9F091E965E210217_14*>*))((::PBYTE)hIl2Cpp + CLASS_2_54D31199DB132D48__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_1(::System::Int32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_54D31199DB132D48__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_2(::MoleMole::TurnBattleEntityUnit* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TurnBattleEntityUnit*))((::PBYTE)hIl2Cpp + CLASS_2_54D31199DB132D48__CTOR_2_OFFSET))(this, a1);
	}

	::MoleMole::TurnBattleEntityUnit* NewTurnBattleUnit()
	{
		return ((::MoleMole::TurnBattleEntityUnit*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54D31199DB132D48_NEWTURNBATTLEUNIT_OFFSET))(this);
	}
};
