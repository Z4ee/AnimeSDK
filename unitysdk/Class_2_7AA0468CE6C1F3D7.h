#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AD314FA3A58751E4.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifierAddReason.h"
#include "unitysdk/RPG/GameCore/ModifierStackingFlag.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Nullable_1.h"

class Class_0_16E4307DCC419505_382;
class Class_1_5E412F716BC60BD1;
class Class_2_291F7DA21A504FC4;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_2_7AA0468CE6C1F3D7_CLEAR_OFFSET UNITYSDK_OFFSET(0x16CF25A0)
#define CLASS_2_7AA0468CE6C1F3D7_METHOD_2_3C8305164A0C9B06_OFFSET UNITYSDK_OFFSET(0x16CF2470)
#define CLASS_2_7AA0468CE6C1F3D7__CCTOR_OFFSET UNITYSDK_OFFSET(0x16CF2670)
#define CLASS_2_7AA0468CE6C1F3D7__CTOR_OFFSET UNITYSDK_OFFSET(0x16CF2630)

inline static constexpr unsigned int Class_2_7AA0468CE6C1F3D7_TypeDefinitionIndex = 51320;

class Class_2_7AA0468CE6C1F3D7 : public ::Class_1_AD314FA3A58751E4<::Class_2_7AA0468CE6C1F3D7*>
{
public:
	static ::Class_2_7AA0468CE6C1F3D7** StaticGet_Field_2_0()
	{
		return (::Class_2_7AA0468CE6C1F3D7**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7AA0468CE6C1F3D7_TypeDefinitionIndex)->GetStaticField(0x6B440);
	}
	::Class_1_5E412F716BC60BD1* Field_2_1; // 0x18
	::Class_0_16E4307DCC419505_382* Field_2_2; // 0x20
	::System::String* Field_2_3; // 0x28
	::System::String* Field_2_4; // 0x30
	::Class_2_291F7DA21A504FC4* Field_2_5; // 0x38
	::RPG::GameCore::GameEntity* Field_2_6; // 0x40
	::System::Single Field_2_7; // 0x48
	::System::Single Field_2_8; // 0x4C
	::System::Boolean Field_2_9; // 0x50
	::System::Boolean Field_2_10; // 0x51
	::System::Nullable_1<::System::Int32> Field_2_11; // 0x54
	::System::Nullable_1<::System::Int32> Field_2_12; // 0x5C
	::System::Boolean Field_2_13; // 0x64
	::System::Boolean Field_2_14; // 0x65
	::System::Boolean Field_2_15; // 0x66
	::System::Boolean Field_2_16; // 0x67
	::RPG::GameCore::ModifierAddReason Field_2_17; // 0x68
	::RPG::GameCore::ModifierStackingFlag Field_2_18; // 0x6C
	::System::Nullable_1<::System::Int32> Field_2_19; // 0x70
	::System::Nullable_1<::RPG::GameCore::FixPoint> Field_2_20; // 0x78
	::System::Nullable_1<::System::Int32> Field_2_21; // 0x88
	::RPG::MVector3 Field_2_22; // 0x90
	::System::Nullable_1<::RPG::GameCore::FixPoint> Field_2_23; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AA0468CE6C1F3D7__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7AA0468CE6C1F3D7__CCTOR_OFFSET))();
	}

	::System::Void Method_2_3C8305164A0C9B06(::Class_2_7AA0468CE6C1F3D7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7AA0468CE6C1F3D7*))((::PBYTE)hIl2Cpp + CLASS_2_7AA0468CE6C1F3D7_METHOD_2_3C8305164A0C9B06_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AA0468CE6C1F3D7_CLEAR_OFFSET))(this);
	}
};
