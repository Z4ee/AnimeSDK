#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B34155E97AA41F6E;
class Class_1_D7976A8B64BD43B9;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_54CC509CB7D978AB_METHOD_1_57D80B372834C5D1_OFFSET UNITYSDK_OFFSET(0x99B56E0)
#define CLASS_1_54CC509CB7D978AB_METHOD_1_8850DF821523F031_OFFSET UNITYSDK_OFFSET(0x99B5730)
#define CLASS_1_54CC509CB7D978AB_METHOD_1_AB5C526925451715_OFFSET UNITYSDK_OFFSET(0x99B5660)
#define CLASS_1_54CC509CB7D978AB__CTOR_OFFSET UNITYSDK_OFFSET(0x99B56D0)

inline static constexpr unsigned int Class_1_54CC509CB7D978AB_TypeDefinitionIndex = 59018;

class Class_1_54CC509CB7D978AB : public ::System::Object
{
public:
	::Class_1_B34155E97AA41F6E* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54CC509CB7D978AB__CTOR_OFFSET))(this);
	}

	static ::Class_1_54CC509CB7D978AB* Method_1_AB5C526925451715(::Class_1_B34155E97AA41F6E* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::Class_1_54CC509CB7D978AB*(*)(::Class_1_B34155E97AA41F6E*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_54CC509CB7D978AB_METHOD_1_AB5C526925451715_OFFSET))(a1, a2);
	}

	::System::Void Method_1_57D80B372834C5D1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_54CC509CB7D978AB_METHOD_1_57D80B372834C5D1_OFFSET))(this, a1);
	}

	::Class_1_D7976A8B64BD43B9* Method_1_8850DF821523F031()
	{
		return ((::Class_1_D7976A8B64BD43B9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54CC509CB7D978AB_METHOD_1_8850DF821523F031_OFFSET))(this);
	}
};
