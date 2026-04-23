#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWSHOP_METHOD_3_2E19E78E73BC13E9_OFFSET UNITYSDK_OFFSET(0x18E66E50)
#define RPG_GAMECORE_SHOWSHOP_METHOD_3_9FA100E04E09DD49_OFFSET UNITYSDK_OFFSET(0x18E66DD0)
#define RPG_GAMECORE_SHOWSHOP__CTOR_OFFSET UNITYSDK_OFFSET(0x18E66E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowShop_TypeDefinitionIndex = 19882;

	class ShowShop : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 ShopType; // 0x18
		::System::UInt32 ShopID; // 0x1C
		::Il2CppArray<::System::Int32>* TaskID; // 0x20
		::System::Boolean IsActiveMonitor; // 0x28
		::System::Boolean DisableBoughtHint; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSHOP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9FA100E04E09DD49(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowShop*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowShop*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSHOP_METHOD_3_9FA100E04E09DD49_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2E19E78E73BC13E9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowShop* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowShop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSHOP_METHOD_3_2E19E78E73BC13E9_OFFSET))(a1, a2);
		}
	};
}
