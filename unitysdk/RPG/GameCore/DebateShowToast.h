#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DebateToastType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DEBATESHOWTOAST_METHOD_3_4B88181AD12A92E8_OFFSET UNITYSDK_OFFSET(0x196930E0)
#define RPG_GAMECORE_DEBATESHOWTOAST_METHOD_3_587BFF299B0F4D3B_OFFSET UNITYSDK_OFFSET(0x19693060)
#define RPG_GAMECORE_DEBATESHOWTOAST__CTOR_OFFSET UNITYSDK_OFFSET(0x196930B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DebateShowToast_TypeDefinitionIndex = 20712;

	class DebateShowToast : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DebateToastType ToastType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBATESHOWTOAST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_587BFF299B0F4D3B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DebateShowToast*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DebateShowToast*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBATESHOWTOAST_METHOD_3_587BFF299B0F4D3B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4B88181AD12A92E8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DebateShowToast* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DebateShowToast*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBATESHOWTOAST_METHOD_3_4B88181AD12A92E8_OFFSET))(a1, a2);
		}
	};
}
