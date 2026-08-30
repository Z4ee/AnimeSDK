#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCardPileType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }

#define CLASS_3_954FA5B15CD7185B_METHOD_3_B4C09A5853E73B8A_OFFSET UNITYSDK_OFFSET(0x1C8D9A60)
#define CLASS_3_954FA5B15CD7185B_METHOD_3_C6C799B3DFBE236B_OFFSET UNITYSDK_OFFSET(0x1C8D9A20)
#define CLASS_3_954FA5B15CD7185B__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8D9A50)

inline static constexpr unsigned int Class_3_954FA5B15CD7185B_TypeDefinitionIndex = 19678;

class Class_3_954FA5B15CD7185B : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* NKCKAJPAJCJ; // 0x18
	::RPG::GameCore::PredicateConfig* FHAAHMEJMCI; // 0x20
	::RPG::GameCore::FateRinCardPileType IANCHJFBKFC; // 0x28

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
