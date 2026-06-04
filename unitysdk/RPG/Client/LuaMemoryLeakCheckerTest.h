#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace XLua { class LuaEnv; }
namespace XLua { class LuaMemoryLeakChecker_Data; }

#define RPG_CLIENT_LUAMEMORYLEAKCHECKERTEST_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xBE86260)
#define RPG_CLIENT_LUAMEMORYLEAKCHECKERTEST_START_OFFSET UNITYSDK_OFFSET(0xBE85FE0)
#define RPG_CLIENT_LUAMEMORYLEAKCHECKERTEST_UPDATE_OFFSET UNITYSDK_OFFSET(0xBE86110)
#define RPG_CLIENT_LUAMEMORYLEAKCHECKERTEST__CTOR_OFFSET UNITYSDK_OFFSET(0xBE862C0)

namespace RPG::Client
{
	inline static constexpr unsigned int LuaMemoryLeakCheckerTest_TypeDefinitionIndex = 55522;

	class LuaMemoryLeakCheckerTest : public ::UnityEngine::MonoBehaviour
	{
	public:
		::XLua::LuaEnv* Field_5_0; // 0x18
		::System::Action* Field_5_1; // 0x20
		::XLua::LuaMemoryLeakChecker_Data* Field_5_2; // 0x28
		::System::Int32 Field_5_3; // 0x30
		::System::Boolean Field_5_4; // 0x34

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
