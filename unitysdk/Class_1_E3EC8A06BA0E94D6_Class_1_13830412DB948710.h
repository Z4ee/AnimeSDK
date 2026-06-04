#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CC2A36004EB01F9E;
namespace System { class String; }

#define CLASS_1_E3EC8A06BA0E94D6_CLASS_1_13830412DB948710_GET_EFFECTPATH_OFFSET UNITYSDK_OFFSET(0x145505F0)
#define CLASS_1_E3EC8A06BA0E94D6_CLASS_1_13830412DB948710_METHOD_1_1422DD9CC227FAB5_OFFSET UNITYSDK_OFFSET(0x145503D0)
#define CLASS_1_E3EC8A06BA0E94D6_CLASS_1_13830412DB948710_METHOD_1_D66F211912D83957_OFFSET UNITYSDK_OFFSET(0x14550320)
#define CLASS_1_E3EC8A06BA0E94D6_CLASS_1_13830412DB948710__CTOR_OFFSET UNITYSDK_OFFSET(0x14550270)

inline static constexpr unsigned int Class_1_E3EC8A06BA0E94D6_Class_1_13830412DB948710_TypeDefinitionIndex = 72356;

class Class_1_E3EC8A06BA0E94D6_Class_1_13830412DB948710 : public ::System::Object
{
public:
	::System::String* _EffectPath_k__BackingField; // 0x10
	::System::Int64 Field_1_1; // 0x18
	::System::Int64 Field_1_2; // 0x20
	::System::Int64 Field_1_3; // 0x28
	::System::Int64 Field_1_4; // 0x30
	::System::Int64 Field_1_5; // 0x38
	::System::Single Field_1_6; // 0x40
	::System::Int32 Field_1_7; // 0x44
	::System::Int32 Field_1_8; // 0x48
	::System::Int32 Field_1_9; // 0x4C
	::System::Int64 Field_1_10; // 0x50
	::System::Int64 Field_1_11; // 0x58

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E3EC8A06BA0E94D6_CLASS_1_13830412DB948710__CTOR_OFFSET))(this, a1);
	}

	::System::String* get_EffectPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3EC8A06BA0E94D6_CLASS_1_13830412DB948710_GET_EFFECTPATH_OFFSET))(this);
	}

	::System::Int64 Method_1_D66F211912D83957()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3EC8A06BA0E94D6_CLASS_1_13830412DB948710_METHOD_1_D66F211912D83957_OFFSET))(this);
	}

	::Class_1_CC2A36004EB01F9E* Method_1_1422DD9CC227FAB5()
	{
		return ((::Class_1_CC2A36004EB01F9E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3EC8A06BA0E94D6_CLASS_1_13830412DB948710_METHOD_1_1422DD9CC227FAB5_OFFSET))(this);
	}
};
