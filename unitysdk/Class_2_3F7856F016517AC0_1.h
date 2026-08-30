#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_DD82D6A2390AAA97.h"
#include "unitysdk/RPG/Client/LogicStateType.h"

namespace RPG::Client { class PlayerModule; }
namespace System { class Object; }

#define CLASS_2_3F7856F016517AC0_1_METHOD_2_8B48A20015332116_OFFSET UNITYSDK_OFFSET(0xC148410)
#define CLASS_2_3F7856F016517AC0_1_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xC1484B0)
#define CLASS_2_3F7856F016517AC0_1_METHOD_2_FE60265F2E236E58_OFFSET UNITYSDK_OFFSET(0xC148460)
#define CLASS_2_3F7856F016517AC0_1__CTOR_OFFSET UNITYSDK_OFFSET(0xC148400)

inline static constexpr unsigned int Class_2_3F7856F016517AC0_1_TypeDefinitionIndex = 66716;

class Class_2_3F7856F016517AC0_1 : public ::Class_1_DD82D6A2390AAA97
{
public:
	::System::Void _ctor(::RPG::Client::PlayerModule* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerModule*))((::PBYTE)hIl2Cpp + CLASS_2_3F7856F016517AC0_1__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::LogicStateType Method_2_8B48A20015332116()
	{
		return ((::RPG::Client::LogicStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3F7856F016517AC0_1_METHOD_2_8B48A20015332116_OFFSET))(this);
	}

	::System::Boolean Method_2_FE60265F2E236E58(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_3F7856F016517AC0_1_METHOD_2_FE60265F2E236E58_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3F7856F016517AC0_1_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}
};
