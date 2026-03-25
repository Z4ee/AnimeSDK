#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroProperty.h"

namespace System { class String; }

#define ENVIROMENTSYSTEM_ENVIROGUIFOLDER__CTOR_OFFSET UNITYSDK_OFFSET(0xFB92110)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroGUIFolder_TypeDefinitionIndex = 40309;

	class EnviroGUIFolder : public ::EnviromentSystem::EnviroProperty
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGUIFOLDER__CTOR_OFFSET))(this, a1);
		}
	};
}
