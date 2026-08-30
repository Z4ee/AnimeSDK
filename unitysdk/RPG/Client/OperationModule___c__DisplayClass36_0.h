#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_AC6C63F15E9794D3;
namespace System { class String; }

#define RPG_CLIENT_OPERATIONMODULE___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDA09170)
#define RPG_CLIENT_OPERATIONMODULE___C__DISPLAYCLASS36_0__SETUPHTTPAUTHKEYPROMISED_B__0_OFFSET UNITYSDK_OFFSET(0xDA0B970)

namespace RPG::Client
{
	inline static constexpr unsigned int OperationModule___c__DisplayClass36_0_TypeDefinitionIndex = 66449;

	class OperationModule___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::System::String* authKeyVer; // 0x10
		::System::String* signType; // 0x18
		::System::String* appID; // 0x20
		::Class_1_AC6C63F15E9794D3* req; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
		}

		::Class_1_AC6C63F15E9794D3* _SetupHttpAuthKeyPromised_b__0(::System::String* a1)
		{
			return ((::Class_1_AC6C63F15E9794D3*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE___C__DISPLAYCLASS36_0__SETUPHTTPAUTHKEYPROMISED_B__0_OFFSET))(this, a1);
		}
	};
}
