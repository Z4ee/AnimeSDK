#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ShowActivityPage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_5231D2D38C9A3D74_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13C7B070)
#define CLASS_2_5231D2D38C9A3D74_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13C7B500)
#define CLASS_2_5231D2D38C9A3D74_METHOD_2_FF63E816B4D956CD_OFFSET UNITYSDK_OFFSET(0x13C7B100)
#define CLASS_2_5231D2D38C9A3D74_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13C7B0B0)
#define CLASS_2_5231D2D38C9A3D74_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13C7B450)
#define CLASS_2_5231D2D38C9A3D74_TICK_OFFSET UNITYSDK_OFFSET(0x13C7B4A0)
#define CLASS_2_5231D2D38C9A3D74__CTOR_OFFSET UNITYSDK_OFFSET(0x13C7B060)

inline static constexpr unsigned int Class_2_5231D2D38C9A3D74_TypeDefinitionIndex = 54748;

class Class_2_5231D2D38C9A3D74 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowActivityPage* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::Client::LuaUIController* Field_2_2; // 0x28

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

	::System::Void Method_2_FF63E816B4D956CD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5231D2D38C9A3D74_METHOD_2_FF63E816B4D956CD_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5231D2D38C9A3D74_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
