#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISDAMAGELUCKCRITICAL_METHOD_4_0526CF12F981E0F0_OFFSET UNITYSDK_OFFSET(0x1CD9BC50)
#define RPG_GAMECORE_BYISDAMAGELUCKCRITICAL_METHOD_4_47EF1422F9370403_OFFSET UNITYSDK_OFFSET(0x1CD9BC90)
#define RPG_GAMECORE_BYISDAMAGELUCKCRITICAL_METHOD_4_D49F674F48742D90_OFFSET UNITYSDK_OFFSET(0x1CD9BE00)
#define RPG_GAMECORE_BYISDAMAGELUCKCRITICAL_METHOD_4_EFDF87D569449559_OFFSET UNITYSDK_OFFSET(0x1CD9BDD0)
#define RPG_GAMECORE_BYISDAMAGELUCKCRITICAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD9BC80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsDamageLuckCritical_TypeDefinitionIndex = 23230;

	class ByIsDamageLuckCritical : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDAMAGELUCKCRITICAL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0526CF12F981E0F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsDamageLuckCritical*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsDamageLuckCritical*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDAMAGELUCKCRITICAL_METHOD_4_0526CF12F981E0F0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_47EF1422F9370403(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsDamageLuckCritical* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsDamageLuckCritical*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDAMAGELUCKCRITICAL_METHOD_4_47EF1422F9370403_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EFDF87D569449559(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsDamageLuckCritical*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsDamageLuckCritical*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDAMAGELUCKCRITICAL_METHOD_4_EFDF87D569449559_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D49F674F48742D90(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsDamageLuckCritical* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsDamageLuckCritical*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDAMAGELUCKCRITICAL_METHOD_4_D49F674F48742D90_OFFSET))(a1, a2);
		}
	};
}
