#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYITEMNUM_METHOD_3_311376B4D342610B_OFFSET UNITYSDK_OFFSET(0x1D4F2BF0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYITEMNUM_METHOD_3_A7FE5B705F26545E_OFFSET UNITYSDK_OFFSET(0x1D4F2BB0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYITEMNUM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F2BE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByItemNum_TypeDefinitionIndex = 21520;

	class SetDynamicValueByItemNum : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYITEMNUM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A7FE5B705F26545E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByItemNum*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByItemNum*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYITEMNUM_METHOD_3_A7FE5B705F26545E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_311376B4D342610B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByItemNum* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByItemNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYITEMNUM_METHOD_3_311376B4D342610B_OFFSET))(a1, a2);
		}
	};
}
