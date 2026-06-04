#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleResultConditionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_4E1537E8B0AE8FAE_METHOD_1_42BACE3BC7DBBCAD_OFFSET UNITYSDK_OFFSET(0x18F90B90)
#define CLASS_1_4E1537E8B0AE8FAE__CTOR_OFFSET UNITYSDK_OFFSET(0x18F90D10)

inline static constexpr unsigned int Class_1_4E1537E8B0AE8FAE_TypeDefinitionIndex = 14405;

class Class_1_4E1537E8B0AE8FAE : public ::System::Object
{
public:
	::System::Single Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x14
	::RPG::GameCore::BattleResultConditionType Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E1537E8B0AE8FAE__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_42BACE3BC7DBBCAD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_4E1537E8B0AE8FAE*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_4E1537E8B0AE8FAE*&))((::PBYTE)hIl2Cpp + CLASS_1_4E1537E8B0AE8FAE_METHOD_1_42BACE3BC7DBBCAD_OFFSET))(a1, a2);
	}
};
