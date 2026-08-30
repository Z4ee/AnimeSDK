#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FeatureData; }
namespace RPG::Client { class IdentityData; }
namespace System { class String; }

#define RPG_CLIENT_ASSEMNPCCONFIG___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B32EC20)
#define RPG_CLIENT_ASSEMNPCCONFIG___C__DISPLAYCLASS6_0__INSERTNPCTODATA_B__0_OFFSET UNITYSDK_OFFSET(0x1B32F2B0)
#define RPG_CLIENT_ASSEMNPCCONFIG___C__DISPLAYCLASS6_0__INSERTNPCTODATA_B__1_OFFSET UNITYSDK_OFFSET(0x1B32F300)

namespace RPG::Client
{
	inline static constexpr unsigned int AssemNPCConfig___c__DisplayClass6_0_TypeDefinitionIndex = 60143;

	class AssemNPCConfig___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::String* FeatureID; // 0x10
		::System::String* IdentityID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPCCONFIG___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _InsertNPCToData_b__0(::RPG::Client::IdentityData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IdentityData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPCCONFIG___C__DISPLAYCLASS6_0__INSERTNPCTODATA_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _InsertNPCToData_b__1(::RPG::Client::FeatureData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FeatureData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPCCONFIG___C__DISPLAYCLASS6_0__INSERTNPCTODATA_B__1_OFFSET))(this, a1);
		}
	};
}
