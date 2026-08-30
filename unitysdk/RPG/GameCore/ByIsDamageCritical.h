#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISDAMAGECRITICAL_METHOD_4_33EC9A8074130CF8_OFFSET UNITYSDK_OFFSET(0x1CF368F0)
#define RPG_GAMECORE_BYISDAMAGECRITICAL_METHOD_4_60BA0FA3FB3EEAFD_OFFSET UNITYSDK_OFFSET(0x1CF36770)
#define RPG_GAMECORE_BYISDAMAGECRITICAL_METHOD_4_8D79F9D27F8F0799_OFFSET UNITYSDK_OFFSET(0x1CF36920)
#define RPG_GAMECORE_BYISDAMAGECRITICAL_METHOD_4_DE85DB40986C553E_OFFSET UNITYSDK_OFFSET(0x1CF367B0)
#define RPG_GAMECORE_BYISDAMAGECRITICAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF367A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsDamageCritical_TypeDefinitionIndex = 23226;

	class ByIsDamageCritical : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDAMAGECRITICAL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_60BA0FA3FB3EEAFD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsDamageCritical*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsDamageCritical*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDAMAGECRITICAL_METHOD_4_60BA0FA3FB3EEAFD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DE85DB40986C553E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsDamageCritical* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsDamageCritical*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDAMAGECRITICAL_METHOD_4_DE85DB40986C553E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_33EC9A8074130CF8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsDamageCritical*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsDamageCritical*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDAMAGECRITICAL_METHOD_4_33EC9A8074130CF8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8D79F9D27F8F0799(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsDamageCritical* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsDamageCritical*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDAMAGECRITICAL_METHOD_4_8D79F9D27F8F0799_OFFSET))(a1, a2);
		}
	};
}
