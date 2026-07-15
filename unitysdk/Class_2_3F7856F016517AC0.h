#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_DD82D6A2390AAA97.h"

namespace RPG::Client { class PlayerModule; }
namespace System { class Object; }

#define CLASS_2_3F7856F016517AC0_METHOD_2_FE60265F2E236E58_OFFSET UNITYSDK_OFFSET(0x15FDE150)
#define CLASS_2_3F7856F016517AC0__CTOR_OFFSET UNITYSDK_OFFSET(0x15FDE140)

inline static constexpr unsigned int Class_2_3F7856F016517AC0_TypeDefinitionIndex = 63730;

class Class_2_3F7856F016517AC0 : public ::Class_1_DD82D6A2390AAA97
{
public:
	::System::Void _ctor(::RPG::Client::PlayerModule* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerModule*))((::PBYTE)hIl2Cpp + CLASS_2_3F7856F016517AC0__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_FE60265F2E236E58(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_3F7856F016517AC0_METHOD_2_FE60265F2E236E58_OFFSET))(this, a1);
	}
};
