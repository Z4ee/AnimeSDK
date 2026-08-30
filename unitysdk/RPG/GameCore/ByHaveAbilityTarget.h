#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHAVEABILITYTARGET_METHOD_4_6415DB9A8AAFA1C2_OFFSET UNITYSDK_OFFSET(0x1BBE4A80)
#define RPG_GAMECORE_BYHAVEABILITYTARGET_METHOD_4_9485F2AF4E0CEFA6_OFFSET UNITYSDK_OFFSET(0x1BBE4C30)
#define RPG_GAMECORE_BYHAVEABILITYTARGET_METHOD_4_95ED2DCA5EFC5D49_OFFSET UNITYSDK_OFFSET(0x1BBE4AC0)
#define RPG_GAMECORE_BYHAVEABILITYTARGET_METHOD_4_B884F6B8C22AE4F3_OFFSET UNITYSDK_OFFSET(0x1BBE4C00)
#define RPG_GAMECORE_BYHAVEABILITYTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBE4AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHaveAbilityTarget_TypeDefinitionIndex = 20015;

	class ByHaveAbilityTarget : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEABILITYTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6415DB9A8AAFA1C2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHaveAbilityTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHaveAbilityTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEABILITYTARGET_METHOD_4_6415DB9A8AAFA1C2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_95ED2DCA5EFC5D49(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHaveAbilityTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHaveAbilityTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEABILITYTARGET_METHOD_4_95ED2DCA5EFC5D49_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B884F6B8C22AE4F3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveAbilityTarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveAbilityTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEABILITYTARGET_METHOD_4_B884F6B8C22AE4F3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9485F2AF4E0CEFA6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveAbilityTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveAbilityTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEABILITYTARGET_METHOD_4_9485F2AF4E0CEFA6_OFFSET))(a1, a2);
		}
	};
}
