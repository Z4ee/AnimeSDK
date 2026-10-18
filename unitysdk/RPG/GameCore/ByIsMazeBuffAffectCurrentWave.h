#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISMAZEBUFFAFFECTCURRENTWAVE_METHOD_4_427B7570E0C9B78D_OFFSET UNITYSDK_OFFSET(0x1D4EF0F0)
#define RPG_GAMECORE_BYISMAZEBUFFAFFECTCURRENTWAVE_METHOD_4_94F6D77EFE864B74_OFFSET UNITYSDK_OFFSET(0x1D4EF0B0)
#define RPG_GAMECORE_BYISMAZEBUFFAFFECTCURRENTWAVE_METHOD_4_B2AE4426BCE2CAB1_OFFSET UNITYSDK_OFFSET(0x1D4EF2C0)
#define RPG_GAMECORE_BYISMAZEBUFFAFFECTCURRENTWAVE_METHOD_4_E3A9E343FAC85FAE_OFFSET UNITYSDK_OFFSET(0x1D4EF290)
#define RPG_GAMECORE_BYISMAZEBUFFAFFECTCURRENTWAVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4EF0E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsMazeBuffAffectCurrentWave_TypeDefinitionIndex = 23522;

	class ByIsMazeBuffAffectCurrentWave : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* MazeBuffID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMAZEBUFFAFFECTCURRENTWAVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_94F6D77EFE864B74(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsMazeBuffAffectCurrentWave*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsMazeBuffAffectCurrentWave*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMAZEBUFFAFFECTCURRENTWAVE_METHOD_4_94F6D77EFE864B74_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_427B7570E0C9B78D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsMazeBuffAffectCurrentWave* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsMazeBuffAffectCurrentWave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMAZEBUFFAFFECTCURRENTWAVE_METHOD_4_427B7570E0C9B78D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E3A9E343FAC85FAE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsMazeBuffAffectCurrentWave*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsMazeBuffAffectCurrentWave*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMAZEBUFFAFFECTCURRENTWAVE_METHOD_4_E3A9E343FAC85FAE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B2AE4426BCE2CAB1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsMazeBuffAffectCurrentWave* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsMazeBuffAffectCurrentWave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMAZEBUFFAFFECTCURRENTWAVE_METHOD_4_B2AE4426BCE2CAB1_OFFSET))(a1, a2);
		}
	};
}
