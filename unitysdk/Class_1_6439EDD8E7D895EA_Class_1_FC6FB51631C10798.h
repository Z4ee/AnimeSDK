#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_34B3048095D388ED;
namespace MoleMole::Config { class ConfigHollowChessboard_PieceChangeStructConfig; }

#define CLASS_1_6439EDD8E7D895EA_CLASS_1_FC6FB51631C10798_METHOD_1_546BC2DC4A058352_OFFSET UNITYSDK_OFFSET(0x11903C30)
#define CLASS_1_6439EDD8E7D895EA_CLASS_1_FC6FB51631C10798__CTOR_OFFSET UNITYSDK_OFFSET(0x11903C20)

inline static constexpr unsigned int Class_1_6439EDD8E7D895EA_Class_1_FC6FB51631C10798_TypeDefinitionIndex = 76290;

class Class_1_6439EDD8E7D895EA_Class_1_FC6FB51631C10798 : public ::System::Object
{
public:
	::Class_1_34B3048095D388ED* Field_1_1; // 0x10
	::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig* Field_1_0; // 0x18

	::System::Void _ctor(::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig*))((::PBYTE)hIl2Cpp + CLASS_1_6439EDD8E7D895EA_CLASS_1_FC6FB51631C10798__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_6439EDD8E7D895EA_Class_1_FC6FB51631C10798* Method_1_546BC2DC4A058352(::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig* a1)
	{
		return ((::Class_1_6439EDD8E7D895EA_Class_1_FC6FB51631C10798*(*)(::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig*))((::PBYTE)hIl2Cpp + CLASS_1_6439EDD8E7D895EA_CLASS_1_FC6FB51631C10798_METHOD_1_546BC2DC4A058352_OFFSET))(a1);
	}
};
