#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B66C1067C0468FBB;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_8E042314AFF884FB_21___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x130BC4C0)
#define CLASS_1_8E042314AFF884FB_21___C__CTOR_OFFSET UNITYSDK_OFFSET(0x130BC500)
#define CLASS_1_8E042314AFF884FB_21___C___SYNCCHIMERAPOSITION_B__4_0_OFFSET UNITYSDK_OFFSET(0x130BC510)

inline static constexpr unsigned int Class_1_8E042314AFF884FB_21___c_TypeDefinitionIndex = 77142;

class Class_1_8E042314AFF884FB_21___c : public ::System::Object
{
public:
	static ::Class_1_8E042314AFF884FB_21___c** StaticGet___9()
	{
		return (::Class_1_8E042314AFF884FB_21___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8E042314AFF884FB_21___c_TypeDefinitionIndex)->GetStaticField(0x66A60);
	}
	static ::System::Comparison_1<::Class_2_B66C1067C0468FBB*>** StaticGet___9__4_0()
	{
		return (::System::Comparison_1<::Class_2_B66C1067C0468FBB*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8E042314AFF884FB_21___c_TypeDefinitionIndex)->GetStaticField(0x66A68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_21___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_21___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __SyncChimeraPosition_b__4_0(::Class_2_B66C1067C0468FBB* a1, ::Class_2_B66C1067C0468FBB* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::Class_2_B66C1067C0468FBB*))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_21___C___SYNCCHIMERAPOSITION_B__4_0_OFFSET))(this, a1, a2);
	}
};
