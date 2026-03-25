#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISSELF_METHOD_4_64219F948BEBB8D4_OFFSET UNITYSDK_OFFSET(0x16FFF8F0)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISSELF_METHOD_4_BAC24EEB85E007BE_OFFSET UNITYSDK_OFFSET(0x16FFF820)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISSELF__CTOR_OFFSET UNITYSDK_OFFSET(0x16FFF8A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckModifierCallBackIsSelf_TypeDefinitionIndex = 21249;

	class ByCheckModifierCallBackIsSelf : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISSELF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BAC24EEB85E007BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckModifierCallBackIsSelf*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckModifierCallBackIsSelf*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISSELF_METHOD_4_BAC24EEB85E007BE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_64219F948BEBB8D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckModifierCallBackIsSelf* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckModifierCallBackIsSelf*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISSELF_METHOD_4_64219F948BEBB8D4_OFFSET))(a1, a2);
		}
	};
}
