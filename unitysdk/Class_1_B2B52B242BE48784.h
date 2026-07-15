#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/Struct_2_875B08BB13E31BEE.h"
#include "unitysdk/System/Object.h"

class Class_1_98133438BFCB56ED;
class Class_1_EECBD5A06B5F9826;

#define CLASS_1_B2B52B242BE48784_METHOD_1_6E503BB9B6BB4F2E_OFFSET UNITYSDK_OFFSET(0x16DBDB70)
#define CLASS_1_B2B52B242BE48784_METHOD_1_EB5FC25F02861AA5_OFFSET UNITYSDK_OFFSET(0x16DBE250)
#define CLASS_1_B2B52B242BE48784__CTOR_OFFSET UNITYSDK_OFFSET(0x16DBEB60)

inline static constexpr unsigned int Class_1_B2B52B242BE48784_TypeDefinitionIndex = 51218;

class Class_1_B2B52B242BE48784 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2B52B242BE48784__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_6E503BB9B6BB4F2E(::Class_1_98133438BFCB56ED* a1, ::Class_1_98133438BFCB56ED* a2, ::Struct_2_875B08BB13E31BEE& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_98133438BFCB56ED*, ::Class_1_98133438BFCB56ED*, ::Struct_2_875B08BB13E31BEE&))((::PBYTE)hIl2Cpp + CLASS_1_B2B52B242BE48784_METHOD_1_6E503BB9B6BB4F2E_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Boolean Method_1_EB5FC25F02861AA5(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2, ::Class_1_EECBD5A06B5F9826* a3, ::Class_1_EECBD5A06B5F9826* a4, ::RPG::GameCore::FixVec2 a5, ::RPG::GameCore::FixVec2 a6, ::RPG::GameCore::FixPoint& a7, ::RPG::GameCore::FixVec2& a8)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2, ::Class_1_EECBD5A06B5F9826*, ::Class_1_EECBD5A06B5F9826*, ::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2, ::RPG::GameCore::FixPoint&, ::RPG::GameCore::FixVec2&))((::PBYTE)hIl2Cpp + CLASS_1_B2B52B242BE48784_METHOD_1_EB5FC25F02861AA5_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}
};
