#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_8CC859447F33469F;
class Class_3_DFD5D1FDB9D2A4AC;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_00166EFA11F9870E___C_METHOD_1_1E2D4507FCC745F8_OFFSET UNITYSDK_OFFSET(0x130EB8B0)
#define CLASS_3_00166EFA11F9870E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x130EB860)
#define CLASS_3_00166EFA11F9870E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x130EB8A0)

inline static constexpr unsigned int Class_3_00166EFA11F9870E___c_TypeDefinitionIndex = 45494;

class Class_3_00166EFA11F9870E___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_8CC859447F33469F*>** StaticGet___9__2_0()
	{
		return (::System::Action_2<::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_8CC859447F33469F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_00166EFA11F9870E___c_TypeDefinitionIndex)->GetStaticField(0x3B260);
	}
	static ::Class_3_00166EFA11F9870E___c** StaticGet___9()
	{
		return (::Class_3_00166EFA11F9870E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_00166EFA11F9870E___c_TypeDefinitionIndex)->GetStaticField(0x3B268);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_00166EFA11F9870E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_00166EFA11F9870E___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1E2D4507FCC745F8(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Class_3_8CC859447F33469F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_8CC859447F33469F*))((::PBYTE)hIl2Cpp + CLASS_3_00166EFA11F9870E___C_METHOD_1_1E2D4507FCC745F8_OFFSET))(this, a1, a2);
	}
};
