#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3B58EE91C0F989DF;
class Class_1_9522924E57396213;
class Class_4_67B80F738A0EBBC9_1;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_5007D83048F5E618_CLASS_1_388523E56A38D3DD_METHOD_1_18FE54F6BE268E4D_OFFSET UNITYSDK_OFFSET(0x1BD2C8F0)
#define CLASS_1_5007D83048F5E618_CLASS_1_388523E56A38D3DD__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD2C8E0)

inline static constexpr unsigned int Class_1_5007D83048F5E618_Class_1_388523E56A38D3DD_TypeDefinitionIndex = 88286;

class Class_1_5007D83048F5E618_Class_1_388523E56A38D3DD : public ::System::Object
{
public:
	::Class_4_67B80F738A0EBBC9_1* Field_1_1; // 0x10
	::Class_1_9522924E57396213* Field_1_0; // 0x18
	::System::Comparison_1<::Class_1_3B58EE91C0F989DF*>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5007D83048F5E618_CLASS_1_388523E56A38D3DD__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_18FE54F6BE268E4D(::Class_1_3B58EE91C0F989DF* a1, ::Class_1_3B58EE91C0F989DF* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_3B58EE91C0F989DF*, ::Class_1_3B58EE91C0F989DF*))((::PBYTE)hIl2Cpp + CLASS_1_5007D83048F5E618_CLASS_1_388523E56A38D3DD_METHOD_1_18FE54F6BE268E4D_OFFSET))(this, a1, a2);
	}
};
