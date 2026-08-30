#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/WaitSecond.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_4_7F70A25D44C3307D_METHOD_4_61ACBD6DF6FE15E4_OFFSET UNITYSDK_OFFSET(0x1C849C50)
#define CLASS_4_7F70A25D44C3307D_METHOD_4_FE72CD80F88EC4C9_OFFSET UNITYSDK_OFFSET(0x1C849D50)
#define CLASS_4_7F70A25D44C3307D__CTOR_OFFSET UNITYSDK_OFFSET(0x1C849CE0)

inline static constexpr unsigned int Class_4_7F70A25D44C3307D_TypeDefinitionIndex = 21244;

class Class_4_7F70A25D44C3307D : public ::RPG::GameCore::WaitSecond
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7F70A25D44C3307D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_61ACBD6DF6FE15E4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_7F70A25D44C3307D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_7F70A25D44C3307D*&))((::PBYTE)hIl2Cpp + CLASS_4_7F70A25D44C3307D_METHOD_4_61ACBD6DF6FE15E4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_FE72CD80F88EC4C9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_7F70A25D44C3307D* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_7F70A25D44C3307D*))((::PBYTE)hIl2Cpp + CLASS_4_7F70A25D44C3307D_METHOD_4_FE72CD80F88EC4C9_OFFSET))(a1, a2);
	}
};
