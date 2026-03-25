#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFiveDimPlayerEnterOrExit; }
namespace System { class Object; }

#define CLASS_2_4AEBAAB26F94215F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x88C4010)
#define CLASS_2_4AEBAAB26F94215F_METHOD_2_2ADBA02EC0F7C432_1_OFFSET UNITYSDK_OFFSET(0x88C50A0)
#define CLASS_2_4AEBAAB26F94215F_METHOD_2_2ADBA02EC0F7C432_OFFSET UNITYSDK_OFFSET(0x88C4CC0)
#define CLASS_2_4AEBAAB26F94215F_METHOD_2_5CF72D307C0A62A1_OFFSET UNITYSDK_OFFSET(0x88C4310)
#define CLASS_2_4AEBAAB26F94215F_METHOD_2_7B12090AF6D76E60_1_OFFSET UNITYSDK_OFFSET(0x88C4E80)
#define CLASS_2_4AEBAAB26F94215F_METHOD_2_7B12090AF6D76E60_OFFSET UNITYSDK_OFFSET(0x88C49B0)
#define CLASS_2_4AEBAAB26F94215F_METHOD_2_B7D053F82748CF95_OFFSET UNITYSDK_OFFSET(0x88C4BD0)
#define CLASS_2_4AEBAAB26F94215F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x88C41D0)
#define CLASS_2_4AEBAAB26F94215F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x88C4840)
#define CLASS_2_4AEBAAB26F94215F_TICK_OFFSET UNITYSDK_OFFSET(0x88C4950)
#define CLASS_2_4AEBAAB26F94215F__CTOR_OFFSET UNITYSDK_OFFSET(0x88C3E20)

inline static constexpr unsigned int Class_2_4AEBAAB26F94215F_TypeDefinitionIndex = 42804;

class Class_2_4AEBAAB26F94215F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_5775A4FEC79026BC* Field_2_4; // 0x18
	::RPG::GameCore::WaitFiveDimPlayerEnterOrExit* Field_2_0; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28
	::Class_3_5775A4FEC79026BC* Field_2_2; // 0x30
	::Class_3_5775A4FEC79026BC* Field_2_3; // 0x38
	::Class_3_5775A4FEC79026BC* Field_2_5; // 0x40
	::System::UInt32 Field_2_8; // 0x48
	::System::UInt32 Field_2_6; // 0x4C
	::System::UInt32 Field_2_7; // 0x50

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitFiveDimPlayerEnterOrExit* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitFiveDimPlayerEnterOrExit*))((::PBYTE)hIl2Cpp + CLASS_2_4AEBAAB26F94215F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4AEBAAB26F94215F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4AEBAAB26F94215F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4AEBAAB26F94215F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4AEBAAB26F94215F_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_7B12090AF6D76E60(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4AEBAAB26F94215F_METHOD_2_7B12090AF6D76E60_OFFSET))(this, a1);
	}

	::System::Void Method_2_2ADBA02EC0F7C432(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4AEBAAB26F94215F_METHOD_2_2ADBA02EC0F7C432_OFFSET))(this, a1);
	}

	::System::Void Method_2_7B12090AF6D76E60_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4AEBAAB26F94215F_METHOD_2_7B12090AF6D76E60_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_2ADBA02EC0F7C432_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4AEBAAB26F94215F_METHOD_2_2ADBA02EC0F7C432_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_B7D053F82748CF95(::System::Object* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4AEBAAB26F94215F_METHOD_2_B7D053F82748CF95_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_5CF72D307C0A62A1(::System::UInt32& a1, ::System::UInt32& a2, ::System::UInt32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_2_4AEBAAB26F94215F_METHOD_2_5CF72D307C0A62A1_OFFSET))(this, a1, a2, a3);
	}
};
