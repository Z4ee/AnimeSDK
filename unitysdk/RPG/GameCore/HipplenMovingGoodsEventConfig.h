#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_HIPPLENMOVINGGOODSEVENTCONFIG_METHOD_2_3F05A9D1F5F4D0B8_OFFSET UNITYSDK_OFFSET(0x19836FD0)
#define RPG_GAMECORE_HIPPLENMOVINGGOODSEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19837260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenMovingGoodsEventConfig_TypeDefinitionIndex = 15950;

	class HipplenMovingGoodsEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Interval; // 0x10
		::System::String* InputList; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* BeforeInput; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnInputSucc; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnInputWrong; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnDoubleSucc; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENMOVINGGOODSEVENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3F05A9D1F5F4D0B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenMovingGoodsEventConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenMovingGoodsEventConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENMOVINGGOODSEVENTCONFIG_METHOD_2_3F05A9D1F5F4D0B8_OFFSET))(a1, a2);
		}
	};
}
