#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISSELF_METHOD_4_64219F948BEBB8D4_OFFSET UNITYSDK_OFFSET(0x1C300330)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISSELF_METHOD_4_B7A2F4A815F6E10A_OFFSET UNITYSDK_OFFSET(0x1C300470)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISSELF_METHOD_4_CAD4F7ABC139D72F_OFFSET UNITYSDK_OFFSET(0x1C3002F0)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISSELF_METHOD_4_EE54DF165FAF405F_OFFSET UNITYSDK_OFFSET(0x1C3004A0)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISSELF__CTOR_OFFSET UNITYSDK_OFFSET(0x1C300320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckModifierCallBackIsSelf_TypeDefinitionIndex = 22784;

	class ByCheckModifierCallBackIsSelf : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISSELF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CAD4F7ABC139D72F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckModifierCallBackIsSelf*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckModifierCallBackIsSelf*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISSELF_METHOD_4_CAD4F7ABC139D72F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_64219F948BEBB8D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckModifierCallBackIsSelf* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckModifierCallBackIsSelf*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISSELF_METHOD_4_64219F948BEBB8D4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B7A2F4A815F6E10A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackIsSelf*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackIsSelf*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISSELF_METHOD_4_B7A2F4A815F6E10A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EE54DF165FAF405F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackIsSelf* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackIsSelf*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISSELF_METHOD_4_EE54DF165FAF405F_OFFSET))(a1, a2);
		}
	};
}
