#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ShowFuncUnlockHintDialog; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_F82D51160D5AF37A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10BC40D0)
#define CLASS_2_F82D51160D5AF37A_METHOD_2_AE0B725AB77F7E6F_OFFSET UNITYSDK_OFFSET(0x10BC41B0)
#define CLASS_2_F82D51160D5AF37A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10BC44F0)
#define CLASS_2_F82D51160D5AF37A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10BC4160)
#define CLASS_2_F82D51160D5AF37A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10BC4440)
#define CLASS_2_F82D51160D5AF37A_TICK_OFFSET UNITYSDK_OFFSET(0x10BC4490)
#define CLASS_2_F82D51160D5AF37A__CTOR_OFFSET UNITYSDK_OFFSET(0x10BC40C0)

inline static constexpr unsigned int Class_2_F82D51160D5AF37A_TypeDefinitionIndex = 47337;

class Class_2_F82D51160D5AF37A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowFuncUnlockHintDialog* Field_2_0; // 0x18
	::RPG::Client::LuaUIController* Field_2_2; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowFuncUnlockHintDialog* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowFuncUnlockHintDialog*))((::PBYTE)hIl2Cpp + CLASS_2_F82D51160D5AF37A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F82D51160D5AF37A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F82D51160D5AF37A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F82D51160D5AF37A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F82D51160D5AF37A_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_AE0B725AB77F7E6F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F82D51160D5AF37A_METHOD_2_AE0B725AB77F7E6F_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F82D51160D5AF37A_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
