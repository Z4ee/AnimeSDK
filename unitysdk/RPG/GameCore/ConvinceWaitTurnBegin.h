#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CONVINCEWAITTURNBEGIN_METHOD_3_7C3A5A284AC70681_OFFSET UNITYSDK_OFFSET(0x17138700)
#define RPG_GAMECORE_CONVINCEWAITTURNBEGIN_METHOD_3_DCB6F3A706B6A0B8_OFFSET UNITYSDK_OFFSET(0x17138780)
#define RPG_GAMECORE_CONVINCEWAITTURNBEGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x17138750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConvinceWaitTurnBegin_TypeDefinitionIndex = 20005;

	class ConvinceWaitTurnBegin : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 TurnIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEWAITTURNBEGIN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7C3A5A284AC70681(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConvinceWaitTurnBegin*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConvinceWaitTurnBegin*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEWAITTURNBEGIN_METHOD_3_7C3A5A284AC70681_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DCB6F3A706B6A0B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConvinceWaitTurnBegin* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConvinceWaitTurnBegin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEWAITTURNBEGIN_METHOD_3_DCB6F3A706B6A0B8_OFFSET))(a1, a2);
		}
	};
}
