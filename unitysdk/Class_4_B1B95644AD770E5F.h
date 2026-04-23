#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Retarget.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_4_B1B95644AD770E5F_METHOD_4_491DC5019255BE43_OFFSET UNITYSDK_OFFSET(0x183A3530)
#define CLASS_4_B1B95644AD770E5F_METHOD_4_61ACBD6DF6FE15E4_OFFSET UNITYSDK_OFFSET(0x183A3360)
#define CLASS_4_B1B95644AD770E5F__CTOR_OFFSET UNITYSDK_OFFSET(0x183A3460)

inline static constexpr unsigned int Class_4_B1B95644AD770E5F_TypeDefinitionIndex = 21821;

class Class_4_B1B95644AD770E5F : public ::RPG::GameCore::Retarget
{
public:
	::RPG::GameCore::DynamicFloat* Field_4_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B1B95644AD770E5F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_61ACBD6DF6FE15E4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_B1B95644AD770E5F*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_B1B95644AD770E5F*&))((::PBYTE)hIl2Cpp + CLASS_4_B1B95644AD770E5F_METHOD_4_61ACBD6DF6FE15E4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_491DC5019255BE43(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_B1B95644AD770E5F* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_B1B95644AD770E5F*))((::PBYTE)hIl2Cpp + CLASS_4_B1B95644AD770E5F_METHOD_4_491DC5019255BE43_OFFSET))(a1, a2);
	}
};
