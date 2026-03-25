#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_839;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_FDCA5154ED04E4F6_CLASS_1_E4EA05CD4C374E2D__CTOR_OFFSET UNITYSDK_OFFSET(0x118F1E20)

inline static constexpr unsigned int Class_2_FDCA5154ED04E4F6_Class_1_E4EA05CD4C374E2D_TypeDefinitionIndex = 58621;

class Class_2_FDCA5154ED04E4F6_Class_1_E4EA05CD4C374E2D : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_839* Field_1_1; // 0x10
	::RPG::GameCore::GameEntity* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FDCA5154ED04E4F6_CLASS_1_E4EA05CD4C374E2D__CTOR_OFFSET))(this);
	}
};
