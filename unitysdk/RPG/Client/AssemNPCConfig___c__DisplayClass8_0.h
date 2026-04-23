#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FeatureData; }
namespace RPG::Client { class IdentityData; }
namespace System { class String; }

#define RPG_CLIENT_ASSEMNPCCONFIG___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9D3C560)
#define RPG_CLIENT_ASSEMNPCCONFIG___C__DISPLAYCLASS8_0__REMOVENPCTODATA_B__0_OFFSET UNITYSDK_OFFSET(0x9D3C7A0)
#define RPG_CLIENT_ASSEMNPCCONFIG___C__DISPLAYCLASS8_0__REMOVENPCTODATA_B__1_OFFSET UNITYSDK_OFFSET(0x9D3C7F0)

namespace RPG::Client
{
	inline static constexpr unsigned int AssemNPCConfig___c__DisplayClass8_0_TypeDefinitionIndex = 55372;

	class AssemNPCConfig___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::String* IdentityID; // 0x10
		::System::String* FeatureID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPCCONFIG___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveNPCToData_b__0(::RPG::Client::IdentityData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IdentityData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPCCONFIG___C__DISPLAYCLASS8_0__REMOVENPCTODATA_B__0_OFFSET))(this, data);
		}

		::System::Boolean _RemoveNPCToData_b__1(::RPG::Client::FeatureData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FeatureData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPCCONFIG___C__DISPLAYCLASS8_0__REMOVENPCTODATA_B__1_OFFSET))(this, data);
		}
	};
}
