#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_B3D9F954008EA010_AnimatedInstance;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_3_B3D9F954008EA010___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x144A8FF0)
#define CLASS_3_B3D9F954008EA010___C__CTOR_OFFSET UNITYSDK_OFFSET(0x144A9020)
#define CLASS_3_B3D9F954008EA010___C__PLAY_B__4_0_OFFSET UNITYSDK_OFFSET(0x144A9030)

inline static constexpr unsigned int Class_3_B3D9F954008EA010___c_TypeDefinitionIndex = 65757;

class Class_3_B3D9F954008EA010___c : public ::System::Object
{
public:
	static ::Class_3_B3D9F954008EA010___c** StaticGet___9()
	{
		return (::Class_3_B3D9F954008EA010___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B3D9F954008EA010___c_TypeDefinitionIndex)->GetStaticField(0x45700);
	}
	static ::System::Comparison_1<::Class_3_B3D9F954008EA010_AnimatedInstance*>** StaticGet___9__4_0()
	{
		return (::System::Comparison_1<::Class_3_B3D9F954008EA010_AnimatedInstance*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B3D9F954008EA010___c_TypeDefinitionIndex)->GetStaticField(0x45708);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _Play_b__4_0(::Class_3_B3D9F954008EA010_AnimatedInstance* a1, ::Class_3_B3D9F954008EA010_AnimatedInstance* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_3_B3D9F954008EA010_AnimatedInstance*, ::Class_3_B3D9F954008EA010_AnimatedInstance*))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010___C__PLAY_B__4_0_OFFSET))(this, a1, a2);
	}
};
