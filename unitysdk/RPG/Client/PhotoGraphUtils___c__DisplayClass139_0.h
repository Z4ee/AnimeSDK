#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS139_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19EB1D80)
#define RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS139_0___ONREQUESTPERMISSION_B__0_OFFSET UNITYSDK_OFFSET(0x19EB2BF0)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphUtils___c__DisplayClass139_0_TypeDefinitionIndex = 66342;

	class PhotoGraphUtils___c__DisplayClass139_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* onSaveCallback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS139_0__CTOR_OFFSET))(this);
		}

		::System::Void __OnRequestPermission_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS139_0___ONREQUESTPERMISSION_B__0_OFFSET))(this, a1);
		}
	};
}
