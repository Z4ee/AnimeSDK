#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class OnControlEraFlipperLightDeviceListener; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_30DE0B2969F1A036_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16F84960)
#define CLASS_2_30DE0B2969F1A036_METHOD_2_70595BBE3E0E4F2A_OFFSET UNITYSDK_OFFSET(0x16F84C70)
#define CLASS_2_30DE0B2969F1A036_METHOD_2_B710AD145420A84D_OFFSET UNITYSDK_OFFSET(0x16F84FE0)
#define CLASS_2_30DE0B2969F1A036_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16F84720)
#define CLASS_2_30DE0B2969F1A036_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16F84850)
#define CLASS_2_30DE0B2969F1A036_TICK_OFFSET UNITYSDK_OFFSET(0x16F851C0)
#define CLASS_2_30DE0B2969F1A036__CTOR_OFFSET UNITYSDK_OFFSET(0x16F845C0)

inline static constexpr unsigned int Class_2_30DE0B2969F1A036_TypeDefinitionIndex = 50378;

class Class_2_30DE0B2969F1A036 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_2_1; // 0x20
	::Class_3_07C3C4D2990C49EE* Field_2_2; // 0x28
	::Class_3_07C3C4D2990C49EE* Field_2_3; // 0x30
	::RPG::GameCore::OnControlEraFlipperLightDeviceListener* Field_2_4; // 0x38
	::System::Boolean Field_2_5; // 0x40

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
