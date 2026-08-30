#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SHOWMINIGAMEFUNCBTNEFFECT_METHOD_3_4E7C7C4DB729828F_OFFSET UNITYSDK_OFFSET(0x1D52D080)
#define RPG_GAMECORE_SHOWMINIGAMEFUNCBTNEFFECT_METHOD_3_96C50CACFC9DCB3E_OFFSET UNITYSDK_OFFSET(0x1D52D0D0)
#define RPG_GAMECORE_SHOWMINIGAMEFUNCBTNEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D52D0C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowMiniGameFuncBtnEffect_TypeDefinitionIndex = 20261;

	class ShowMiniGameFuncBtnEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsShow; // 0x18
		::System::String* CustomFuncBtnName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMINIGAMEFUNCBTNEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4E7C7C4DB729828F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowMiniGameFuncBtnEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowMiniGameFuncBtnEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMINIGAMEFUNCBTNEFFECT_METHOD_3_4E7C7C4DB729828F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_96C50CACFC9DCB3E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowMiniGameFuncBtnEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowMiniGameFuncBtnEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMINIGAMEFUNCBTNEFFECT_METHOD_3_96C50CACFC9DCB3E_OFFSET))(a1, a2);
		}
	};
}
