#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_AB9CCA0B2E05A401.h"
#include "unitysdk/System/Object.h"

class Class_1_2181504E881DDEE4;
class Class_2_1A3197598F874EB7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_1A3197598F874EB7_CLASS_1_A6267FBCAFE881A7_METHOD_1_12B0AFD9D73E7965_OFFSET UNITYSDK_OFFSET(0x11C6FDF0)
#define CLASS_2_1A3197598F874EB7_CLASS_1_A6267FBCAFE881A7_METHOD_1_6E139218E337086F_OFFSET UNITYSDK_OFFSET(0x11C6FF40)
#define CLASS_2_1A3197598F874EB7_CLASS_1_A6267FBCAFE881A7__CTOR_OFFSET UNITYSDK_OFFSET(0x11C6FDE0)

inline static constexpr unsigned int Class_2_1A3197598F874EB7_Class_1_A6267FBCAFE881A7_TypeDefinitionIndex = 75744;

class Class_2_1A3197598F874EB7_Class_1_A6267FBCAFE881A7 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_0; // 0x10
	::Class_2_1A3197598F874EB7* Field_1_2; // 0x18
	::System::Boolean Field_1_7; // 0x20
	::Enum_3_AB9CCA0B2E05A401 Field_1_1; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A3197598F874EB7_CLASS_1_A6267FBCAFE881A7__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_12B0AFD9D73E7965(::Class_1_2181504E881DDEE4* a1, ::Class_1_2181504E881DDEE4* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_2181504E881DDEE4*, ::Class_1_2181504E881DDEE4*))((::PBYTE)hIl2Cpp + CLASS_2_1A3197598F874EB7_CLASS_1_A6267FBCAFE881A7_METHOD_1_12B0AFD9D73E7965_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_6E139218E337086F(::Class_1_2181504E881DDEE4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2181504E881DDEE4*))((::PBYTE)hIl2Cpp + CLASS_2_1A3197598F874EB7_CLASS_1_A6267FBCAFE881A7_METHOD_1_6E139218E337086F_OFFSET))(this, a1);
	}
};
