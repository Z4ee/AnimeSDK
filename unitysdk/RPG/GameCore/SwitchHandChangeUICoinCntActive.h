#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWITCHHANDCHANGEUICOINCNTACTIVE_METHOD_3_02E0B058FE01434A_OFFSET UNITYSDK_OFFSET(0x1E14E7A0)
#define RPG_GAMECORE_SWITCHHANDCHANGEUICOINCNTACTIVE_METHOD_3_7A91812C667A16F1_OFFSET UNITYSDK_OFFSET(0x1E14E7E0)
#define RPG_GAMECORE_SWITCHHANDCHANGEUICOINCNTACTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E14E7D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchHandChangeUICoinCntActive_TypeDefinitionIndex = 20730;

	class SwitchHandChangeUICoinCntActive : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsActive; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDCHANGEUICOINCNTACTIVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_02E0B058FE01434A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchHandChangeUICoinCntActive*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchHandChangeUICoinCntActive*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDCHANGEUICOINCNTACTIVE_METHOD_3_02E0B058FE01434A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7A91812C667A16F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchHandChangeUICoinCntActive* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchHandChangeUICoinCntActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDCHANGEUICOINCNTACTIVE_METHOD_3_7A91812C667A16F1_OFFSET))(a1, a2);
		}
	};
}
