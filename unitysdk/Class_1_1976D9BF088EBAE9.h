#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LittleGameValueCalculateType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_255;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }
namespace RPG::GameCore { class LittleGameAbilityValueGetterCalculateConfig; }

#define CLASS_1_1976D9BF088EBAE9_GETVALUE_OFFSET UNITYSDK_OFFSET(0xB7CD5F0)
#define CLASS_1_1976D9BF088EBAE9_METHOD_1_47CA51EDCA4ADAF3_OFFSET UNITYSDK_OFFSET(0xB7CD9A0)
#define CLASS_1_1976D9BF088EBAE9_METHOD_1_B9A6A07A43BC8BE9_OFFSET UNITYSDK_OFFSET(0xB7CDAD0)
#define CLASS_1_1976D9BF088EBAE9_METHOD_1_CF87EC36C5E3C83A_OFFSET UNITYSDK_OFFSET(0xB7CD8E0)
#define CLASS_1_1976D9BF088EBAE9__CTOR_OFFSET UNITYSDK_OFFSET(0xB7CDBE0)

inline static constexpr unsigned int Class_1_1976D9BF088EBAE9_TypeDefinitionIndex = 76930;

class Class_1_1976D9BF088EBAE9 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1976D9BF088EBAE9__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint GetValue(::Class_0_16E4307DCC419505_255* a1, ::Entitas::IEntity* a2, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Class_0_16E4307DCC419505_255*, ::Entitas::IEntity*, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig*))((::PBYTE)hIl2Cpp + CLASS_1_1976D9BF088EBAE9_GETVALUE_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Boolean Method_1_CF87EC36C5E3C83A(::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* a1, ::RPG::GameCore::LittleGameAbilityValueGetterCalculateConfig*& a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig*, ::RPG::GameCore::LittleGameAbilityValueGetterCalculateConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_1976D9BF088EBAE9_METHOD_1_CF87EC36C5E3C83A_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_47CA51EDCA4ADAF3(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::LittleGameValueCalculateType a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::LittleGameValueCalculateType))((::PBYTE)hIl2Cpp + CLASS_1_1976D9BF088EBAE9_METHOD_1_47CA51EDCA4ADAF3_OFFSET))(a1, a2, a3);
	}

	static ::RPG::GameCore::FixPoint Method_1_B9A6A07A43BC8BE9(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_1976D9BF088EBAE9_METHOD_1_B9A6A07A43BC8BE9_OFFSET))(a1, a2);
	}
};
