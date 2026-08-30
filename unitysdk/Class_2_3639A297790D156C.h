#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class ConsumeOrigamiItem; }
namespace RPG::GameCore { class MazePuzzleOrigamiColonyRow; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_3639A297790D156C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16EC6DB0)
#define CLASS_2_3639A297790D156C_METHOD_2_21AFFD96111DC5FA_OFFSET UNITYSDK_OFFSET(0x16EC78E0)
#define CLASS_2_3639A297790D156C_METHOD_2_6F73A40265D5B980_OFFSET UNITYSDK_OFFSET(0x16EC71A0)
#define CLASS_2_3639A297790D156C_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x16EC7BA0)
#define CLASS_2_3639A297790D156C_METHOD_2_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0x16EC76B0)
#define CLASS_2_3639A297790D156C_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16EC7660)
#define CLASS_2_3639A297790D156C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16EC7000)
#define CLASS_2_3639A297790D156C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16EC7440)
#define CLASS_2_3639A297790D156C_TICK_OFFSET UNITYSDK_OFFSET(0x16EC7520)
#define CLASS_2_3639A297790D156C__CTOR_OFFSET UNITYSDK_OFFSET(0x16EC6CC0)

inline static constexpr unsigned int Class_2_3639A297790D156C_TypeDefinitionIndex = 52976;

class Class_2_3639A297790D156C : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* HKBOGHBKDCN; // 0x0
	::RPG::GameCore::MazePuzzleOrigamiColonyRow* CLDJDHCJFFD; // 0x18
	::Class_3_07C3C4D2990C49EE* JOABCNLPPGI; // 0x20
	::RPG::GameCore::ConsumeOrigamiItem* OFKGLJOAMLD; // 0x28
	::Class_3_07C3C4D2990C49EE* KPHGLEKEALH; // 0x30
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
	::Class_3_07C3C4D2990C49EE* IKNPCLDDCDI; // 0x40
	::System::UInt32 KGGMOFBNALD; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConsumeOrigamiItem* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConsumeOrigamiItem*))((::PBYTE)hIl2Cpp + CLASS_2_3639A297790D156C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3639A297790D156C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3639A297790D156C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3639A297790D156C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3639A297790D156C_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_6F73A40265D5B980()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3639A297790D156C_METHOD_2_6F73A40265D5B980_OFFSET))(this);
	}

	::System::Void Method_2_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3639A297790D156C_METHOD_2_96BDC4B57CCFE000_OFFSET))(this, a1);
	}

	::System::Void Method_2_21AFFD96111DC5FA(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3639A297790D156C_METHOD_2_21AFFD96111DC5FA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3639A297790D156C_METHOD_2_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3639A297790D156C_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
