#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraBattleTargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERASETATTACHPOINTACTIVE_METHOD_3_768A98070B2AAABC_OFFSET UNITYSDK_OFFSET(0x18809DE0)
#define RPG_GAMECORE_CHIMERASETATTACHPOINTACTIVE_METHOD_3_EE542F70F31BAF9C_OFFSET UNITYSDK_OFFSET(0x18809D80)
#define RPG_GAMECORE_CHIMERASETATTACHPOINTACTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x18809DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraSetAttachPointActive_TypeDefinitionIndex = 15029;

	class ChimeraSetAttachPointActive : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::System::String* AttachPoint; // 0x18
		::RPG::GameCore::ChimeraBattleTargetEvaluator* Target; // 0x20
		::System::Boolean ActiveState; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERASETATTACHPOINTACTIVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EE542F70F31BAF9C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraSetAttachPointActive*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraSetAttachPointActive*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERASETATTACHPOINTACTIVE_METHOD_3_EE542F70F31BAF9C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_768A98070B2AAABC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraSetAttachPointActive* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraSetAttachPointActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERASETATTACHPOINTACTIVE_METHOD_3_768A98070B2AAABC_OFFSET))(a1, a2);
		}
	};
}
