#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCardPileType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }

#define CLASS_3_954FA5B15CD7185B_METHOD_3_B4C09A5853E73B8A_OFFSET UNITYSDK_OFFSET(0x1B513030)
#define CLASS_3_954FA5B15CD7185B_METHOD_3_C6C799B3DFBE236B_OFFSET UNITYSDK_OFFSET(0x1B512FF0)
#define CLASS_3_954FA5B15CD7185B__CTOR_OFFSET UNITYSDK_OFFSET(0x1B513020)

inline static constexpr unsigned int Class_3_954FA5B15CD7185B_TypeDefinitionIndex = 19137;

class Class_3_954FA5B15CD7185B : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::PredicateConfig* Field_3_0; // 0x18
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_1; // 0x20
	::RPG::GameCore::FateRinCardPileType Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_954FA5B15CD7185B__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_C6C799B3DFBE236B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_954FA5B15CD7185B*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_954FA5B15CD7185B*&))((::PBYTE)hIl2Cpp + CLASS_3_954FA5B15CD7185B_METHOD_3_C6C799B3DFBE236B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B4C09A5853E73B8A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_954FA5B15CD7185B* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_954FA5B15CD7185B*))((::PBYTE)hIl2Cpp + CLASS_3_954FA5B15CD7185B_METHOD_3_B4C09A5853E73B8A_OFFSET))(a1, a2);
	}
};
