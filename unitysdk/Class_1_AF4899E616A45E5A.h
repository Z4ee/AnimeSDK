#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AF4899E616A45E5A_DistanceState.h"
#include "unitysdk/System/Object.h"

class Class_1_F3391C70DC37088D;
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_1_AF4899E616A45E5A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBCC3520)
#define CLASS_1_AF4899E616A45E5A_METHOD_1_4BE99DDCF7F1FD88_1_OFFSET UNITYSDK_OFFSET(0xBCC3C40)
#define CLASS_1_AF4899E616A45E5A_METHOD_1_4BE99DDCF7F1FD88_OFFSET UNITYSDK_OFFSET(0xBCC3BD0)
#define CLASS_1_AF4899E616A45E5A_METHOD_1_A77146FFE812D4CF_OFFSET UNITYSDK_OFFSET(0xBCC38B0)
#define CLASS_1_AF4899E616A45E5A_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0xBCC3690)
#define CLASS_1_AF4899E616A45E5A_METHOD_1_EDF6C1582029318C_OFFSET UNITYSDK_OFFSET(0xBCC3AC0)
#define CLASS_1_AF4899E616A45E5A_METHOD_1_EF79C60756C35D5F_OFFSET UNITYSDK_OFFSET(0xBCC3960)
#define CLASS_1_AF4899E616A45E5A_TICK_OFFSET UNITYSDK_OFFSET(0xBCC3590)
#define CLASS_1_AF4899E616A45E5A__CTOR_OFFSET UNITYSDK_OFFSET(0xBCC34E0)

inline static constexpr unsigned int Class_1_AF4899E616A45E5A_TypeDefinitionIndex = 57396;

class Class_1_AF4899E616A45E5A : public ::System::Object
{
public:
	::Class_1_F3391C70DC37088D* KAGKOIFMDNK; // 0x10
	::Class_1_F3391C70DC37088D* EEKCLONKFAJ; // 0x18
	::RPG::GameCore::TransformComponent* FOKJNOBHOIP; // 0x20
	::System::Single NMNNICPPECP; // 0x28
	::System::Single KCMOHJEDEMK; // 0x2C
	::Class_1_AF4899E616A45E5A_DistanceState KOOBKNDEKBD; // 0x30
	::System::Single JFNJIELNNHO; // 0x34
	::System::Boolean EMHAOMPOJBF; // 0x38
	::System::Single EFKCJMFANEB; // 0x3C

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
