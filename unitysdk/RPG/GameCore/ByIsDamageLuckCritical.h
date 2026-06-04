#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISDAMAGELUCKCRITICAL_METHOD_4_3AD062F94FF3318C_OFFSET UNITYSDK_OFFSET(0x1955FD70)
#define RPG_GAMECORE_BYISDAMAGELUCKCRITICAL_METHOD_4_47EF1422F9370403_OFFSET UNITYSDK_OFFSET(0x1955FBB0)
#define RPG_GAMECORE_BYISDAMAGELUCKCRITICAL_METHOD_4_66DCEAD8685F3359_OFFSET UNITYSDK_OFFSET(0x1955FAE0)
#define RPG_GAMECORE_BYISDAMAGELUCKCRITICAL_METHOD_4_D396A549806584D4_OFFSET UNITYSDK_OFFSET(0x1955FCF0)
#define RPG_GAMECORE_BYISDAMAGELUCKCRITICAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1955FB60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsDamageLuckCritical_TypeDefinitionIndex = 22215;

	class ByIsDamageLuckCritical : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDAMAGELUCKCRITICAL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_66DCEAD8685F3359(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsDamageLuckCritical*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsDamageLuckCritical*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDAMAGELUCKCRITICAL_METHOD_4_66DCEAD8685F3359_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_47EF1422F9370403(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsDamageLuckCritical* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsDamageLuckCritical*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDAMAGELUCKCRITICAL_METHOD_4_47EF1422F9370403_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D396A549806584D4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsDamageLuckCritical*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsDamageLuckCritical*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDAMAGELUCKCRITICAL_METHOD_4_D396A549806584D4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3AD062F94FF3318C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsDamageLuckCritical* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsDamageLuckCritical*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDAMAGELUCKCRITICAL_METHOD_4_3AD062F94FF3318C_OFFSET))(a1, a2);
		}
	};
}
