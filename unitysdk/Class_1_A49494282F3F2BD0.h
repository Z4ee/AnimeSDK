#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_A49494282F3F2BD0_METHOD_1_42BACE3BC7DBBCAD_OFFSET UNITYSDK_OFFSET(0x1CD4A590)
#define CLASS_1_A49494282F3F2BD0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD4A710)

inline static constexpr unsigned int Class_1_A49494282F3F2BD0_TypeDefinitionIndex = 12021;

class Class_1_A49494282F3F2BD0 : public ::System::Object
{
public:
	::System::String* OJFFBFCEMKL; // 0x10
	::Enum_3_F80BFD5B986D5503 OAPONHEHCOJ; // 0x18
	::System::UInt32 EHLMAJICIGJ; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A49494282F3F2BD0__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_42BACE3BC7DBBCAD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_A49494282F3F2BD0*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_A49494282F3F2BD0*&))((::PBYTE)hIl2Cpp + CLASS_1_A49494282F3F2BD0_METHOD_1_42BACE3BC7DBBCAD_OFFSET))(a1, a2);
	}
};
