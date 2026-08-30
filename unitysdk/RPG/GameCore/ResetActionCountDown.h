#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RESETACTIONCOUNTDOWN_METHOD_3_D0DC186D7D594916_OFFSET UNITYSDK_OFFSET(0x1D3A3640)
#define RPG_GAMECORE_RESETACTIONCOUNTDOWN_METHOD_3_D8BBB7998043DCB5_OFFSET UNITYSDK_OFFSET(0x1D3A3680)
#define RPG_GAMECORE_RESETACTIONCOUNTDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A3670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetActionCountDown_TypeDefinitionIndex = 23422;

	class ResetActionCountDown : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 InitialCount; // 0x18
		::System::String* Description; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETACTIONCOUNTDOWN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D0DC186D7D594916(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetActionCountDown*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetActionCountDown*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETACTIONCOUNTDOWN_METHOD_3_D0DC186D7D594916_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D8BBB7998043DCB5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetActionCountDown* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetActionCountDown*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETACTIONCOUNTDOWN_METHOD_3_D8BBB7998043DCB5_OFFSET))(a1, a2);
		}
	};
}
