#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_DYNAMICOBJECTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x159F9060)

namespace MoleMole::Config
{
	inline static constexpr unsigned int DynamicObjectEntry_TypeDefinitionIndex = 56457;

	class DynamicObjectEntry : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::String* prefabPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICOBJECTENTRY__CTOR_OFFSET))(this);
		}
	};
}
