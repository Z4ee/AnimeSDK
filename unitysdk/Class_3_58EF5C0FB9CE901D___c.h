#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_58EF5C0FB9CE901D_AnimatedInstance;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_3_58EF5C0FB9CE901D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBAAD2A0)
#define CLASS_3_58EF5C0FB9CE901D___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBAAD2E0)
#define CLASS_3_58EF5C0FB9CE901D___C__PLAY_B__4_0_OFFSET UNITYSDK_OFFSET(0xBAAD2F0)

inline static constexpr unsigned int Class_3_58EF5C0FB9CE901D___c_TypeDefinitionIndex = 64823;

class Class_3_58EF5C0FB9CE901D___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_3_58EF5C0FB9CE901D_AnimatedInstance*>** StaticGet___9__4_0()
	{
		return (::System::Comparison_1<::Class_3_58EF5C0FB9CE901D_AnimatedInstance*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_58EF5C0FB9CE901D___c_TypeDefinitionIndex)->GetStaticField(0x6A520);
	}
	static ::Class_3_58EF5C0FB9CE901D___c** StaticGet___9()
	{
		return (::Class_3_58EF5C0FB9CE901D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_58EF5C0FB9CE901D___c_TypeDefinitionIndex)->GetStaticField(0x6A528);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_58EF5C0FB9CE901D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_58EF5C0FB9CE901D___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _Play_b__4_0(::Class_3_58EF5C0FB9CE901D_AnimatedInstance* x, ::Class_3_58EF5C0FB9CE901D_AnimatedInstance* y)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_3_58EF5C0FB9CE901D_AnimatedInstance*, ::Class_3_58EF5C0FB9CE901D_AnimatedInstance*))((::PBYTE)hIl2Cpp + CLASS_3_58EF5C0FB9CE901D___C__PLAY_B__4_0_OFFSET))(this, x, y);
	}
};
