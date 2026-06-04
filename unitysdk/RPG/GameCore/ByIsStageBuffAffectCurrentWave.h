#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISSTAGEBUFFAFFECTCURRENTWAVE_METHOD_4_10C7EE2E51580B5B_OFFSET UNITYSDK_OFFSET(0x1956E730)
#define RPG_GAMECORE_BYISSTAGEBUFFAFFECTCURRENTWAVE_METHOD_4_1A499F236759CEF4_OFFSET UNITYSDK_OFFSET(0x1956E570)
#define RPG_GAMECORE_BYISSTAGEBUFFAFFECTCURRENTWAVE_METHOD_4_3BE4F4D92434300F_OFFSET UNITYSDK_OFFSET(0x1956E6B0)
#define RPG_GAMECORE_BYISSTAGEBUFFAFFECTCURRENTWAVE_METHOD_4_B637CD89E571485E_OFFSET UNITYSDK_OFFSET(0x1956E4A0)
#define RPG_GAMECORE_BYISSTAGEBUFFAFFECTCURRENTWAVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1956E520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsStageBuffAffectCurrentWave_TypeDefinitionIndex = 22239;

	class ByIsStageBuffAffectCurrentWave : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSTAGEBUFFAFFECTCURRENTWAVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B637CD89E571485E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsStageBuffAffectCurrentWave*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsStageBuffAffectCurrentWave*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSTAGEBUFFAFFECTCURRENTWAVE_METHOD_4_B637CD89E571485E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1A499F236759CEF4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsStageBuffAffectCurrentWave* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsStageBuffAffectCurrentWave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSTAGEBUFFAFFECTCURRENTWAVE_METHOD_4_1A499F236759CEF4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3BE4F4D92434300F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsStageBuffAffectCurrentWave*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsStageBuffAffectCurrentWave*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSTAGEBUFFAFFECTCURRENTWAVE_METHOD_4_3BE4F4D92434300F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_10C7EE2E51580B5B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsStageBuffAffectCurrentWave* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsStageBuffAffectCurrentWave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSTAGEBUFFAFFECTCURRENTWAVE_METHOD_4_10C7EE2E51580B5B_OFFSET))(a1, a2);
		}
	};
}
