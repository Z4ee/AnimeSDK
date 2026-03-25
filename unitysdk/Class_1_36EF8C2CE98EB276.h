#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_896;
namespace RPG::Client { class UIController; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_36EF8C2CE98EB276__CTOR_OFFSET UNITYSDK_OFFSET(0x8D81730)

inline static constexpr unsigned int Class_1_36EF8C2CE98EB276_TypeDefinitionIndex = 59926;

class Class_1_36EF8C2CE98EB276 : public ::System::Object
{
public:
	::RPG::Client::UIController* Field_1_3; // 0x10
	::Class_0_16E4307DCC419505_896* Field_1_5; // 0x18
	::RPG::Client::UIController* Field_1_4; // 0x20
	::System::Action_1<::Class_1_36EF8C2CE98EB276*>* Field_1_6; // 0x28
	::RPG::Client::UIController* Field_1_2; // 0x30
	::System::Boolean Field_1_1; // 0x38
	::System::Boolean Field_1_0; // 0x39

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36EF8C2CE98EB276__CTOR_OFFSET))(this);
	}
};
