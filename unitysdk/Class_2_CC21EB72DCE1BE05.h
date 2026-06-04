#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WolfBroPuzzleFuncBtnListener; }
namespace System { class Object; }

#define CLASS_2_CC21EB72DCE1BE05_DISPOSE_OFFSET UNITYSDK_OFFSET(0x143C8A00)
#define CLASS_2_CC21EB72DCE1BE05_METHOD_2_A43D587A89E24E29_OFFSET UNITYSDK_OFFSET(0x143C8BE0)
#define CLASS_2_CC21EB72DCE1BE05_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x143C8830)
#define CLASS_2_CC21EB72DCE1BE05_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x143C88E0)
#define CLASS_2_CC21EB72DCE1BE05_TICK_OFFSET UNITYSDK_OFFSET(0x143C8B00)
#define CLASS_2_CC21EB72DCE1BE05__CTOR_OFFSET UNITYSDK_OFFSET(0x143C87B0)

inline static constexpr unsigned int Class_2_CC21EB72DCE1BE05_TypeDefinitionIndex = 55094;

class Class_2_CC21EB72DCE1BE05 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WolfBroPuzzleFuncBtnListener* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::Class_3_07C3C4D2990C49EE* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WolfBroPuzzleFuncBtnListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WolfBroPuzzleFuncBtnListener*))((::PBYTE)hIl2Cpp + CLASS_2_CC21EB72DCE1BE05__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC21EB72DCE1BE05_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC21EB72DCE1BE05_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC21EB72DCE1BE05_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CC21EB72DCE1BE05_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_A43D587A89E24E29(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CC21EB72DCE1BE05_METHOD_2_A43D587A89E24E29_OFFSET))(this, a1);
	}
};
