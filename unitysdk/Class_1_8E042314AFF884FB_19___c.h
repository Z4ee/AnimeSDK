#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_49CAB3DE74280C58;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_8E042314AFF884FB_19___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11490EC0)
#define CLASS_1_8E042314AFF884FB_19___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11490F00)
#define CLASS_1_8E042314AFF884FB_19___C___SYNCCHIMERAPOSITION_B__4_0_OFFSET UNITYSDK_OFFSET(0x11490F10)

inline static constexpr unsigned int Class_1_8E042314AFF884FB_19___c_TypeDefinitionIndex = 63155;

class Class_1_8E042314AFF884FB_19___c : public ::System::Object
{
public:
	static ::Class_1_8E042314AFF884FB_19___c** StaticGet___9()
	{
		return (::Class_1_8E042314AFF884FB_19___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8E042314AFF884FB_19___c_TypeDefinitionIndex)->GetStaticField(0x362B0);
	}
	static ::System::Comparison_1<::Class_2_49CAB3DE74280C58*>** StaticGet___9__4_0()
	{
		return (::System::Comparison_1<::Class_2_49CAB3DE74280C58*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8E042314AFF884FB_19___c_TypeDefinitionIndex)->GetStaticField(0x362B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_19___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_19___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __SyncChimeraPosition_b__4_0(::Class_2_49CAB3DE74280C58* a, ::Class_2_49CAB3DE74280C58* b)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::Class_2_49CAB3DE74280C58*))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_19___C___SYNCCHIMERAPOSITION_B__4_0_OFFSET))(this, a, b);
	}
};
