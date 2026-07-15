#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AD314FA3A58751E4.h"
#include "unitysdk/RPG/GameCore/ModifierAddReason.h"
#include "unitysdk/RPG/GameCore/ModifierStackingFlag.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Nullable_1.h"

class Class_0_16E4307DCC419505_382;
class Class_1_5E412F716BC60BD1;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }

#define CLASS_2_7AA0468CE6C1F3D7_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x16AAE6C0)
#define CLASS_2_7AA0468CE6C1F3D7_1_METHOD_2_3C8305164A0C9B06_OFFSET UNITYSDK_OFFSET(0x16AAE550)
#define CLASS_2_7AA0468CE6C1F3D7_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x16AAE770)
#define CLASS_2_7AA0468CE6C1F3D7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16AAE730)

inline static constexpr unsigned int Class_2_7AA0468CE6C1F3D7_1_TypeDefinitionIndex = 53313;

class Class_2_7AA0468CE6C1F3D7_1 : public ::Class_1_AD314FA3A58751E4<::Class_2_7AA0468CE6C1F3D7_1*>
{
public:
	static ::Class_2_7AA0468CE6C1F3D7_1** StaticGet_Field_2_0()
	{
		return (::Class_2_7AA0468CE6C1F3D7_1**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7AA0468CE6C1F3D7_1_TypeDefinitionIndex)->GetStaticField(0x63EA0);
	}
	::RPG::GameCore::GameEntity* Field_2_1; // 0x18
	::System::String* Field_2_2; // 0x20
	::Class_0_16E4307DCC419505_382* Field_2_3; // 0x28
	::System::String* Field_2_4; // 0x30
	::Class_1_5E412F716BC60BD1* Field_2_5; // 0x38
	::RPG::GameCore::TurnBasedModifierInstance* Field_2_6; // 0x40
	::System::Nullable_1<::System::Int32> Field_2_7; // 0x48
	::RPG::GameCore::ModifierAddReason Field_2_8; // 0x50
	::System::Single Field_2_9; // 0x54
	::System::Boolean Field_2_10; // 0x58
	::System::Boolean Field_2_11; // 0x59
	::System::Boolean Field_2_12; // 0x5A
	::System::Boolean Field_2_13; // 0x5B
	::System::Nullable_1<::System::Int32> Field_2_14; // 0x5C
	::System::Nullable_1<::System::Int32> Field_2_15; // 0x64
	::RPG::GameCore::ModifierStackingFlag Field_2_16; // 0x6C
	::System::Nullable_1<::System::Int32> Field_2_17; // 0x70
	::System::Nullable_1<::System::Int32> Field_2_18; // 0x78
	::System::Single Field_2_19; // 0x80
	::System::Single Field_2_20; // 0x84
	::System::Boolean Field_2_21; // 0x88
	::System::Boolean Field_2_22; // 0x89
	::System::Boolean Field_2_23; // 0x8A
	::RPG::MVector3 Field_2_24; // 0x8C
	::System::Boolean Field_2_25; // 0x98
	::System::Boolean Field_2_26; // 0x99

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AA0468CE6C1F3D7_1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7AA0468CE6C1F3D7_1__CCTOR_OFFSET))();
	}

	::System::Void Method_2_3C8305164A0C9B06(::Class_2_7AA0468CE6C1F3D7_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7AA0468CE6C1F3D7_1*))((::PBYTE)hIl2Cpp + CLASS_2_7AA0468CE6C1F3D7_1_METHOD_2_3C8305164A0C9B06_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AA0468CE6C1F3D7_1_CLEAR_OFFSET))(this);
	}
};
