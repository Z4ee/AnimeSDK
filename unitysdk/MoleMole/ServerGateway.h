#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_SERVERGATEWAY__CTOR_OFFSET UNITYSDK_OFFSET(0x19988E90)

namespace MoleMole
{
	inline static constexpr unsigned int ServerGateway_TypeDefinitionIndex = 88911;

	class ServerGateway : public ::System::Object
	{
	public:
		::System::String* ip; // 0x10
		::System::Int32 port; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SERVERGATEWAY__CTOR_OFFSET))(this);
		}
	};
}
