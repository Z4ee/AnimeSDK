#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

class Class_3_8FE15D155B05EF4E_2;

#define RPG_CLIENT_DYNAMICFLOATINGOBJECT_FLOATINGMATERIAL__CTOR_OFFSET UNITYSDK_OFFSET(0xB821300)

namespace RPG::Client::DynamicFloatingObject
{
	inline static constexpr unsigned int FloatingMaterial_TypeDefinitionIndex = 68670;

	class FloatingMaterial : public ::RPG::Client::TAMonoPlugin_1<::Class_3_8FE15D155B05EF4E_2*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICFLOATINGOBJECT_FLOATINGMATERIAL__CTOR_OFFSET))(this);
		}
	};
}
