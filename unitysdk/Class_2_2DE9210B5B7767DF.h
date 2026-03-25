#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class NotifyShowFuncBtnParam; }
namespace RPG::GameCore { class ShowFuncBtn; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_2DE9210B5B7767DF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x894F750)
#define CLASS_2_2DE9210B5B7767DF_METHOD_2_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0x894FD30)
#define CLASS_2_2DE9210B5B7767DF_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x894F800)
#define CLASS_2_2DE9210B5B7767DF_METHOD_2_D2EE4B89376BEC3B_OFFSET UNITYSDK_OFFSET(0x894FA10)
#define CLASS_2_2DE9210B5B7767DF_METHOD_2_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x894F7A0)
#define CLASS_2_2DE9210B5B7767DF_METHOD_2_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0x894FED0)
#define CLASS_2_2DE9210B5B7767DF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x894F890)
#define CLASS_2_2DE9210B5B7767DF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x894FE00)
#define CLASS_2_2DE9210B5B7767DF_TICK_OFFSET UNITYSDK_OFFSET(0x894FE50)
#define CLASS_2_2DE9210B5B7767DF__CTOR_OFFSET UNITYSDK_OFFSET(0x894F740)

inline static constexpr unsigned int Class_2_2DE9210B5B7767DF_TypeDefinitionIndex = 43131;

class Class_2_2DE9210B5B7767DF : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowFuncBtn* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::NotifyShowFuncBtnParam* Field_2_2; // 0x28
	::System::Boolean Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowFuncBtn* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowFuncBtn*))((::PBYTE)hIl2Cpp + CLASS_2_2DE9210B5B7767DF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DE9210B5B7767DF_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DE9210B5B7767DF_METHOD_2_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DE9210B5B7767DF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DE9210B5B7767DF_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2DE9210B5B7767DF_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_F79D5EC57FBF426E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DE9210B5B7767DF_METHOD_2_F79D5EC57FBF426E_OFFSET))(this);
	}

	::System::Void Method_2_229CEF33F0AF9039()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DE9210B5B7767DF_METHOD_2_229CEF33F0AF9039_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DE9210B5B7767DF_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::RPG::GameCore::NotifyShowFuncBtnParam* Method_2_D2EE4B89376BEC3B()
	{
		return ((::RPG::GameCore::NotifyShowFuncBtnParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DE9210B5B7767DF_METHOD_2_D2EE4B89376BEC3B_OFFSET))(this);
	}
};
