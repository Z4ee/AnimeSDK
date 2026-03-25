#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_A3090EEC3099E865_METHOD_1_7A772A33A90355AA_OFFSET UNITYSDK_OFFSET(0x16DB5B50)
#define CLASS_1_A3090EEC3099E865__CTOR_OFFSET UNITYSDK_OFFSET(0x16DB5CC0)

inline static constexpr unsigned int Class_1_A3090EEC3099E865_TypeDefinitionIndex = 14042;

class Class_1_A3090EEC3099E865 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::UInt32 Field_1_0; // 0x18
	::System::UInt32 Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3090EEC3099E865__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_7A772A33A90355AA(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_A3090EEC3099E865*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_A3090EEC3099E865*&))((::PBYTE)hIl2Cpp + CLASS_1_A3090EEC3099E865_METHOD_1_7A772A33A90355AA_OFFSET))(a1, a2);
	}
};
