#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_92B1BD6FC8375724;
namespace System { class String; }

#define RPG_CLIENT_OPERATIONMODULE___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC31AD20)
#define RPG_CLIENT_OPERATIONMODULE___C__DISPLAYCLASS36_0__SETUPHTTPAUTHKEYPROMISED_B__0_OFFSET UNITYSDK_OFFSET(0xC31C6F0)

namespace RPG::Client
{
	inline static constexpr unsigned int OperationModule___c__DisplayClass36_0_TypeDefinitionIndex = 62099;

	class OperationModule___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::Class_1_92B1BD6FC8375724* req; // 0x10
		::System::String* authKeyVer; // 0x18
		::System::String* signType; // 0x20
		::System::String* appID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
		}

		::Class_1_92B1BD6FC8375724* _SetupHttpAuthKeyPromised_b__0(::System::String* a1)
		{
			return ((::Class_1_92B1BD6FC8375724*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE___C__DISPLAYCLASS36_0__SETUPHTTPAUTHKEYPROMISED_B__0_OFFSET))(this, a1);
		}
	};
}
