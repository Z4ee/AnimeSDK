#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournPersonaTalentGroupData; }
namespace RPG::Client { class RogueTournPersonaTalentNodeData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA3CB270)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA3CB2A0)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO___C__INIT_B__1_0_OFFSET UNITYSDK_OFFSET(0xA3CB2B0)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO___C__INIT_B__1_1_OFFSET UNITYSDK_OFFSET(0xA3CB2F0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaTalentInfo___c_TypeDefinitionIndex = 55267;

	class RogueTournPersonaTalentInfo___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::RogueTournPersonaTalentNodeData*>** StaticGet___9__1_1()
		{
			return (::System::Comparison_1<::RPG::Client::RogueTournPersonaTalentNodeData*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPersonaTalentInfo___c_TypeDefinitionIndex)->GetStaticField(0x1F730);
		}
		static ::System::Comparison_1<::RPG::Client::RogueTournPersonaTalentGroupData*>** StaticGet___9__1_0()
		{
			return (::System::Comparison_1<::RPG::Client::RogueTournPersonaTalentGroupData*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPersonaTalentInfo___c_TypeDefinitionIndex)->GetStaticField(0x1F738);
		}
		static ::RPG::Client::RogueTournPersonaTalentInfo___c** StaticGet___9()
		{
			return (::RPG::Client::RogueTournPersonaTalentInfo___c**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPersonaTalentInfo___c_TypeDefinitionIndex)->GetStaticField(0x1F740);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTINFO___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _Init_b__1_0(::RPG::Client::RogueTournPersonaTalentGroupData* a, ::RPG::Client::RogueTournPersonaTalentGroupData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueTournPersonaTalentGroupData*, ::RPG::Client::RogueTournPersonaTalentGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTINFO___C__INIT_B__1_0_OFFSET))(this, a, b);
		}

		::System::Int32 _Init_b__1_1(::RPG::Client::RogueTournPersonaTalentNodeData* a, ::RPG::Client::RogueTournPersonaTalentNodeData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueTournPersonaTalentNodeData*, ::RPG::Client::RogueTournPersonaTalentNodeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTINFO___C__INIT_B__1_1_OFFSET))(this, a, b);
		}
	};
}
