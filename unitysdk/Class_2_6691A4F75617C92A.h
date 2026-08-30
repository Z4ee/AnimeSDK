#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6F2598F82A312737.h"

class Class_2_718A51E22CB71EC4;
class Class_2_FE27D0FC265DDD96;

#define CLASS_2_6691A4F75617C92A_EXECUTE_OFFSET UNITYSDK_OFFSET(0xC0D92C0)
#define CLASS_2_6691A4F75617C92A_METHOD_2_FFD49DF2888465D3_OFFSET UNITYSDK_OFFSET(0xC0D9200)
#define CLASS_2_6691A4F75617C92A__CTOR_OFFSET UNITYSDK_OFFSET(0xC0D94E0)

inline static constexpr unsigned int Class_2_6691A4F75617C92A_TypeDefinitionIndex = 54523;

class Class_2_6691A4F75617C92A : public ::Class_1_6F2598F82A312737
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6691A4F75617C92A__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_FFD49DF2888465D3(::Class_2_718A51E22CB71EC4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_718A51E22CB71EC4*))((::PBYTE)hIl2Cpp + CLASS_2_6691A4F75617C92A_METHOD_2_FFD49DF2888465D3_OFFSET))(this, a1);
	}

	::System::Void Execute(::Class_2_FE27D0FC265DDD96* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FE27D0FC265DDD96*))((::PBYTE)hIl2Cpp + CLASS_2_6691A4F75617C92A_EXECUTE_OFFSET))(this, a1);
	}
};
