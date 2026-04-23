#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ROGUETOURNAVATARSTRENGTHENINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB0A4530)
#define RPG_CLIENT_ROGUETOURNAVATARSTRENGTHENINFO___C__CREATESTRENGTHENEDAVATARCOMPARER_B__3_0_OFFSET UNITYSDK_OFFSET(0xB0A4580)
#define RPG_CLIENT_ROGUETOURNAVATARSTRENGTHENINFO___C__CREATESTRENGTHENEDAVATARCOMPARER_B__3_1_OFFSET UNITYSDK_OFFSET(0xB0A4620)
#define RPG_CLIENT_ROGUETOURNAVATARSTRENGTHENINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB0A4570)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournAvatarStrengthenInfo___c_TypeDefinitionIndex = 62203;

	class RogueTournAvatarStrengthenInfo___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::IAvatarInfoProvider*>** StaticGet___9__3_0()
		{
			return (::System::Comparison_1<::RPG::Client::IAvatarInfoProvider*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournAvatarStrengthenInfo___c_TypeDefinitionIndex)->GetStaticField(0x17650);
		}
		static ::System::Comparison_1<::RPG::Client::IAvatarInfoProvider*>** StaticGet___9__3_1()
		{
			return (::System::Comparison_1<::RPG::Client::IAvatarInfoProvider*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournAvatarStrengthenInfo___c_TypeDefinitionIndex)->GetStaticField(0x17658);
		}
		static ::RPG::Client::RogueTournAvatarStrengthenInfo___c** StaticGet___9()
		{
			return (::RPG::Client::RogueTournAvatarStrengthenInfo___c**)Il2CppClass::FromTypeDefinitionIndex(RogueTournAvatarStrengthenInfo___c_TypeDefinitionIndex)->GetStaticField(0x17660);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAVATARSTRENGTHENINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAVATARSTRENGTHENINFO___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _CreateStrengthenedAvatarComparer_b__3_0(::RPG::Client::IAvatarInfoProvider* a, ::RPG::Client::IAvatarInfoProvider* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAVATARSTRENGTHENINFO___C__CREATESTRENGTHENEDAVATARCOMPARER_B__3_0_OFFSET))(this, a, b);
		}

		::System::Int32 _CreateStrengthenedAvatarComparer_b__3_1(::RPG::Client::IAvatarInfoProvider* a, ::RPG::Client::IAvatarInfoProvider* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAVATARSTRENGTHENINFO___C__CREATESTRENGTHENEDAVATARCOMPARER_B__3_1_OFFSET))(this, a, b);
		}
	};
}
