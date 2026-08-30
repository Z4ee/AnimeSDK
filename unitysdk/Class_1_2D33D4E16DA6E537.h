#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChessDirection.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_2D33D4E16DA6E537_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0xC0DCA00)
#define CLASS_1_2D33D4E16DA6E537_GET_ISBLOCK_OFFSET UNITYSDK_OFFSET(0xC0DCA20)
#define CLASS_1_2D33D4E16DA6E537_GET_POSITIONX_OFFSET UNITYSDK_OFFSET(0xC0DC9C0)
#define CLASS_1_2D33D4E16DA6E537_GET_POSITIONY_OFFSET UNITYSDK_OFFSET(0xC0DC9E0)
#define CLASS_1_2D33D4E16DA6E537_METHOD_1_38DD9133D62B85E3_OFFSET UNITYSDK_OFFSET(0xC0DC910)
#define CLASS_1_2D33D4E16DA6E537_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xC0DC970)
#define CLASS_1_2D33D4E16DA6E537_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0xC0DCA10)
#define CLASS_1_2D33D4E16DA6E537_SET_ISBLOCK_OFFSET UNITYSDK_OFFSET(0xC0DCA30)
#define CLASS_1_2D33D4E16DA6E537_SET_POSITIONX_OFFSET UNITYSDK_OFFSET(0xC0DC9D0)
#define CLASS_1_2D33D4E16DA6E537_SET_POSITIONY_OFFSET UNITYSDK_OFFSET(0xC0DC9F0)
#define CLASS_1_2D33D4E16DA6E537__CTOR_OFFSET UNITYSDK_OFFSET(0xC0DCA40)

inline static constexpr unsigned int Class_1_2D33D4E16DA6E537_TypeDefinitionIndex = 78087;

class Class_1_2D33D4E16DA6E537 : public ::System::Object
{
public:
	::RPG::Client::Prop::ChessDirection _Direction_k__BackingField; // 0x10
	::System::Int32 _PositionX_k__BackingField; // 0x14
	::System::Int32 _PositionY_k__BackingField; // 0x18
	::System::Boolean _IsBlock_k__BackingField; // 0x1C

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

	::System::Void set_PositionX(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2D33D4E16DA6E537_SET_POSITIONX_OFFSET))(this, a1);
	}

	::System::Int32 get_PositionY()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D33D4E16DA6E537_GET_POSITIONY_OFFSET))(this);
	}

	::System::Void set_PositionY(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2D33D4E16DA6E537_SET_POSITIONY_OFFSET))(this, a1);
	}

	::RPG::Client::Prop::ChessDirection get_Direction()
	{
		return ((::RPG::Client::Prop::ChessDirection(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D33D4E16DA6E537_GET_DIRECTION_OFFSET))(this);
	}

	::System::Void set_Direction(::RPG::Client::Prop::ChessDirection a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChessDirection))((::PBYTE)hIl2Cpp + CLASS_1_2D33D4E16DA6E537_SET_DIRECTION_OFFSET))(this, a1);
	}

	::System::Boolean get_IsBlock()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D33D4E16DA6E537_GET_ISBLOCK_OFFSET))(this);
	}

	::System::Void set_IsBlock(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2D33D4E16DA6E537_SET_ISBLOCK_OFFSET))(this, a1);
	}
};
