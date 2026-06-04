#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_DD82D6A2390AAA97.h"
#include "unitysdk/RPG/Client/LogicStateType.h"

namespace RPG::Client { class PlayerModule; }
namespace System { class Object; }

#define CLASS_2_3F7856F016517AC0_2_METHOD_2_70C618A9A54396F2_OFFSET UNITYSDK_OFFSET(0xB02A7A0)
#define CLASS_2_3F7856F016517AC0_2_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xB02A800)
#define CLASS_2_3F7856F016517AC0_2_METHOD_2_B99DB029ED55CCE6_OFFSET UNITYSDK_OFFSET(0xB02A860)
#define CLASS_2_3F7856F016517AC0_2_METHOD_2_EBCA8E5D8C47FF73_OFFSET UNITYSDK_OFFSET(0xB02A8C0)
#define CLASS_2_3F7856F016517AC0_2_METHOD_2_FE60265F2E236E58_OFFSET UNITYSDK_OFFSET(0xB02A7B0)
#define CLASS_2_3F7856F016517AC0_2__CTOR_OFFSET UNITYSDK_OFFSET(0xB02A790)

inline static constexpr unsigned int Class_2_3F7856F016517AC0_2_TypeDefinitionIndex = 62365;

class Class_2_3F7856F016517AC0_2 : public ::Class_1_DD82D6A2390AAA97
{
public:
	::System::Void _ctor(::RPG::Client::PlayerModule* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerModule*))((::PBYTE)hIl2Cpp + CLASS_2_3F7856F016517AC0_2__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::LogicStateType Method_2_70C618A9A54396F2()
	{
		return ((::RPG::Client::LogicStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3F7856F016517AC0_2_METHOD_2_70C618A9A54396F2_OFFSET))(this);
	}

	::System::Boolean Method_2_FE60265F2E236E58(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_3F7856F016517AC0_2_METHOD_2_FE60265F2E236E58_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3F7856F016517AC0_2_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Boolean Method_2_B99DB029ED55CCE6(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_3F7856F016517AC0_2_METHOD_2_B99DB029ED55CCE6_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_EBCA8E5D8C47FF73()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3F7856F016517AC0_2_METHOD_2_EBCA8E5D8C47FF73_OFFSET))(this);
	}
};
