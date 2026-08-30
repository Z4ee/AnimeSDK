#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueSiteData; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_ROGUEMAPDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B9E0260)
#define RPG_CLIENT_ROGUEMAPDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9E02A0)
#define RPG_CLIENT_ROGUEMAPDATA___C__GETBRANCHTOTALNUM_B__10_0_OFFSET UNITYSDK_OFFSET(0x1B9E0380)
#define RPG_CLIENT_ROGUEMAPDATA___C__GETSTARTROGUESITEDATA_B__5_0_OFFSET UNITYSDK_OFFSET(0x1B9E02B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMapData___c_TypeDefinitionIndex = 67458;

	class RogueMapData___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::RPG::Client::RogueSiteData*>** StaticGet___9__5_0()
		{
			return (::System::Predicate_1<::RPG::Client::RogueSiteData*>**)Il2CppClass::FromTypeDefinitionIndex(RogueMapData___c_TypeDefinitionIndex)->GetStaticField(0xA850);
		}
		static ::System::Predicate_1<::RPG::Client::RogueSiteData*>** StaticGet___9__10_0()
		{
			return (::System::Predicate_1<::RPG::Client::RogueSiteData*>**)Il2CppClass::FromTypeDefinitionIndex(RogueMapData___c_TypeDefinitionIndex)->GetStaticField(0xA858);
		}
		static ::RPG::Client::RogueMapData___c** StaticGet___9()
		{
			return (::RPG::Client::RogueMapData___c**)Il2CppClass::FromTypeDefinitionIndex(RogueMapData___c_TypeDefinitionIndex)->GetStaticField(0xA860);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetStartRogueSiteData_b__5_0(::RPG::Client::RogueSiteData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueSiteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA___C__GETSTARTROGUESITEDATA_B__5_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetBranchTotalNum_b__10_0(::RPG::Client::RogueSiteData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueSiteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA___C__GETBRANCHTOTALNUM_B__10_0_OFFSET))(this, a1);
		}
	};
}
