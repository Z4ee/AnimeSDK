#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ShowActivityPage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_5231D2D38C9A3D74_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8C27C10)
#define CLASS_2_5231D2D38C9A3D74_METHOD_2_8CB9BDF340E2FC64_OFFSET UNITYSDK_OFFSET(0x8C27CA0)
#define CLASS_2_5231D2D38C9A3D74_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8C280C0)
#define CLASS_2_5231D2D38C9A3D74_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8C27C50)
#define CLASS_2_5231D2D38C9A3D74_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8C28010)
#define CLASS_2_5231D2D38C9A3D74_TICK_OFFSET UNITYSDK_OFFSET(0x8C28060)
#define CLASS_2_5231D2D38C9A3D74__CTOR_OFFSET UNITYSDK_OFFSET(0x8C27C00)

inline static constexpr unsigned int Class_2_5231D2D38C9A3D74_TypeDefinitionIndex = 47291;

class Class_2_5231D2D38C9A3D74 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::Client::LuaUIController* Field_2_2; // 0x18
	::RPG::GameCore::ShowActivityPage* Field_2_0; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowActivityPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowActivityPage*))((::PBYTE)hIl2Cpp + CLASS_2_5231D2D38C9A3D74__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5231D2D38C9A3D74_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5231D2D38C9A3D74_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5231D2D38C9A3D74_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5231D2D38C9A3D74_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_8CB9BDF340E2FC64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5231D2D38C9A3D74_METHOD_2_8CB9BDF340E2FC64_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5231D2D38C9A3D74_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
