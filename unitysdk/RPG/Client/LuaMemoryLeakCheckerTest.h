#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace XLua { class LuaEnv; }
namespace XLua { class LuaMemoryLeakChecker_Data; }

#define RPG_CLIENT_LUAMEMORYLEAKCHECKERTEST_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1748D2C0)
#define RPG_CLIENT_LUAMEMORYLEAKCHECKERTEST_START_OFFSET UNITYSDK_OFFSET(0x1748D040)
#define RPG_CLIENT_LUAMEMORYLEAKCHECKERTEST_UPDATE_OFFSET UNITYSDK_OFFSET(0x1748D170)
#define RPG_CLIENT_LUAMEMORYLEAKCHECKERTEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1748D320)

namespace RPG::Client
{
	inline static constexpr unsigned int LuaMemoryLeakCheckerTest_TypeDefinitionIndex = 59546;

	class LuaMemoryLeakCheckerTest : public ::UnityEngine::MonoBehaviour
	{
	public:
		::XLua::LuaEnv* GOKCAOGNDLO; // 0x18
		::System::Action* BCBMHFBKCEP; // 0x20
		::XLua::LuaMemoryLeakChecker_Data* LNMKKMMMHMC; // 0x28
		::System::Int32 IFBDPHIBKHB; // 0x30
		::System::Boolean JJGABAMOFCI; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAMEMORYLEAKCHECKERTEST__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAMEMORYLEAKCHECKERTEST_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAMEMORYLEAKCHECKERTEST_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAMEMORYLEAKCHECKERTEST_ONDESTROY_OFFSET))(this);
		}
	};
}
