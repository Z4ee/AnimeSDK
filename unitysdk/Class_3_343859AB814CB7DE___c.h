#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_343859AB814CB7DE_AnimatedInstance;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_3_343859AB814CB7DE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x146077F0)
#define CLASS_3_343859AB814CB7DE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14607830)
#define CLASS_3_343859AB814CB7DE___C__PLAY_B__4_0_OFFSET UNITYSDK_OFFSET(0x14607840)

inline static constexpr unsigned int Class_3_343859AB814CB7DE___c_TypeDefinitionIndex = 65749;

class Class_3_343859AB814CB7DE___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_3_343859AB814CB7DE_AnimatedInstance*>** StaticGet___9__4_0()
	{
		return (::System::Comparison_1<::Class_3_343859AB814CB7DE_AnimatedInstance*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_343859AB814CB7DE___c_TypeDefinitionIndex)->GetStaticField(0x551D0);
	}
	static ::Class_3_343859AB814CB7DE___c** StaticGet___9()
	{
		return (::Class_3_343859AB814CB7DE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_343859AB814CB7DE___c_TypeDefinitionIndex)->GetStaticField(0x551D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_343859AB814CB7DE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_343859AB814CB7DE___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _Play_b__4_0(::Class_3_343859AB814CB7DE_AnimatedInstance* a1, ::Class_3_343859AB814CB7DE_AnimatedInstance* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_3_343859AB814CB7DE_AnimatedInstance*, ::Class_3_343859AB814CB7DE_AnimatedInstance*))((::PBYTE)hIl2Cpp + CLASS_3_343859AB814CB7DE___C__PLAY_B__4_0_OFFSET))(this, a1, a2);
	}
};
