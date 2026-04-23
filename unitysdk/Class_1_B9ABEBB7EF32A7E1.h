#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_310B46602BEB4586.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_424;
class Class_0_16E4307DCC419505_425;

#define CLASS_1_B9ABEBB7EF32A7E1_APPLYVALUERULE_OFFSET UNITYSDK_OFFSET(0x96762B0)
#define CLASS_1_B9ABEBB7EF32A7E1_CREATE_OFFSET UNITYSDK_OFFSET(0x96761B0)
#define CLASS_1_B9ABEBB7EF32A7E1_METHOD_1_3FEBEB2003C0B3FE_OFFSET UNITYSDK_OFFSET(0x9676120)
#define CLASS_1_B9ABEBB7EF32A7E1_METHOD_1_65CF90F521C6CEA5_1_OFFSET UNITYSDK_OFFSET(0x96763B0)
#define CLASS_1_B9ABEBB7EF32A7E1_METHOD_1_65CF90F521C6CEA5_OFFSET UNITYSDK_OFFSET(0x9676350)
#define CLASS_1_B9ABEBB7EF32A7E1__CTOR_OFFSET UNITYSDK_OFFSET(0x9676410)

inline static constexpr unsigned int Class_1_B9ABEBB7EF32A7E1_TypeDefinitionIndex = 49806;

class Class_1_B9ABEBB7EF32A7E1 : public ::System::Object
{
public:
	::System::Int32 Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x14
	::System::Boolean Field_1_4; // 0x18
	::RPG::GameCore::FixPoint Field_1_3; // 0x20
	::RPG::GameCore::FixPoint Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9ABEBB7EF32A7E1__CTOR_OFFSET))(this);
	}

	::Class_1_B9ABEBB7EF32A7E1* Method_1_3FEBEB2003C0B3FE(::System::Int32 a1, ::System::Int32 a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::System::Boolean a5)
	{
		return ((::Class_1_B9ABEBB7EF32A7E1*(*)(::PVOID, ::System::Int32, ::System::Int32, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B9ABEBB7EF32A7E1_METHOD_1_3FEBEB2003C0B3FE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_0_16E4307DCC419505_425* Create(::Class_0_16E4307DCC419505_424* a1)
	{
		return ((::Class_0_16E4307DCC419505_425*(*)(::PVOID, ::Class_0_16E4307DCC419505_424*))((::PBYTE)hIl2Cpp + CLASS_1_B9ABEBB7EF32A7E1_CREATE_OFFSET))(this, a1);
	}

	::System::Void ApplyValueRule(::Class_0_16E4307DCC419505_424* a1, ::RPG::GameCore::FixPoint& a2, ::Struct_2_310B46602BEB4586& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_424*, ::RPG::GameCore::FixPoint&, ::Struct_2_310B46602BEB4586&))((::PBYTE)hIl2Cpp + CLASS_1_B9ABEBB7EF32A7E1_APPLYVALUERULE_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::FixPoint Method_1_65CF90F521C6CEA5(::Class_0_16E4307DCC419505_424* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Class_0_16E4307DCC419505_424*))((::PBYTE)hIl2Cpp + CLASS_1_B9ABEBB7EF32A7E1_METHOD_1_65CF90F521C6CEA5_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_65CF90F521C6CEA5_1(::Class_0_16E4307DCC419505_424* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Class_0_16E4307DCC419505_424*))((::PBYTE)hIl2Cpp + CLASS_1_B9ABEBB7EF32A7E1_METHOD_1_65CF90F521C6CEA5_1_OFFSET))(this, a1);
	}
};
