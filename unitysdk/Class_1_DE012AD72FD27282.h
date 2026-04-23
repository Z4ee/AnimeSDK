#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleExtraPropertyAddition.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/System/Object.h"

class Class_1_2635DB36DB586313;

#define CLASS_1_DE012AD72FD27282_GET_BATTLEAVATARSERVICE_OFFSET UNITYSDK_OFFSET(0x92315B0)
#define CLASS_1_DE012AD72FD27282_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x9231560)
#define CLASS_1_DE012AD72FD27282_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9231590)
#define CLASS_1_DE012AD72FD27282_METHOD_1_69607B7E4783C654_OFFSET UNITYSDK_OFFSET(0x92315D0)
#define CLASS_1_DE012AD72FD27282_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0x9231540)
#define CLASS_1_DE012AD72FD27282_SET_BATTLEAVATARSERVICE_OFFSET UNITYSDK_OFFSET(0x92315C0)
#define CLASS_1_DE012AD72FD27282_SET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x9231580)
#define CLASS_1_DE012AD72FD27282_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x92315A0)
#define CLASS_1_DE012AD72FD27282__CTOR_OFFSET UNITYSDK_OFFSET(0x9231640)

inline static constexpr unsigned int Class_1_DE012AD72FD27282_TypeDefinitionIndex = 57717;

class Class_1_DE012AD72FD27282 : public ::System::Object
{
public:
	::Class_1_2635DB36DB586313* _BattleAvatarService_k__BackingField; // 0x10
	::Struct_2_AAD4F4215611A944 _Identifier_k__BackingField; // 0x18
	::RPG::GameCore::BattleExtraPropertyAddition _Type_k__BackingField; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE012AD72FD27282__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE012AD72FD27282_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	::Struct_2_AAD4F4215611A944 get_Identifier()
	{
		return ((::Struct_2_AAD4F4215611A944(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE012AD72FD27282_GET_IDENTIFIER_OFFSET))(this);
	}

	::System::Void set_Identifier(::Struct_2_AAD4F4215611A944 value)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_AAD4F4215611A944))((::PBYTE)hIl2Cpp + CLASS_1_DE012AD72FD27282_SET_IDENTIFIER_OFFSET))(this, value);
	}

	::RPG::GameCore::BattleExtraPropertyAddition get_Type()
	{
		return ((::RPG::GameCore::BattleExtraPropertyAddition(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE012AD72FD27282_GET_TYPE_OFFSET))(this);
	}

	::System::Void set_Type(::RPG::GameCore::BattleExtraPropertyAddition value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleExtraPropertyAddition))((::PBYTE)hIl2Cpp + CLASS_1_DE012AD72FD27282_SET_TYPE_OFFSET))(this, value);
	}

	::Class_1_2635DB36DB586313* get_BattleAvatarService()
	{
		return ((::Class_1_2635DB36DB586313*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE012AD72FD27282_GET_BATTLEAVATARSERVICE_OFFSET))(this);
	}

	::System::Void set_BattleAvatarService(::Class_1_2635DB36DB586313* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2635DB36DB586313*))((::PBYTE)hIl2Cpp + CLASS_1_DE012AD72FD27282_SET_BATTLEAVATARSERVICE_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint Method_1_69607B7E4783C654()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE012AD72FD27282_METHOD_1_69607B7E4783C654_OFFSET))(this);
	}
};
