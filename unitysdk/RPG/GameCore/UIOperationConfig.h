#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class UIOperation; }
namespace System { class String; }

#define RPG_GAMECORE_UIOPERATIONCONFIG_METHOD_2_AB912C6706A1CFBD_OFFSET UNITYSDK_OFFSET(0x1D61AD60)
#define RPG_GAMECORE_UIOPERATIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D61BDC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UIOperationConfig_TypeDefinitionIndex = 24146;

	class UIOperationConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* PrefabName; // 0x10
		::Il2CppArray<::RPG::GameCore::UIOperation*>* UIOperations; // 0x18
		::System::Boolean AdjustIndentBySafeArea; // 0x20
		::System::Boolean AdjustIndentByScreenAspect; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIOPERATIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_AB912C6706A1CFBD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UIOperationConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UIOperationConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIOPERATIONCONFIG_METHOD_2_AB912C6706A1CFBD_OFFSET))(a1, a2);
		}
	};
}
