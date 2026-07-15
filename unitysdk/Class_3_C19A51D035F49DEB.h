#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SO_Task_1.h"
#include "unitysdk/RPG/GameCore/TaskState.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class SO_WeightedSelector; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_C19A51D035F49DEB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16E3B590)
#define CLASS_3_C19A51D035F49DEB_METHOD_3_0D372435D9CAE4BC_OFFSET UNITYSDK_OFFSET(0x16E3C260)
#define CLASS_3_C19A51D035F49DEB_METHOD_3_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0x16E3B980)
#define CLASS_3_C19A51D035F49DEB_METHOD_3_48A85C2067A778AB_OFFSET UNITYSDK_OFFSET(0x16E3C980)
#define CLASS_3_C19A51D035F49DEB_METHOD_3_5E2E01A8DF65CA40_OFFSET UNITYSDK_OFFSET(0x16E3BBD0)
#define CLASS_3_C19A51D035F49DEB_METHOD_3_B64C60973842FE45_OFFSET UNITYSDK_OFFSET(0x16E3B770)
#define CLASS_3_C19A51D035F49DEB_METHOD_3_C638E91FC0D3A13A_1_OFFSET UNITYSDK_OFFSET(0x16E3C740)
#define CLASS_3_C19A51D035F49DEB_METHOD_3_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x16E3C100)
#define CLASS_3_C19A51D035F49DEB_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x16E3C9D0)
#define CLASS_3_C19A51D035F49DEB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16E3B7F0)
#define CLASS_3_C19A51D035F49DEB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16E3C3A0)
#define CLASS_3_C19A51D035F49DEB_TICK_OFFSET UNITYSDK_OFFSET(0x16E3C8A0)
#define CLASS_3_C19A51D035F49DEB__CTOR_OFFSET UNITYSDK_OFFSET(0x16E3B370)

inline static constexpr unsigned int Class_3_C19A51D035F49DEB_TypeDefinitionIndex = 49755;

class Class_3_C19A51D035F49DEB : public ::RPG::GameCore::SO_Task_1<::RPG::GameCore::SO_WeightedSelector*>
{
public:
	::System::Collections::Generic::List_1<::Class_1_5F51D4049EA87B7B*>* Field_3_0; // 0x40
	::System::Boolean Field_3_1; // 0x48
	::System::Boolean Field_3_2; // 0x49
	::System::Boolean Field_3_3; // 0x4A
	::System::Int32 Field_3_4; // 0x4C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SO_WeightedSelector* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SO_WeightedSelector*))((::PBYTE)hIl2Cpp + CLASS_3_C19A51D035F49DEB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C19A51D035F49DEB_DISPOSE_OFFSET))(this);
	}

	::Class_1_5F51D4049EA87B7B* Method_3_B64C60973842FE45()
	{
		return ((::Class_1_5F51D4049EA87B7B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C19A51D035F49DEB_METHOD_3_B64C60973842FE45_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C19A51D035F49DEB_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C19A51D035F49DEB_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_C19A51D035F49DEB_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskState Method_3_5E2E01A8DF65CA40(::System::Single a1)
	{
		return ((::RPG::GameCore::TaskState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_C19A51D035F49DEB_METHOD_3_5E2E01A8DF65CA40_OFFSET))(this, a1);
	}

	::System::Void Method_3_229CEF33F0AF9039()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C19A51D035F49DEB_METHOD_3_229CEF33F0AF9039_OFFSET))(this);
	}

	::System::Void Method_3_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C19A51D035F49DEB_METHOD_3_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_3_C638E91FC0D3A13A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C19A51D035F49DEB_METHOD_3_C638E91FC0D3A13A_1_OFFSET))(this);
	}

	::System::Void Method_3_48A85C2067A778AB(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_C19A51D035F49DEB_METHOD_3_48A85C2067A778AB_OFFSET))(this, a1);
	}

	::System::Void Method_3_0D372435D9CAE4BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C19A51D035F49DEB_METHOD_3_0D372435D9CAE4BC_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C19A51D035F49DEB_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}
};
