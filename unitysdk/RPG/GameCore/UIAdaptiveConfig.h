#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class UIOperationConfig; }

#define RPG_GAMECORE_UIADAPTIVECONFIG_METHOD_2_B7E36EC335965005_OFFSET UNITYSDK_OFFSET(0x1D61AC60)
#define RPG_GAMECORE_UIADAPTIVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D61AD50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UIAdaptiveConfig_TypeDefinitionIndex = 24147;

	class UIAdaptiveConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::UIOperationConfig* DefaultOperations; // 0x10
		::Il2CppArray<::RPG::GameCore::UIOperationConfig*>* UIPrefabOperations; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIADAPTIVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B7E36EC335965005(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UIAdaptiveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UIAdaptiveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIADAPTIVECONFIG_METHOD_2_B7E36EC335965005_OFFSET))(a1, a2);
		}
	};
}
