#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SHOWMINIGAMEFUNCBTNEFFECT_METHOD_3_1E72AAF57604AF97_OFFSET UNITYSDK_OFFSET(0x19C7FD90)
#define RPG_GAMECORE_SHOWMINIGAMEFUNCBTNEFFECT_METHOD_3_96C50CACFC9DCB3E_OFFSET UNITYSDK_OFFSET(0x19C7FE10)
#define RPG_GAMECORE_SHOWMINIGAMEFUNCBTNEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x19C7FDE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowMiniGameFuncBtnEffect_TypeDefinitionIndex = 19359;

	class ShowMiniGameFuncBtnEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsShow; // 0x18
		::System::String* CustomFuncBtnName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMINIGAMEFUNCBTNEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1E72AAF57604AF97(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowMiniGameFuncBtnEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowMiniGameFuncBtnEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMINIGAMEFUNCBTNEFFECT_METHOD_3_1E72AAF57604AF97_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_96C50CACFC9DCB3E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowMiniGameFuncBtnEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowMiniGameFuncBtnEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMINIGAMEFUNCBTNEFFECT_METHOD_3_96C50CACFC9DCB3E_OFFSET))(a1, a2);
		}
	};
}
