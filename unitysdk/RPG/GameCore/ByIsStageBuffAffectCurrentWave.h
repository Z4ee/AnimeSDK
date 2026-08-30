#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISSTAGEBUFFAFFECTCURRENTWAVE_METHOD_4_1A499F236759CEF4_OFFSET UNITYSDK_OFFSET(0x1CF495F0)
#define RPG_GAMECORE_BYISSTAGEBUFFAFFECTCURRENTWAVE_METHOD_4_7B843E74E1E42CCF_OFFSET UNITYSDK_OFFSET(0x1CF495B0)
#define RPG_GAMECORE_BYISSTAGEBUFFAFFECTCURRENTWAVE_METHOD_4_87DC67097E5FE72A_OFFSET UNITYSDK_OFFSET(0x1CF49730)
#define RPG_GAMECORE_BYISSTAGEBUFFAFFECTCURRENTWAVE_METHOD_4_C975984D402B587F_OFFSET UNITYSDK_OFFSET(0x1CF49760)
#define RPG_GAMECORE_BYISSTAGEBUFFAFFECTCURRENTWAVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF495E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsStageBuffAffectCurrentWave_TypeDefinitionIndex = 23256;

	class ByIsStageBuffAffectCurrentWave : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSTAGEBUFFAFFECTCURRENTWAVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7B843E74E1E42CCF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsStageBuffAffectCurrentWave*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsStageBuffAffectCurrentWave*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSTAGEBUFFAFFECTCURRENTWAVE_METHOD_4_7B843E74E1E42CCF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1A499F236759CEF4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsStageBuffAffectCurrentWave* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsStageBuffAffectCurrentWave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSTAGEBUFFAFFECTCURRENTWAVE_METHOD_4_1A499F236759CEF4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_87DC67097E5FE72A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsStageBuffAffectCurrentWave*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsStageBuffAffectCurrentWave*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSTAGEBUFFAFFECTCURRENTWAVE_METHOD_4_87DC67097E5FE72A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C975984D402B587F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsStageBuffAffectCurrentWave* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsStageBuffAffectCurrentWave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSTAGEBUFFAFFECTCURRENTWAVE_METHOD_4_C975984D402B587F_OFFSET))(a1, a2);
		}
	};
}
