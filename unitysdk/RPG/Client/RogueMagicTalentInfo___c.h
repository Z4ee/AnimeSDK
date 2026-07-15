#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueMagicTalentNodeData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ROGUEMAGICTALENTINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A1DB70)
#define RPG_CLIENT_ROGUEMAGICTALENTINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19A1DBA0)
#define RPG_CLIENT_ROGUEMAGICTALENTINFO___C__INIT_B__1_0_OFFSET UNITYSDK_OFFSET(0x19A1DBB0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicTalentInfo___c_TypeDefinitionIndex = 64443;

	class RogueMagicTalentInfo___c : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueMagicTalentInfo___c** StaticGet___9()
		{
			return (::RPG::Client::RogueMagicTalentInfo___c**)Il2CppClass::FromTypeDefinitionIndex(RogueMagicTalentInfo___c_TypeDefinitionIndex)->GetStaticField(0x268F0);
		}
		static ::System::Comparison_1<::RPG::Client::RogueMagicTalentNodeData*>** StaticGet___9__1_0()
		{
			return (::System::Comparison_1<::RPG::Client::RogueMagicTalentNodeData*>**)Il2CppClass::FromTypeDefinitionIndex(RogueMagicTalentInfo___c_TypeDefinitionIndex)->GetStaticField(0x268F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTINFO___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _Init_b__1_0(::RPG::Client::RogueMagicTalentNodeData* a1, ::RPG::Client::RogueMagicTalentNodeData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueMagicTalentNodeData*, ::RPG::Client::RogueMagicTalentNodeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTINFO___C__INIT_B__1_0_OFFSET))(this, a1, a2);
		}
	};
}
