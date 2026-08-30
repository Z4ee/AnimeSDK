#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournPersonaTalentGroupData; }
namespace RPG::Client { class RogueTournPersonaTalentNodeData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C7B3C10)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7B3C40)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO___C__INIT_B__1_0_OFFSET UNITYSDK_OFFSET(0x1C7B3C50)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO___C__INIT_B__1_1_OFFSET UNITYSDK_OFFSET(0x1C7B3C90)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaTalentInfo___c_TypeDefinitionIndex = 67760;

	class RogueTournPersonaTalentInfo___c : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueTournPersonaTalentInfo___c** StaticGet___9()
		{
			return (::RPG::Client::RogueTournPersonaTalentInfo___c**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPersonaTalentInfo___c_TypeDefinitionIndex)->GetStaticField(0x180C0);
		}
		static ::System::Comparison_1<::RPG::Client::RogueTournPersonaTalentGroupData*>** StaticGet___9__1_0()
		{
			return (::System::Comparison_1<::RPG::Client::RogueTournPersonaTalentGroupData*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPersonaTalentInfo___c_TypeDefinitionIndex)->GetStaticField(0x180C8);
		}
		static ::System::Comparison_1<::RPG::Client::RogueTournPersonaTalentNodeData*>** StaticGet___9__1_1()
		{
			return (::System::Comparison_1<::RPG::Client::RogueTournPersonaTalentNodeData*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPersonaTalentInfo___c_TypeDefinitionIndex)->GetStaticField(0x180D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTINFO___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _Init_b__1_0(::RPG::Client::RogueTournPersonaTalentGroupData* a1, ::RPG::Client::RogueTournPersonaTalentGroupData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueTournPersonaTalentGroupData*, ::RPG::Client::RogueTournPersonaTalentGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTINFO___C__INIT_B__1_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _Init_b__1_1(::RPG::Client::RogueTournPersonaTalentNodeData* a1, ::RPG::Client::RogueTournPersonaTalentNodeData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueTournPersonaTalentNodeData*, ::RPG::Client::RogueTournPersonaTalentNodeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTINFO___C__INIT_B__1_1_OFFSET))(this, a1, a2);
		}
	};
}
