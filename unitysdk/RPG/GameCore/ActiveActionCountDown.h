#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVEACTIONCOUNTDOWN_METHOD_3_4655BE6618E5D798_OFFSET UNITYSDK_OFFSET(0x16E9F150)
#define RPG_GAMECORE_ACTIVEACTIONCOUNTDOWN_METHOD_3_9BA2FDFD5AB4FBF1_OFFSET UNITYSDK_OFFSET(0x16E9F1D0)
#define RPG_GAMECORE_ACTIVEACTIONCOUNTDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0x16E9F1A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActiveActionCountDown_TypeDefinitionIndex = 21940;

	class ActiveActionCountDown : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVEACTIONCOUNTDOWN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4655BE6618E5D798(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActiveActionCountDown*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActiveActionCountDown*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVEACTIONCOUNTDOWN_METHOD_3_4655BE6618E5D798_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9BA2FDFD5AB4FBF1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActiveActionCountDown* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActiveActionCountDown*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVEACTIONCOUNTDOWN_METHOD_3_9BA2FDFD5AB4FBF1_OFFSET))(a1, a2);
		}
	};
}
