#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISSELF_METHOD_4_32FD39228BBA3C3B_OFFSET UNITYSDK_OFFSET(0x194FDC20)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISSELF_METHOD_4_51ECDF36565BDCEF_OFFSET UNITYSDK_OFFSET(0x194FDBA0)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISSELF_METHOD_4_64219F948BEBB8D4_OFFSET UNITYSDK_OFFSET(0x194FDA60)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISSELF_METHOD_4_BAC24EEB85E007BE_OFFSET UNITYSDK_OFFSET(0x194FD990)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISSELF__CTOR_OFFSET UNITYSDK_OFFSET(0x194FDA10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckModifierCallBackIsSelf_TypeDefinitionIndex = 21789;

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

		static ::System::Void Method_4_51ECDF36565BDCEF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackIsSelf*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackIsSelf*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISSELF_METHOD_4_51ECDF36565BDCEF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_32FD39228BBA3C3B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackIsSelf* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackIsSelf*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISSELF_METHOD_4_32FD39228BBA3C3B_OFFSET))(a1, a2);
		}
	};
}
