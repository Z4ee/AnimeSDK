#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1164;
namespace RPG::Client { class UIController; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_36EF8C2CE98EB276__CTOR_OFFSET UNITYSDK_OFFSET(0x19BDA1C0)

inline static constexpr unsigned int Class_1_36EF8C2CE98EB276_TypeDefinitionIndex = 73023;

class Class_1_36EF8C2CE98EB276 : public ::System::Object
{
public:
	::RPG::Client::UIController* LFGGECDJFHB; // 0x10
	::RPG::Client::UIController* ANIHEHNCACM; // 0x18
	::System::Action_1<::Class_1_36EF8C2CE98EB276*>* DPANHIICMLD; // 0x20
	::RPG::Client::UIController* LPJMDKIBPCG; // 0x28
	::Class_0_16E4307DCC419505_1164* LGNNAOLPNIP; // 0x30
	::System::Boolean CCKPNCIBDGP; // 0x38
	::System::Boolean FEBKMOCOJLE; // 0x39

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36EF8C2CE98EB276__CTOR_OFFSET))(this);
	}
};
