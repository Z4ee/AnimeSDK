#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompositeConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_SELECTORCONFIG_METHOD_4_856104C95804CF38_OFFSET UNITYSDK_OFFSET(0x1769F3A0)
#define RPG_GAMECORE_SELECTORCONFIG_METHOD_4_CBCB80CA4B218B91_OFFSET UNITYSDK_OFFSET(0x1769F320)
#define RPG_GAMECORE_SELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1769F370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SelectorConfig_TypeDefinitionIndex = 22057;

	class SelectorConfig : public ::RPG::GameCore::CompositeConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CBCB80CA4B218B91(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SELECTORCONFIG_METHOD_4_CBCB80CA4B218B91_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_856104C95804CF38(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SELECTORCONFIG_METHOD_4_856104C95804CF38_OFFSET))(a1, a2);
		}
	};
}
