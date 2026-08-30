#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

class Class_3_D9DAF5014A6CC08C;
namespace System { class String; }

#define RPG_CLIENT_DYNAMICFLOATINGOBJECT_DYNAMICFLOATINGOBJECT_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x1A68C3F0)
#define RPG_CLIENT_DYNAMICFLOATINGOBJECT_DYNAMICFLOATINGOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A68C440)

namespace RPG::Client::DynamicFloatingObject
{
	inline static constexpr unsigned int DynamicFloatingObject_TypeDefinitionIndex = 73465;

	class DynamicFloatingObject : public ::RPG::Client::TAMonoPlugin_1<::Class_3_D9DAF5014A6CC08C*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICFLOATINGOBJECT_DYNAMICFLOATINGOBJECT__CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICFLOATINGOBJECT_DYNAMICFLOATINGOBJECT_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
