#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_GAMEGOTOPARAM_METHOD_1_0AF278B86D0A237C_OFFSET UNITYSDK_OFFSET(0x10BC2580)
#define MOLEMOLE_GAMEGOTOPARAM_METHOD_1_4A0CFEBE0C9DF506_OFFSET UNITYSDK_OFFSET(0x10BC2250)
#define MOLEMOLE_GAMEGOTOPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x10BC2240)

namespace MoleMole
{
	inline static constexpr unsigned int GamegotoParam_TypeDefinitionIndex = 52723;

	class GamegotoParam : public ::System::Object
	{
	public:
		// static const ::System::String* JumpConfigKey; // 0x0
		// static const ::System::String* JumpConfigValue; // 0x0
		// static const ::System::String* JumpTipsKey; // 0x0
		::System::Int32 openType; // 0x10
		::System::String* arg; // 0x18
		::System::Int64 startTime; // 0x20
		::System::Int64 endTime; // 0x28
		::System::String* activityAccess; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEGOTOPARAM__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_4A0CFEBE0C9DF506(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEGOTOPARAM_METHOD_1_4A0CFEBE0C9DF506_OFFSET))(this, a1);
		}

		static ::MoleMole::GamegotoParam* Method_1_0AF278B86D0A237C(::System::String* a1)
		{
			return ((::MoleMole::GamegotoParam*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEGOTOPARAM_METHOD_1_0AF278B86D0A237C_OFFSET))(a1);
		}
	};
}
