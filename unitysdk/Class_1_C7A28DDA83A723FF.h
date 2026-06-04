#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CommonActivityLightConeRewardData; }
namespace RPG::Client { class CommonActivityLightConeRewardGroup; }
namespace RPG::GameCore { class PlanetFesOpticalRow; }

#define CLASS_1_C7A28DDA83A723FF_METHOD_1_434B1673358EBB7A_OFFSET UNITYSDK_OFFSET(0xA606BE0)
#define CLASS_1_C7A28DDA83A723FF_METHOD_1_7F671DD8AF337785_OFFSET UNITYSDK_OFFSET(0xA606FF0)
#define CLASS_1_C7A28DDA83A723FF__CTOR_OFFSET UNITYSDK_OFFSET(0xA607120)

inline static constexpr unsigned int Class_1_C7A28DDA83A723FF_TypeDefinitionIndex = 62285;

class Class_1_C7A28DDA83A723FF : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7A28DDA83A723FF__CTOR_OFFSET))(this);
	}

	static ::RPG::Client::CommonActivityLightConeRewardData* Method_1_434B1673358EBB7A()
	{
		return ((::RPG::Client::CommonActivityLightConeRewardData*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C7A28DDA83A723FF_METHOD_1_434B1673358EBB7A_OFFSET))();
	}

	static ::RPG::Client::CommonActivityLightConeRewardGroup* Method_1_7F671DD8AF337785(::RPG::GameCore::PlanetFesOpticalRow* a1, ::System::Boolean& a2)
	{
		return ((::RPG::Client::CommonActivityLightConeRewardGroup*(*)(::RPG::GameCore::PlanetFesOpticalRow*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_C7A28DDA83A723FF_METHOD_1_7F671DD8AF337785_OFFSET))(a1, a2);
	}
};
