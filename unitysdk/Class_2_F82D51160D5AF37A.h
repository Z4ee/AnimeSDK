#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ShowFuncUnlockHintDialog; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_F82D51160D5AF37A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD7FF250)
#define CLASS_2_F82D51160D5AF37A_METHOD_2_885DF4DA0F709E3E_OFFSET UNITYSDK_OFFSET(0xD7FF330)
#define CLASS_2_F82D51160D5AF37A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD7FF670)
#define CLASS_2_F82D51160D5AF37A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD7FF2E0)
#define CLASS_2_F82D51160D5AF37A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD7FF5C0)
#define CLASS_2_F82D51160D5AF37A_TICK_OFFSET UNITYSDK_OFFSET(0xD7FF610)
#define CLASS_2_F82D51160D5AF37A__CTOR_OFFSET UNITYSDK_OFFSET(0xD7FF240)

inline static constexpr unsigned int Class_2_F82D51160D5AF37A_TypeDefinitionIndex = 58799;

class Class_2_F82D51160D5AF37A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::ShowFuncUnlockHintDialog* OFKGLJOAMLD; // 0x20
	::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x28

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

	::System::Void Method_2_885DF4DA0F709E3E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F82D51160D5AF37A_METHOD_2_885DF4DA0F709E3E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F82D51160D5AF37A_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
