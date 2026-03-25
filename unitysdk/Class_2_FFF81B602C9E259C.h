#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowSkillCutIn; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_FFF81B602C9E259C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11469CC0)
#define CLASS_2_FFF81B602C9E259C_METHOD_2_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x1146A4A0)
#define CLASS_2_FFF81B602C9E259C_METHOD_2_6B5EA38BAE5646C2_OFFSET UNITYSDK_OFFSET(0x1146A910)
#define CLASS_2_FFF81B602C9E259C_METHOD_2_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x1146A290)
#define CLASS_2_FFF81B602C9E259C_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x1146AB90)
#define CLASS_2_FFF81B602C9E259C_METHOD_2_D460587695D41831_OFFSET UNITYSDK_OFFSET(0x1146A020)
#define CLASS_2_FFF81B602C9E259C_METHOD_2_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x1146A740)
#define CLASS_2_FFF81B602C9E259C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11469D00)
#define CLASS_2_FFF81B602C9E259C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1146AA70)
#define CLASS_2_FFF81B602C9E259C_TICK_OFFSET UNITYSDK_OFFSET(0x1146AB10)
#define CLASS_2_FFF81B602C9E259C__CTOR_OFFSET UNITYSDK_OFFSET(0x11469CB0)

inline static constexpr unsigned int Class_2_FFF81B602C9E259C_TypeDefinitionIndex = 45387;

class Class_2_FFF81B602C9E259C : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::Single Field_2_3; // 0x0
	::RPG::GameCore::ShowSkillCutIn* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::System::Single Field_2_2; // 0x28

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

	::System::Void Method_2_D460587695D41831()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFF81B602C9E259C_METHOD_2_D460587695D41831_OFFSET))(this);
	}

	::System::Void Method_2_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFF81B602C9E259C_METHOD_2_85377D41FEE05B66_OFFSET))(this);
	}

	::System::Void Method_2_F978A1D172468895()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFF81B602C9E259C_METHOD_2_F978A1D172468895_OFFSET))(this);
	}

	::System::Void Method_2_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFF81B602C9E259C_METHOD_2_5A124CAF1E48B74F_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FFF81B602C9E259C_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Single Method_2_6B5EA38BAE5646C2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFF81B602C9E259C_METHOD_2_6B5EA38BAE5646C2_OFFSET))(this);
	}
};
