#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class OnControlEraFlipperLightDeviceListener; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_30DE0B2969F1A036_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B42FDA0)
#define CLASS_2_30DE0B2969F1A036_METHOD_2_70595BBE3E0E4F2A_OFFSET UNITYSDK_OFFSET(0x1B4300B0)
#define CLASS_2_30DE0B2969F1A036_METHOD_2_B710AD145420A84D_OFFSET UNITYSDK_OFFSET(0x1B430420)
#define CLASS_2_30DE0B2969F1A036_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B42FB60)
#define CLASS_2_30DE0B2969F1A036_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1B42FC90)
#define CLASS_2_30DE0B2969F1A036_TICK_OFFSET UNITYSDK_OFFSET(0x1B430600)
#define CLASS_2_30DE0B2969F1A036__CTOR_OFFSET UNITYSDK_OFFSET(0x1B42FA00)

inline static constexpr unsigned int Class_2_30DE0B2969F1A036_TypeDefinitionIndex = 53041;

class Class_2_30DE0B2969F1A036 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
	::Class_3_07C3C4D2990C49EE* JGGJMMFGGLD; // 0x20
	::Class_3_07C3C4D2990C49EE* GIFCBACDIOC; // 0x28
	::RPG::GameCore::OnControlEraFlipperLightDeviceListener* IGHAHBNLIJA; // 0x30
	::Class_3_07C3C4D2990C49EE* ENDDMKOHKAI; // 0x38
	::System::Boolean HPPIMDBIDKA; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OnControlEraFlipperLightDeviceListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OnControlEraFlipperLightDeviceListener*))((::PBYTE)hIl2Cpp + CLASS_2_30DE0B2969F1A036__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30DE0B2969F1A036_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30DE0B2969F1A036_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30DE0B2969F1A036_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_70595BBE3E0E4F2A(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_30DE0B2969F1A036_METHOD_2_70595BBE3E0E4F2A_OFFSET))(this, a1);
	}

	::System::Void Method_2_B710AD145420A84D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_30DE0B2969F1A036_METHOD_2_B710AD145420A84D_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_30DE0B2969F1A036_TICK_OFFSET))(this, a1);
	}
};
