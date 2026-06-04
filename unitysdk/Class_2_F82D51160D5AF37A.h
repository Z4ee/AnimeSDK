#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ShowFuncUnlockHintDialog; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_F82D51160D5AF37A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC1D8830)
#define CLASS_2_F82D51160D5AF37A_METHOD_2_885DF4DA0F709E3E_OFFSET UNITYSDK_OFFSET(0xC1D8910)
#define CLASS_2_F82D51160D5AF37A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC1D8C40)
#define CLASS_2_F82D51160D5AF37A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC1D88C0)
#define CLASS_2_F82D51160D5AF37A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC1D8B90)
#define CLASS_2_F82D51160D5AF37A_TICK_OFFSET UNITYSDK_OFFSET(0xC1D8BE0)
#define CLASS_2_F82D51160D5AF37A__CTOR_OFFSET UNITYSDK_OFFSET(0xC1D8820)

inline static constexpr unsigned int Class_2_F82D51160D5AF37A_TypeDefinitionIndex = 54797;

class Class_2_F82D51160D5AF37A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::Client::LuaUIController* Field_2_1; // 0x20
	::RPG::GameCore::ShowFuncUnlockHintDialog* Field_2_2; // 0x28

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
