#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

class Class_3_A3022627FD65DCC5;
namespace System { class String; }

#define RPG_CLIENT_DYNAMICFLOATINGOBJECT_DYNAMICFLOATINGOBJECT_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xA19F950)
#define RPG_CLIENT_DYNAMICFLOATINGOBJECT_DYNAMICFLOATINGOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0xA19F9A0)
#define RPG_CLIENT_DYNAMICFLOATINGOBJECT_DYNAMICFLOATINGOBJECT___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xA19F9B0)

namespace RPG::Client::DynamicFloatingObject
{
	inline static constexpr unsigned int DynamicFloatingObject_TypeDefinitionIndex = 67710;

	class DynamicFloatingObject : public ::RPG::Client::TAMonoPlugin_1<::Class_3_A3022627FD65DCC5*>
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

		::System::String* __iFixBaseProxy_GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICFLOATINGOBJECT_DYNAMICFLOATINGOBJECT___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
