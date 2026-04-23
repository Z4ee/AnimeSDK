#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C4FD36003027AC99;
class Class_2_49CAB3DE74280C58;
namespace RPG::GameCore { class ChimeraDuelEntitiesFilterSelectorConfig; }

#define CLASS_1_645E852412BDAAD6___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11762200)
#define CLASS_1_645E852412BDAAD6___C__DISPLAYCLASS1_0___SELECTTARGET_B__0_OFFSET UNITYSDK_OFFSET(0x11762220)

inline static constexpr unsigned int Class_1_645E852412BDAAD6___c__DisplayClass1_0_TypeDefinitionIndex = 71105;

class Class_1_645E852412BDAAD6___c__DisplayClass1_0 : public ::System::Object
{
public:
	::Class_1_C4FD36003027AC99* context; // 0x10
	::RPG::GameCore::ChimeraDuelEntitiesFilterSelectorConfig* config; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_645E852412BDAAD6___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __SelectTarget_b__0(::Class_2_49CAB3DE74280C58* entity)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_49CAB3DE74280C58*))((::PBYTE)hIl2Cpp + CLASS_1_645E852412BDAAD6___C__DISPLAYCLASS1_0___SELECTTARGET_B__0_OFFSET))(this, entity);
	}
};
