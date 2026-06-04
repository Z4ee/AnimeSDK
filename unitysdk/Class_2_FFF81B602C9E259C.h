#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowSkillCutIn; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_FFF81B602C9E259C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13B02DA0)
#define CLASS_2_FFF81B602C9E259C_METHOD_2_00D9C214C63942A7_OFFSET UNITYSDK_OFFSET(0x13B03520)
#define CLASS_2_FFF81B602C9E259C_METHOD_2_4FD818057BF6A897_OFFSET UNITYSDK_OFFSET(0x13B03760)
#define CLASS_2_FFF81B602C9E259C_METHOD_2_686221D5DF498040_OFFSET UNITYSDK_OFFSET(0x13B03110)
#define CLASS_2_FFF81B602C9E259C_METHOD_2_6B5EA38BAE5646C2_OFFSET UNITYSDK_OFFSET(0x13B038F0)
#define CLASS_2_FFF81B602C9E259C_METHOD_2_83AE46DB8772209E_OFFSET UNITYSDK_OFFSET(0x13B03350)
#define CLASS_2_FFF81B602C9E259C_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x13B03B80)
#define CLASS_2_FFF81B602C9E259C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13B02DE0)
#define CLASS_2_FFF81B602C9E259C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13B03A50)
#define CLASS_2_FFF81B602C9E259C_TICK_OFFSET UNITYSDK_OFFSET(0x13B03B00)
#define CLASS_2_FFF81B602C9E259C__CTOR_OFFSET UNITYSDK_OFFSET(0x13B02D90)

inline static constexpr unsigned int Class_2_FFF81B602C9E259C_TypeDefinitionIndex = 52706;

class Class_2_FFF81B602C9E259C : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::Single Field_2_0; // 0x0
	::RPG::GameCore::ShowSkillCutIn* Field_2_1; // 0x18
	::RPG::GameCore::TaskContext* Field_2_2; // 0x20
	::System::Single Field_2_3; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowSkillCutIn* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowSkillCutIn*))((::PBYTE)hIl2Cpp + CLASS_2_FFF81B602C9E259C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFF81B602C9E259C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFF81B602C9E259C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFF81B602C9E259C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FFF81B602C9E259C_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_686221D5DF498040()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFF81B602C9E259C_METHOD_2_686221D5DF498040_OFFSET))(this);
	}

	::System::Void Method_2_83AE46DB8772209E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFF81B602C9E259C_METHOD_2_83AE46DB8772209E_OFFSET))(this);
	}

	::System::Void Method_2_4FD818057BF6A897()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFF81B602C9E259C_METHOD_2_4FD818057BF6A897_OFFSET))(this);
	}

	::System::Void Method_2_00D9C214C63942A7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFF81B602C9E259C_METHOD_2_00D9C214C63942A7_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FFF81B602C9E259C_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Single Method_2_6B5EA38BAE5646C2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFF81B602C9E259C_METHOD_2_6B5EA38BAE5646C2_OFFSET))(this);
	}
};
