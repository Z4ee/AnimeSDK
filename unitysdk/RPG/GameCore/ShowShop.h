#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWSHOP_METHOD_3_3FD73AA13C61C8EF_OFFSET UNITYSDK_OFFSET(0x19C82FA0)
#define RPG_GAMECORE_SHOWSHOP_METHOD_3_C0D28CFF73EEEF07_OFFSET UNITYSDK_OFFSET(0x19C82F20)
#define RPG_GAMECORE_SHOWSHOP__CTOR_OFFSET UNITYSDK_OFFSET(0x19C82F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowShop_TypeDefinitionIndex = 19751;

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

		static ::System::Void Method_3_C0D28CFF73EEEF07(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowShop*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowShop*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSHOP_METHOD_3_C0D28CFF73EEEF07_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3FD73AA13C61C8EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowShop* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowShop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSHOP_METHOD_3_3FD73AA13C61C8EF_OFFSET))(a1, a2);
		}
	};
}
