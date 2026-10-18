#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_208;
class Class_1_AEF88F1677ADBBD5;
namespace RPG::GameCore { class MiniGameCollectCoinConfig; }

#define CLASS_1_AABEA64A2553532E_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CB73050)
#define CLASS_1_AABEA64A2553532E__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB73130)

inline static constexpr unsigned int Class_1_AABEA64A2553532E_TypeDefinitionIndex = 43380;

class Class_1_AABEA64A2553532E : public ::System::Object
{
public:
	::RPG::GameCore::MiniGameCollectCoinConfig* EABKOHGCHFP; // 0x10
	::Class_1_AEF88F1677ADBBD5* NNANJMDMAOC; // 0x18
	::Class_0_16E4307DCC419505_208* FKIBGPJNCIJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AABEA64A2553532E__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AABEA64A2553532E_CLEAR_OFFSET))(this);
	}
};
