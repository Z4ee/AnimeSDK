#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/GameCore/VersusBarPropertyType.h"
#include "unitysdk/Struct_2_F7888AC8242D2E96.h"
#include "unitysdk/System/Object.h"

class Class_1_8279BFFA57BC2D0E;
class Class_1_DC622D61D9A09F3F_Class_1_C086B1B4F7274B96;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedGameMode; }

#define CLASS_1_DC622D61D9A09F3F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12462740)
#define CLASS_1_DC622D61D9A09F3F_GET_INFEVER_OFFSET UNITYSDK_OFFSET(0x12463990)
#define CLASS_1_DC622D61D9A09F3F_METHOD_1_1211ECE0F842159F_OFFSET UNITYSDK_OFFSET(0x12463850)
#define CLASS_1_DC622D61D9A09F3F_METHOD_1_3CBEECBF98D416CD_OFFSET UNITYSDK_OFFSET(0x12462910)
#define CLASS_1_DC622D61D9A09F3F_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x124637E0)
#define CLASS_1_DC622D61D9A09F3F_METHOD_1_4F9EF763A05B12C4_OFFSET UNITYSDK_OFFSET(0x12462890)
#define CLASS_1_DC622D61D9A09F3F_METHOD_1_5C3494A3B250FBC5_OFFSET UNITYSDK_OFFSET(0x12462790)
#define CLASS_1_DC622D61D9A09F3F_METHOD_1_5CF2D44BB37E9C8B_OFFSET UNITYSDK_OFFSET(0x12462A30)
#define CLASS_1_DC622D61D9A09F3F_METHOD_1_786A310DBBE11A73_OFFSET UNITYSDK_OFFSET(0x12463480)
#define CLASS_1_DC622D61D9A09F3F_METHOD_1_8E43C92407D613CD_OFFSET UNITYSDK_OFFSET(0x12462B10)
#define CLASS_1_DC622D61D9A09F3F_METHOD_1_8EDB7FE5AA37C50F_OFFSET UNITYSDK_OFFSET(0x12463980)
#define CLASS_1_DC622D61D9A09F3F_METHOD_1_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x124638D0)
#define CLASS_1_DC622D61D9A09F3F_METHOD_1_BCE798CBE530EB6C_OFFSET UNITYSDK_OFFSET(0x12463160)
#define CLASS_1_DC622D61D9A09F3F_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x12463740)
#define CLASS_1_DC622D61D9A09F3F_SET_INFEVER_OFFSET UNITYSDK_OFFSET(0x124639A0)
#define CLASS_1_DC622D61D9A09F3F__CTOR_OFFSET UNITYSDK_OFFSET(0x12462720)

inline static constexpr unsigned int Class_1_DC622D61D9A09F3F_TypeDefinitionIndex = 51870;

class Class_1_DC622D61D9A09F3F : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedGameMode* Field_1_1; // 0x10
	::Class_1_DC622D61D9A09F3F_Class_1_C086B1B4F7274B96* Field_1_2; // 0x18
	::Class_1_DC622D61D9A09F3F_Class_1_C086B1B4F7274B96* Field_1_3; // 0x20
	::RPG::GameCore::FixPoint Field_1_4; // 0x28
	::System::Boolean _InFever_k__BackingField; // 0x30

	::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + CLASS_1_DC622D61D9A09F3F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC622D61D9A09F3F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_5C3494A3B250FBC5(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_DC622D61D9A09F3F_METHOD_1_5C3494A3B250FBC5_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_4F9EF763A05B12C4(::RPG::GameCore::TeamType a1, ::RPG::GameCore::VersusBarPropertyType a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::TeamType, ::RPG::GameCore::VersusBarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_DC622D61D9A09F3F_METHOD_1_4F9EF763A05B12C4_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_3CBEECBF98D416CD(::RPG::GameCore::TeamType a1, ::RPG::GameCore::VersusBarPropertyType a2, ::RPG::GameCore::FixPoint& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TeamType, ::RPG::GameCore::VersusBarPropertyType, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_1_DC622D61D9A09F3F_METHOD_1_3CBEECBF98D416CD_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_8E43C92407D613CD(::RPG::GameCore::TeamType a1, ::RPG::GameCore::VersusBarPropertyType a2, ::RPG::GameCore::PropertyModifyFunction a3, ::RPG::GameCore::FixPoint a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TeamType, ::RPG::GameCore::VersusBarPropertyType, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_DC622D61D9A09F3F_METHOD_1_8E43C92407D613CD_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DC622D61D9A09F3F_METHOD_1_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_1_1211ECE0F842159F(::Class_1_8279BFFA57BC2D0E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8279BFFA57BC2D0E*))((::PBYTE)hIl2Cpp + CLASS_1_DC622D61D9A09F3F_METHOD_1_1211ECE0F842159F_OFFSET))(this, a1);
	}

	::System::Void Method_1_BCCEF225A11BDA90(::Struct_2_F7888AC8242D2E96 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F7888AC8242D2E96))((::PBYTE)hIl2Cpp + CLASS_1_DC622D61D9A09F3F_METHOD_1_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_1_BCE798CBE530EB6C(::RPG::GameCore::TeamType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + CLASS_1_DC622D61D9A09F3F_METHOD_1_BCE798CBE530EB6C_OFFSET))(this, a1);
	}

	::Class_1_DC622D61D9A09F3F_Class_1_C086B1B4F7274B96* Method_1_5CF2D44BB37E9C8B(::RPG::GameCore::TeamType a1)
	{
		return ((::Class_1_DC622D61D9A09F3F_Class_1_C086B1B4F7274B96*(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + CLASS_1_DC622D61D9A09F3F_METHOD_1_5CF2D44BB37E9C8B_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DC622D61D9A09F3F_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_786A310DBBE11A73(::RPG::GameCore::TeamType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + CLASS_1_DC622D61D9A09F3F_METHOD_1_786A310DBBE11A73_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_8EDB7FE5AA37C50F()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC622D61D9A09F3F_METHOD_1_8EDB7FE5AA37C50F_OFFSET))(this);
	}

	::System::Boolean get_InFever()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC622D61D9A09F3F_GET_INFEVER_OFFSET))(this);
	}

	::System::Void set_InFever(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DC622D61D9A09F3F_SET_INFEVER_OFFSET))(this, value);
	}
};
