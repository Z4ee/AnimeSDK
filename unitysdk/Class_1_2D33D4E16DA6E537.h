#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChessDirection.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_2D33D4E16DA6E537_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0xB219820)
#define CLASS_1_2D33D4E16DA6E537_GET_ISBLOCK_OFFSET UNITYSDK_OFFSET(0xB219840)
#define CLASS_1_2D33D4E16DA6E537_GET_POSITIONX_OFFSET UNITYSDK_OFFSET(0xB2197E0)
#define CLASS_1_2D33D4E16DA6E537_GET_POSITIONY_OFFSET UNITYSDK_OFFSET(0xB219800)
#define CLASS_1_2D33D4E16DA6E537_METHOD_1_38DD9133D62B85E3_OFFSET UNITYSDK_OFFSET(0xB219730)
#define CLASS_1_2D33D4E16DA6E537_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xB219790)
#define CLASS_1_2D33D4E16DA6E537_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0xB219830)
#define CLASS_1_2D33D4E16DA6E537_SET_ISBLOCK_OFFSET UNITYSDK_OFFSET(0xB219850)
#define CLASS_1_2D33D4E16DA6E537_SET_POSITIONX_OFFSET UNITYSDK_OFFSET(0xB2197F0)
#define CLASS_1_2D33D4E16DA6E537_SET_POSITIONY_OFFSET UNITYSDK_OFFSET(0xB219810)
#define CLASS_1_2D33D4E16DA6E537__CTOR_OFFSET UNITYSDK_OFFSET(0xB219860)

inline static constexpr unsigned int Class_1_2D33D4E16DA6E537_TypeDefinitionIndex = 72054;

class Class_1_2D33D4E16DA6E537 : public ::System::Object
{
public:
	::System::Int32 _PositionY_k__BackingField; // 0x10
	::RPG::Client::Prop::ChessDirection _Direction_k__BackingField; // 0x14
	::System::Boolean _IsBlock_k__BackingField; // 0x18
	::System::Int32 _PositionX_k__BackingField; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D33D4E16DA6E537__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_38DD9133D62B85E3(::System::Int32 a1, ::System::Int32 a2, ::RPG::Client::Prop::ChessDirection a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::RPG::Client::Prop::ChessDirection))((::PBYTE)hIl2Cpp + CLASS_1_2D33D4E16DA6E537_METHOD_1_38DD9133D62B85E3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2D33D4E16DA6E537_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Int32 get_PositionX()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D33D4E16DA6E537_GET_POSITIONX_OFFSET))(this);
	}

	::System::Void set_PositionX(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2D33D4E16DA6E537_SET_POSITIONX_OFFSET))(this, value);
	}

	::System::Int32 get_PositionY()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D33D4E16DA6E537_GET_POSITIONY_OFFSET))(this);
	}

	::System::Void set_PositionY(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2D33D4E16DA6E537_SET_POSITIONY_OFFSET))(this, value);
	}

	::RPG::Client::Prop::ChessDirection get_Direction()
	{
		return ((::RPG::Client::Prop::ChessDirection(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D33D4E16DA6E537_GET_DIRECTION_OFFSET))(this);
	}

	::System::Void set_Direction(::RPG::Client::Prop::ChessDirection value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChessDirection))((::PBYTE)hIl2Cpp + CLASS_1_2D33D4E16DA6E537_SET_DIRECTION_OFFSET))(this, value);
	}

	::System::Boolean get_IsBlock()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D33D4E16DA6E537_GET_ISBLOCK_OFFSET))(this);
	}

	::System::Void set_IsBlock(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2D33D4E16DA6E537_SET_ISBLOCK_OFFSET))(this, value);
	}
};
