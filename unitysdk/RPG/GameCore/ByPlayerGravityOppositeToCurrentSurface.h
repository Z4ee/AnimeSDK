#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYPLAYERGRAVITYOPPOSITETOCURRENTSURFACE_METHOD_4_5790C917C115380D_OFFSET UNITYSDK_OFFSET(0x1CF57C60)
#define RPG_GAMECORE_BYPLAYERGRAVITYOPPOSITETOCURRENTSURFACE_METHOD_4_E665CDA6C76A144E_OFFSET UNITYSDK_OFFSET(0x1CF57C20)
#define RPG_GAMECORE_BYPLAYERGRAVITYOPPOSITETOCURRENTSURFACE_METHOD_4_F3BF1697B1C2867A_OFFSET UNITYSDK_OFFSET(0x1CF57DD0)
#define RPG_GAMECORE_BYPLAYERGRAVITYOPPOSITETOCURRENTSURFACE_METHOD_4_FE9715EEA9F30C67_OFFSET UNITYSDK_OFFSET(0x1CF57DA0)
#define RPG_GAMECORE_BYPLAYERGRAVITYOPPOSITETOCURRENTSURFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF57C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPlayerGravityOppositeToCurrentSurface_TypeDefinitionIndex = 21184;

	class ByPlayerGravityOppositeToCurrentSurface : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPLAYERGRAVITYOPPOSITETOCURRENTSURFACE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E665CDA6C76A144E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPlayerGravityOppositeToCurrentSurface*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPlayerGravityOppositeToCurrentSurface*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPLAYERGRAVITYOPPOSITETOCURRENTSURFACE_METHOD_4_E665CDA6C76A144E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5790C917C115380D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPlayerGravityOppositeToCurrentSurface* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPlayerGravityOppositeToCurrentSurface*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPLAYERGRAVITYOPPOSITETOCURRENTSURFACE_METHOD_4_5790C917C115380D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FE9715EEA9F30C67(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPlayerGravityOppositeToCurrentSurface*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPlayerGravityOppositeToCurrentSurface*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPLAYERGRAVITYOPPOSITETOCURRENTSURFACE_METHOD_4_FE9715EEA9F30C67_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F3BF1697B1C2867A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPlayerGravityOppositeToCurrentSurface* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPlayerGravityOppositeToCurrentSurface*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPLAYERGRAVITYOPPOSITETOCURRENTSURFACE_METHOD_4_F3BF1697B1C2867A_OFFSET))(a1, a2);
		}
	};
}
