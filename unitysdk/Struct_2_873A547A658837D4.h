#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Spline { class NAPZoneMetaPlugin_SlideRopeCamera; }
namespace System { class Object; }
namespace System { class String; }

#define STRUCT_2_873A547A658837D4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x882630)
#define STRUCT_2_873A547A658837D4_EQUALS_OFFSET UNITYSDK_OFFSET(0x8825B0)
#define STRUCT_2_873A547A658837D4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x882640)
#define STRUCT_2_873A547A658837D4_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x882690)
#define STRUCT_2_873A547A658837D4_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x882700)
#define STRUCT_2_873A547A658837D4_METHOD_2_D22FDA0E66940030_1_OFFSET UNITYSDK_OFFSET(0x1AAAD960)
#define STRUCT_2_873A547A658837D4_METHOD_2_D22FDA0E66940030_OFFSET UNITYSDK_OFFSET(0x1AAAD870)
#define STRUCT_2_873A547A658837D4__CTOR_OFFSET UNITYSDK_OFFSET(0x8824C0)

inline static constexpr unsigned int Struct_2_873A547A658837D4_TypeDefinitionIndex = 68329;

struct alignas(8) Struct_2_873A547A658837D4
{
	::System::String* Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x18
	::System::String* Field_2_2; // 0x20

	::System::Void _ctor(::MoleMole::Spline::NAPZoneMetaPlugin_SlideRopeCamera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Spline::NAPZoneMetaPlugin_SlideRopeCamera*))((::PBYTE)hIl2Cpp + STRUCT_2_873A547A658837D4__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::Struct_2_873A547A658837D4 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_873A547A658837D4))((::PBYTE)hIl2Cpp + STRUCT_2_873A547A658837D4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_873A547A658837D4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_873A547A658837D4_GETHASHCODE_OFFSET))(this);
	}

	static ::System::Boolean Method_2_D22FDA0E66940030(::Struct_2_873A547A658837D4 a1, ::Struct_2_873A547A658837D4 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_873A547A658837D4, ::Struct_2_873A547A658837D4))((::PBYTE)hIl2Cpp + STRUCT_2_873A547A658837D4_METHOD_2_D22FDA0E66940030_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_D22FDA0E66940030_1(::Struct_2_873A547A658837D4 a1, ::Struct_2_873A547A658837D4 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_873A547A658837D4, ::Struct_2_873A547A658837D4))((::PBYTE)hIl2Cpp + STRUCT_2_873A547A658837D4_METHOD_2_D22FDA0E66940030_1_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_873A547A658837D4_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_873A547A658837D4_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}
};
