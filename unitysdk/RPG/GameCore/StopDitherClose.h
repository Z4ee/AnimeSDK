#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STOPDITHERCLOSE_METHOD_3_CDFFA319F0F859E1_OFFSET UNITYSDK_OFFSET(0x1D56F400)
#define RPG_GAMECORE_STOPDITHERCLOSE_METHOD_3_EA60A0D1B8646DAA_OFFSET UNITYSDK_OFFSET(0x1D56F450)
#define RPG_GAMECORE_STOPDITHERCLOSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D56F440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StopDitherClose_TypeDefinitionIndex = 20390;

	class StopDitherClose : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsStop; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPDITHERCLOSE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CDFFA319F0F859E1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StopDitherClose*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StopDitherClose*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPDITHERCLOSE_METHOD_3_CDFFA319F0F859E1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EA60A0D1B8646DAA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StopDitherClose* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StopDitherClose*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPDITHERCLOSE_METHOD_3_EA60A0D1B8646DAA_OFFSET))(a1, a2);
		}
	};
}
