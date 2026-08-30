#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

class Class_3_8FE15D155B05EF4E_3;

#define RPG_CLIENT_DYNAMICFLOATINGOBJECT_FLOATINGMATERIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A68C450)

namespace RPG::Client::DynamicFloatingObject
{
	inline static constexpr unsigned int FloatingMaterial_TypeDefinitionIndex = 73467;

	class FloatingMaterial : public ::RPG::Client::TAMonoPlugin_1<::Class_3_8FE15D155B05EF4E_3*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICFLOATINGOBJECT_FLOATINGMATERIAL__CTOR_OFFSET))(this);
		}
	};
}
