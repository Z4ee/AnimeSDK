#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Retarget.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_4_3793F4EB675CED8F_METHOD_4_0BAE4FCAEFBCC63D_OFFSET UNITYSDK_OFFSET(0x19EA4C10)
#define CLASS_4_3793F4EB675CED8F_METHOD_4_C616402C1FF54AE8_OFFSET UNITYSDK_OFFSET(0x19EA4DE0)
#define CLASS_4_3793F4EB675CED8F__CTOR_OFFSET UNITYSDK_OFFSET(0x19EA4D10)

inline static constexpr unsigned int Class_4_3793F4EB675CED8F_TypeDefinitionIndex = 21658;

class Class_4_3793F4EB675CED8F : public ::RPG::GameCore::Retarget
{
public:
	::RPG::GameCore::DynamicFloat* Field_4_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3793F4EB675CED8F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_0BAE4FCAEFBCC63D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_3793F4EB675CED8F*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_3793F4EB675CED8F*&))((::PBYTE)hIl2Cpp + CLASS_4_3793F4EB675CED8F_METHOD_4_0BAE4FCAEFBCC63D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_C616402C1FF54AE8(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_3793F4EB675CED8F* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_3793F4EB675CED8F*))((::PBYTE)hIl2Cpp + CLASS_4_3793F4EB675CED8F_METHOD_4_C616402C1FF54AE8_OFFSET))(a1, a2);
	}
};
