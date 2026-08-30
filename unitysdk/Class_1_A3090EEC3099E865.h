#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_A3090EEC3099E865_METHOD_1_7A772A33A90355AA_OFFSET UNITYSDK_OFFSET(0x1DDE8AB0)
#define CLASS_1_A3090EEC3099E865__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDE8C20)

inline static constexpr unsigned int Class_1_A3090EEC3099E865_TypeDefinitionIndex = 15141;

class Class_1_A3090EEC3099E865 : public ::System::Object
{
public:
	::System::String* BHGKDNAPGOC; // 0x10
	::System::UInt32 ALNDEGPBMLI; // 0x18
	::System::UInt32 NMMKHFIFPEJ; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3090EEC3099E865__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_7A772A33A90355AA(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_A3090EEC3099E865*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_A3090EEC3099E865*&))((::PBYTE)hIl2Cpp + CLASS_1_A3090EEC3099E865_METHOD_1_7A772A33A90355AA_OFFSET))(a1, a2);
	}
};
