#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_D2AB37B25CFD4834_METHOD_2_2ABC70C3D4E01B81_OFFSET UNITYSDK_OFFSET(0x20F5240)
#define STRUCT_2_D2AB37B25CFD4834_METHOD_2_7985BD151CCD0507_OFFSET UNITYSDK_OFFSET(0x20F5380)
#define STRUCT_2_D2AB37B25CFD4834_METHOD_2_7D368340F6D78D58_OFFSET UNITYSDK_OFFSET(0x20F5210)
#define STRUCT_2_D2AB37B25CFD4834_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20F5440)
#define STRUCT_2_D2AB37B25CFD4834__CTOR_1_OFFSET UNITYSDK_OFFSET(0x72D10)
#define STRUCT_2_D2AB37B25CFD4834__CTOR_OFFSET UNITYSDK_OFFSET(0x20ED630)

inline static constexpr unsigned int Struct_2_D2AB37B25CFD4834_TypeDefinitionIndex = 8584;

struct alignas(4) Struct_2_D2AB37B25CFD4834
{
	::RPG::MVector2 Field_2_0; // 0x10
	::RPG::MVector2 Field_2_1; // 0x18

	::System::Void _ctor(::RPG::MVector2& a1, ::RPG::MVector2& a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector2&, ::RPG::MVector2&))((::PBYTE)hIl2Cpp + STRUCT_2_D2AB37B25CFD4834__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::RPG::MVector2 a1, ::RPG::MVector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + STRUCT_2_D2AB37B25CFD4834__CTOR_1_OFFSET))(this, a1, a2);
	}

	::RPG::MVector2 Method_2_7D368340F6D78D58(::System::Single a1)
	{
		return ((::RPG::MVector2(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_D2AB37B25CFD4834_METHOD_2_7D368340F6D78D58_OFFSET))(this, a1);
	}

	::System::Single Method_2_2ABC70C3D4E01B81(::RPG::MVector2 a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + STRUCT_2_D2AB37B25CFD4834_METHOD_2_2ABC70C3D4E01B81_OFFSET))(this, a1);
	}

	::RPG::MVector2 Method_2_7985BD151CCD0507(::RPG::MVector2 a1)
	{
		return ((::RPG::MVector2(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + STRUCT_2_D2AB37B25CFD4834_METHOD_2_7985BD151CCD0507_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D2AB37B25CFD4834_TOSTRING_OFFSET))(this);
	}
};
