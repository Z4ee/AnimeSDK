#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournTitanTalentNodeData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ROGUETOURNTITANTALENTINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC867470)
#define RPG_CLIENT_ROGUETOURNTITANTALENTINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC8674A0)
#define RPG_CLIENT_ROGUETOURNTITANTALENTINFO___C__INIT_B__1_0_OFFSET UNITYSDK_OFFSET(0xC8674B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournTitanTalentInfo___c_TypeDefinitionIndex = 63487;

	class RogueTournTitanTalentInfo___c : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueTournTitanTalentInfo___c** StaticGet___9()
		{
			return (::RPG::Client::RogueTournTitanTalentInfo___c**)Il2CppClass::FromTypeDefinitionIndex(RogueTournTitanTalentInfo___c_TypeDefinitionIndex)->GetStaticField(0x431B0);
		}
		static ::System::Comparison_1<::RPG::Client::RogueTournTitanTalentNodeData*>** StaticGet___9__1_0()
		{
			return (::System::Comparison_1<::RPG::Client::RogueTournTitanTalentNodeData*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournTitanTalentInfo___c_TypeDefinitionIndex)->GetStaticField(0x431B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANTALENTINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANTALENTINFO___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _Init_b__1_0(::RPG::Client::RogueTournTitanTalentNodeData* a1, ::RPG::Client::RogueTournTitanTalentNodeData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueTournTitanTalentNodeData*, ::RPG::Client::RogueTournTitanTalentNodeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANTALENTINFO___C__INIT_B__1_0_OFFSET))(this, a1, a2);
		}
	};
}
