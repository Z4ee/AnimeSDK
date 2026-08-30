#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowSkillCutIn; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_FFF81B602C9E259C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15936CE0)
#define CLASS_2_FFF81B602C9E259C_METHOD_2_00D9C214C63942A7_OFFSET UNITYSDK_OFFSET(0x159374D0)
#define CLASS_2_FFF81B602C9E259C_METHOD_2_4FD818057BF6A897_OFFSET UNITYSDK_OFFSET(0x15937710)
#define CLASS_2_FFF81B602C9E259C_METHOD_2_686221D5DF498040_OFFSET UNITYSDK_OFFSET(0x15937060)
#define CLASS_2_FFF81B602C9E259C_METHOD_2_6B5EA38BAE5646C2_OFFSET UNITYSDK_OFFSET(0x159378A0)
#define CLASS_2_FFF81B602C9E259C_METHOD_2_83AE46DB8772209E_OFFSET UNITYSDK_OFFSET(0x15937300)
#define CLASS_2_FFF81B602C9E259C_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x15937B30)
#define CLASS_2_FFF81B602C9E259C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15936D20)
#define CLASS_2_FFF81B602C9E259C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15937A00)
#define CLASS_2_FFF81B602C9E259C_TICK_OFFSET UNITYSDK_OFFSET(0x15937AB0)
#define CLASS_2_FFF81B602C9E259C__CTOR_OFFSET UNITYSDK_OFFSET(0x15936CD0)

inline static constexpr unsigned int Class_2_FFF81B602C9E259C_TypeDefinitionIndex = 56637;

class Class_2_FFF81B602C9E259C : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::Single MKIAIOPGPDE; // 0x0
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::ShowSkillCutIn* OFKGLJOAMLD; // 0x20
	::System::Single DEIKJNCEEOD; // 0x28

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
