#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDVIEWMODEL___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCFF9A00)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDVIEWMODEL___C__DISPLAYCLASS12_0__GETPAGEENTERCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0xCFF9E90)

namespace RPG::Client::FateRin::CaseBoard
{
	inline static constexpr unsigned int CaseBoardViewModel___c__DisplayClass12_0_TypeDefinitionIndex = 79468;

	class CaseBoardViewModel___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::String* jsonPath; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDVIEWMODEL___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetPageEnterCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDVIEWMODEL___C__DISPLAYCLASS12_0__GETPAGEENTERCALLBACK_B__0_OFFSET))(this);
		}
	};
}
