#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AD314FA3A58751E4.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifierAddReason.h"
#include "unitysdk/RPG/GameCore/ModifierStackingFlag.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Nullable_1.h"

class Class_0_16E4307DCC419505_358;
class Class_1_2FD33788640A7CFD;
class Class_2_24193089A4D2255F;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_2_7AA0468CE6C1F3D7_CLEAR_OFFSET UNITYSDK_OFFSET(0xAB79E40)
#define CLASS_2_7AA0468CE6C1F3D7_METHOD_2_3C8305164A0C9B06_OFFSET UNITYSDK_OFFSET(0xAB79CD0)
#define CLASS_2_7AA0468CE6C1F3D7__CCTOR_OFFSET UNITYSDK_OFFSET(0xAB79F10)
#define CLASS_2_7AA0468CE6C1F3D7__CTOR_OFFSET UNITYSDK_OFFSET(0xAB79ED0)

inline static constexpr unsigned int Class_2_7AA0468CE6C1F3D7_TypeDefinitionIndex = 50238;

class Class_2_7AA0468CE6C1F3D7 : public ::Class_1_AD314FA3A58751E4<::Class_2_7AA0468CE6C1F3D7*>
{
public:
	static ::Class_2_7AA0468CE6C1F3D7** StaticGet_Field_2_0()
	{
		return (::Class_2_7AA0468CE6C1F3D7**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7AA0468CE6C1F3D7_TypeDefinitionIndex)->GetStaticField(0xBB50);
	}
	::System::String* Field_2_1; // 0x18
	::Class_1_2FD33788640A7CFD* Field_2_2; // 0x20
	::Class_0_16E4307DCC419505_358* Field_2_3; // 0x28
	::RPG::GameCore::GameEntity* Field_2_4; // 0x30
	::System::String* Field_2_5; // 0x38
	::Class_2_24193089A4D2255F* Field_2_6; // 0x40
	::RPG::GameCore::ModifierAddReason Field_2_7; // 0x48
	::System::Nullable_1<::System::Int32> Field_2_8; // 0x4C
	::System::Nullable_1<::RPG::GameCore::FixPoint> Field_2_9; // 0x58
	::System::Nullable_1<::RPG::GameCore::FixPoint> Field_2_10; // 0x68
	::System::Nullable_1<::System::Int32> Field_2_11; // 0x78
	::System::Single Field_2_12; // 0x80
	::RPG::MVector3 Field_2_13; // 0x84
	::System::Boolean Field_2_14; // 0x90
	::System::Boolean Field_2_15; // 0x91
	::RPG::GameCore::ModifierStackingFlag Field_2_16; // 0x94
	::System::Single Field_2_17; // 0x98
	::System::Nullable_1<::System::Int32> Field_2_18; // 0x9C
	::System::Boolean Field_2_19; // 0xA4
	::System::Boolean Field_2_20; // 0xA5
	::System::Boolean Field_2_21; // 0xA6
	::System::Boolean Field_2_22; // 0xA7
	::System::Nullable_1<::System::Int32> Field_2_23; // 0xA8

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
