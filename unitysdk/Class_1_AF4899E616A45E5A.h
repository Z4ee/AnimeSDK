#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AF4899E616A45E5A_DistanceState.h"
#include "unitysdk/System/Object.h"

class Class_1_F3391C70DC37088D;
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_1_AF4899E616A45E5A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A40DF0)
#define CLASS_1_AF4899E616A45E5A_METHOD_1_4BE99DDCF7F1FD88_1_OFFSET UNITYSDK_OFFSET(0x13A41510)
#define CLASS_1_AF4899E616A45E5A_METHOD_1_4BE99DDCF7F1FD88_OFFSET UNITYSDK_OFFSET(0x13A414A0)
#define CLASS_1_AF4899E616A45E5A_METHOD_1_A77146FFE812D4CF_OFFSET UNITYSDK_OFFSET(0x13A41180)
#define CLASS_1_AF4899E616A45E5A_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x13A40F60)
#define CLASS_1_AF4899E616A45E5A_METHOD_1_EDF6C1582029318C_OFFSET UNITYSDK_OFFSET(0x13A41390)
#define CLASS_1_AF4899E616A45E5A_METHOD_1_EF79C60756C35D5F_OFFSET UNITYSDK_OFFSET(0x13A41230)
#define CLASS_1_AF4899E616A45E5A_TICK_OFFSET UNITYSDK_OFFSET(0x13A40E60)
#define CLASS_1_AF4899E616A45E5A__CTOR_OFFSET UNITYSDK_OFFSET(0x13A40DB0)

inline static constexpr unsigned int Class_1_AF4899E616A45E5A_TypeDefinitionIndex = 54675;

class Class_1_AF4899E616A45E5A : public ::System::Object
{
public:
	::Class_1_F3391C70DC37088D* Field_1_0; // 0x10
	::RPG::GameCore::TransformComponent* Field_1_1; // 0x18
	::Class_1_F3391C70DC37088D* Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x28
	::System::Single Field_1_4; // 0x2C
	::System::Single Field_1_5; // 0x30
	::System::Single Field_1_6; // 0x34
	::System::Single Field_1_7; // 0x38
	::Class_1_AF4899E616A45E5A_DistanceState Field_1_8; // 0x3C

	::System::Void _ctor(::RPG::GameCore::TransformComponent* a1, ::System::Single a2, ::System::Single a3, ::Class_1_F3391C70DC37088D* a4, ::System::Single a5, ::Class_1_F3391C70DC37088D* a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TransformComponent*, ::System::Single, ::System::Single, ::Class_1_F3391C70DC37088D*, ::System::Single, ::Class_1_F3391C70DC37088D*))((::PBYTE)hIl2Cpp + CLASS_1_AF4899E616A45E5A__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF4899E616A45E5A_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AF4899E616A45E5A_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AF4899E616A45E5A_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Single Method_1_EF79C60756C35D5F()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF4899E616A45E5A_METHOD_1_EF79C60756C35D5F_OFFSET))(this);
	}

	::System::Void Method_1_EDF6C1582029318C(::Class_1_AF4899E616A45E5A_DistanceState a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AF4899E616A45E5A_DistanceState))((::PBYTE)hIl2Cpp + CLASS_1_AF4899E616A45E5A_METHOD_1_EDF6C1582029318C_OFFSET))(this, a1);
	}

	::System::Void Method_1_4BE99DDCF7F1FD88()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF4899E616A45E5A_METHOD_1_4BE99DDCF7F1FD88_OFFSET))(this);
	}

	::System::Void Method_1_4BE99DDCF7F1FD88_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF4899E616A45E5A_METHOD_1_4BE99DDCF7F1FD88_1_OFFSET))(this);
	}

	::System::Void Method_1_A77146FFE812D4CF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AF4899E616A45E5A_METHOD_1_A77146FFE812D4CF_OFFSET))(this, a1);
	}
};
