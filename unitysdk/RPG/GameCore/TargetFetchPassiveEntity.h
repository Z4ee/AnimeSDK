#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHPASSIVEENTITY_METHOD_4_5552BE9E63AE5870_OFFSET UNITYSDK_OFFSET(0x1D0BC3F0)
#define RPG_GAMECORE_TARGETFETCHPASSIVEENTITY_METHOD_4_632F01B6FB57A2F5_OFFSET UNITYSDK_OFFSET(0x1D0BC370)
#define RPG_GAMECORE_TARGETFETCHPASSIVEENTITY_METHOD_4_675BCBC480629A48_OFFSET UNITYSDK_OFFSET(0x1D0BC470)
#define RPG_GAMECORE_TARGETFETCHPASSIVEENTITY_METHOD_4_9D7B497A57475F95_OFFSET UNITYSDK_OFFSET(0x1D0BC450)
#define RPG_GAMECORE_TARGETFETCHPASSIVEENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0BC3E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchPassiveEntity_TypeDefinitionIndex = 23060;

	class TargetFetchPassiveEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPASSIVEENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_632F01B6FB57A2F5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchPassiveEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchPassiveEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPASSIVEENTITY_METHOD_4_632F01B6FB57A2F5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5552BE9E63AE5870(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchPassiveEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchPassiveEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPASSIVEENTITY_METHOD_4_5552BE9E63AE5870_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9D7B497A57475F95(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchPassiveEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchPassiveEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPASSIVEENTITY_METHOD_4_9D7B497A57475F95_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_675BCBC480629A48(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchPassiveEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchPassiveEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPASSIVEENTITY_METHOD_4_675BCBC480629A48_OFFSET))(a1, a2);
		}
	};
}
