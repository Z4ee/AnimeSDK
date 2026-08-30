#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace RPG::UINavigation { class UINavigationButton; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_26687D2111A584CB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF547C0)
#define CLASS_1_26687D2111A584CB_METHOD_1_6423291ED13007B8_OFFSET UNITYSDK_OFFSET(0xBF546E0)
#define CLASS_1_26687D2111A584CB__CTOR_OFFSET UNITYSDK_OFFSET(0xBF544E0)

inline static constexpr unsigned int Class_1_26687D2111A584CB_TypeDefinitionIndex = 50201;

class Class_1_26687D2111A584CB : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* MBOEDFCNCJF; // 0x10
	::R3::ReactiveProperty_1<::System::Boolean>* AGFAPPGGKMA; // 0x18
	::RPG::UINavigation::UINavigationButton* AAFGIHCCPOP; // 0x20

	::System::Void _ctor(::RPG::UINavigation::UINavigationButton* a1, ::R3::ReactiveProperty_1<::System::Boolean>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigationButton*, ::R3::ReactiveProperty_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_26687D2111A584CB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6423291ED13007B8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_26687D2111A584CB_METHOD_1_6423291ED13007B8_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26687D2111A584CB_DISPOSE_OFFSET))(this);
	}
};
