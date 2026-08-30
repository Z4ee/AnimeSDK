#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHIMERADUELISMASTERSELECTED_METHOD_4_1DAA222659CC2643_OFFSET UNITYSDK_OFFSET(0x1CEAF090)
#define RPG_GAMECORE_BYCHIMERADUELISMASTERSELECTED_METHOD_4_525B4DA2CD16C60C_OFFSET UNITYSDK_OFFSET(0x1CEAF0C0)
#define RPG_GAMECORE_BYCHIMERADUELISMASTERSELECTED_METHOD_4_D7DAAC50D7F0DDFA_OFFSET UNITYSDK_OFFSET(0x1CEAEEE0)
#define RPG_GAMECORE_BYCHIMERADUELISMASTERSELECTED_METHOD_4_DD6DF32DC627F547_OFFSET UNITYSDK_OFFSET(0x1CEAEF20)
#define RPG_GAMECORE_BYCHIMERADUELISMASTERSELECTED__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEAEF10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByChimeraDuelIsMasterSelected_TypeDefinitionIndex = 24030;

	class ByChimeraDuelIsMasterSelected : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 MasterID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHIMERADUELISMASTERSELECTED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D7DAAC50D7F0DDFA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByChimeraDuelIsMasterSelected*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByChimeraDuelIsMasterSelected*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHIMERADUELISMASTERSELECTED_METHOD_4_D7DAAC50D7F0DDFA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DD6DF32DC627F547(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByChimeraDuelIsMasterSelected* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByChimeraDuelIsMasterSelected*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHIMERADUELISMASTERSELECTED_METHOD_4_DD6DF32DC627F547_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1DAA222659CC2643(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByChimeraDuelIsMasterSelected*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByChimeraDuelIsMasterSelected*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHIMERADUELISMASTERSELECTED_METHOD_4_1DAA222659CC2643_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_525B4DA2CD16C60C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByChimeraDuelIsMasterSelected* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByChimeraDuelIsMasterSelected*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHIMERADUELISMASTERSELECTED_METHOD_4_525B4DA2CD16C60C_OFFSET))(a1, a2);
		}
	};
}
