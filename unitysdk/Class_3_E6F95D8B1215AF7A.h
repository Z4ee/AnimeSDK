#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_8D452416EAB7B077.h"

namespace System { class String; }

#define CLASS_3_E6F95D8B1215AF7A_METHOD_3_BBD5C5C8DDB121B4_OFFSET UNITYSDK_OFFSET(0x172BBA10)
#define CLASS_3_E6F95D8B1215AF7A__CTOR_OFFSET UNITYSDK_OFFSET(0x172BBAB0)

inline static constexpr unsigned int Class_3_E6F95D8B1215AF7A_TypeDefinitionIndex = 72285;

class Class_3_E6F95D8B1215AF7A : public ::Class_2_8D452416EAB7B077
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E6F95D8B1215AF7A__CTOR_OFFSET))(this);
	}

	static ::System::String* Method_3_BBD5C5C8DDB121B4(::System::UInt32 a1)
	{
		return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_E6F95D8B1215AF7A_METHOD_3_BBD5C5C8DDB121B4_OFFSET))(a1);
	}
};
