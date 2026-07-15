#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ENABLESTORYWIN_METHOD_3_4AB0694A947F62E4_OFFSET UNITYSDK_OFFSET(0x1BB42020)
#define RPG_GAMECORE_ENABLESTORYWIN_METHOD_3_4FAE8ECDC7F6623F_OFFSET UNITYSDK_OFFSET(0x1BB41FE0)
#define RPG_GAMECORE_ENABLESTORYWIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB42010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableStoryWin_TypeDefinitionIndex = 22478;

	class EnableStoryWin : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsEnable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLESTORYWIN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4FAE8ECDC7F6623F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableStoryWin*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableStoryWin*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLESTORYWIN_METHOD_3_4FAE8ECDC7F6623F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4AB0694A947F62E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableStoryWin* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableStoryWin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLESTORYWIN_METHOD_3_4AB0694A947F62E4_OFFSET))(a1, a2);
		}
	};
}
