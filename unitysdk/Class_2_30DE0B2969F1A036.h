#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class OnControlEraFlipperLightDeviceListener; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_30DE0B2969F1A036_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10A44C80)
#define CLASS_2_30DE0B2969F1A036_METHOD_2_4A48A93CA7A0FA4A_OFFSET UNITYSDK_OFFSET(0x10A44E50)
#define CLASS_2_30DE0B2969F1A036_METHOD_2_B710AD145420A84D_OFFSET UNITYSDK_OFFSET(0x10A45120)
#define CLASS_2_30DE0B2969F1A036_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10A44A90)
#define CLASS_2_30DE0B2969F1A036_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10A44BA0)
#define CLASS_2_30DE0B2969F1A036_TICK_OFFSET UNITYSDK_OFFSET(0x10A452D0)
#define CLASS_2_30DE0B2969F1A036__CTOR_OFFSET UNITYSDK_OFFSET(0x10A44930)

inline static constexpr unsigned int Class_2_30DE0B2969F1A036_TypeDefinitionIndex = 42718;

class Class_2_30DE0B2969F1A036 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_5775A4FEC79026BC* Field_2_3; // 0x18
	::RPG::GameCore::OnControlEraFlipperLightDeviceListener* Field_2_1; // 0x20
	::Class_3_5775A4FEC79026BC* Field_2_5; // 0x28
	::RPG::GameCore::TaskContext* Field_2_0; // 0x30
	::Class_3_5775A4FEC79026BC* Field_2_4; // 0x38
	::System::Boolean Field_2_2; // 0x40

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

	::System::Void Method_2_4A48A93CA7A0FA4A(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_30DE0B2969F1A036_METHOD_2_4A48A93CA7A0FA4A_OFFSET))(this, a1);
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
