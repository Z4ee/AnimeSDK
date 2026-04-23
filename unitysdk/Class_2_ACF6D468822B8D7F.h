#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class DronesPuzzleEventListener; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_ACF6D468822B8D7F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8F95D30)
#define CLASS_2_ACF6D468822B8D7F_METHOD_2_01509228E3A9577B_1_OFFSET UNITYSDK_OFFSET(0x8F95F60)
#define CLASS_2_ACF6D468822B8D7F_METHOD_2_01509228E3A9577B_OFFSET UNITYSDK_OFFSET(0x8F95E30)
#define CLASS_2_ACF6D468822B8D7F_METHOD_2_15F0CCBF7346C213_OFFSET UNITYSDK_OFFSET(0x8F961D0)
#define CLASS_2_ACF6D468822B8D7F_METHOD_2_61EC2AC0BD93363E_OFFSET UNITYSDK_OFFSET(0x8F960A0)
#define CLASS_2_ACF6D468822B8D7F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8F95A00)
#define CLASS_2_ACF6D468822B8D7F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8F95BC0)
#define CLASS_2_ACF6D468822B8D7F_TICK_OFFSET UNITYSDK_OFFSET(0x8F96460)
#define CLASS_2_ACF6D468822B8D7F__CTOR_OFFSET UNITYSDK_OFFSET(0x8F957C0)

inline static constexpr unsigned int Class_2_ACF6D468822B8D7F_TypeDefinitionIndex = 53576;

class Class_2_ACF6D468822B8D7F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::Class_3_E21F6DE9B7FA4D05* Field_2_2; // 0x20
	::Class_3_E21F6DE9B7FA4D05* Field_2_8; // 0x28
	::Class_3_E21F6DE9B7FA4D05* Field_2_4; // 0x30
	::Class_3_E21F6DE9B7FA4D05* Field_2_9; // 0x38
	::RPG::GameCore::DronesPuzzleEventListener* Field_2_1; // 0x40
	::Class_3_E21F6DE9B7FA4D05* Field_2_6; // 0x48
	::System::Boolean Field_2_5; // 0x50
	::System::Boolean Field_2_10; // 0x51
	::System::Boolean Field_2_7; // 0x52
	::System::Boolean Field_2_3; // 0x53

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DronesPuzzleEventListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DronesPuzzleEventListener*))((::PBYTE)hIl2Cpp + CLASS_2_ACF6D468822B8D7F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACF6D468822B8D7F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACF6D468822B8D7F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACF6D468822B8D7F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_01509228E3A9577B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_ACF6D468822B8D7F_METHOD_2_01509228E3A9577B_OFFSET))(this, a1);
	}

	::System::Void Method_2_01509228E3A9577B_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_ACF6D468822B8D7F_METHOD_2_01509228E3A9577B_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_61EC2AC0BD93363E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_ACF6D468822B8D7F_METHOD_2_61EC2AC0BD93363E_OFFSET))(this, a1);
	}

	::System::Void Method_2_15F0CCBF7346C213(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_ACF6D468822B8D7F_METHOD_2_15F0CCBF7346C213_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ACF6D468822B8D7F_TICK_OFFSET))(this, a1);
	}
};
