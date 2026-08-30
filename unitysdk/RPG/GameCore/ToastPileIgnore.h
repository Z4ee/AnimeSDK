#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TOASTPILEIGNORE_METHOD_3_5591E069FD3DCB30_OFFSET UNITYSDK_OFFSET(0x1D52C080)
#define RPG_GAMECORE_TOASTPILEIGNORE_METHOD_3_A65C15B1B979C243_OFFSET UNITYSDK_OFFSET(0x1D52C0C0)
#define RPG_GAMECORE_TOASTPILEIGNORE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D52C0B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ToastPileIgnore_TypeDefinitionIndex = 20067;

	class ToastPileIgnore : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsIgnore; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTPILEIGNORE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5591E069FD3DCB30(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ToastPileIgnore*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ToastPileIgnore*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTPILEIGNORE_METHOD_3_5591E069FD3DCB30_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A65C15B1B979C243(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ToastPileIgnore* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ToastPileIgnore*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTPILEIGNORE_METHOD_3_A65C15B1B979C243_OFFSET))(a1, a2);
		}
	};
}
