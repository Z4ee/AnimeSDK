#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SYSTEMOPENMODULE___C__DISPLAYCLASS50_0__CONDITIONPREPARED_B__0_OFFSET UNITYSDK_OFFSET(0xB26BCF0)
#define RPG_CLIENT_SYSTEMOPENMODULE___C__DISPLAYCLASS50_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB26AEF0)

namespace RPG::Client
{
	inline static constexpr unsigned int SystemOpenModule___c__DisplayClass50_0_TypeDefinitionIndex = 62710;

	class SystemOpenModule___c__DisplayClass50_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE___C__DISPLAYCLASS50_0__CTOR_OFFSET))(this);
		}

		::System::Void _ConditionPrepared_b__0(::System::Collections::Generic::List_1<::System::Boolean>* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYSTEMOPENMODULE___C__DISPLAYCLASS50_0__CONDITIONPREPARED_B__0_OFFSET))(this, list);
		}
	};
}
