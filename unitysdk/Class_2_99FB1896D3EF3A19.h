#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_13AECAB1AEC5B524.h"

class Class_2_B62C942A2774BBB8;
class Class_3_0A131E788B21A901;
class Class_3_1699D6295DC3F818_4;
class Class_3_A9E2939AF1A43E78;
class Class_3_BBC8043D4DD55A71;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_99FB1896D3EF3A19_METHOD_2_143284F0F316140B_OFFSET UNITYSDK_OFFSET(0x12C5A080)
#define CLASS_2_99FB1896D3EF3A19_METHOD_2_3D3C59526D064E7E_OFFSET UNITYSDK_OFFSET(0x12C5A430)
#define CLASS_2_99FB1896D3EF3A19_METHOD_2_6597D4884E1FE329_OFFSET UNITYSDK_OFFSET(0x12C59E70)
#define CLASS_2_99FB1896D3EF3A19_METHOD_2_B42FEF26496987E3_OFFSET UNITYSDK_OFFSET(0x12C59C60)
#define CLASS_2_99FB1896D3EF3A19_METHOD_2_DB356265CC9FB458_OFFSET UNITYSDK_OFFSET(0x12C5A220)
#define CLASS_2_99FB1896D3EF3A19__CTOR_OFFSET UNITYSDK_OFFSET(0x12C59FA0)

inline static constexpr unsigned int Class_2_99FB1896D3EF3A19_TypeDefinitionIndex = 71903;

class Class_2_99FB1896D3EF3A19 : public ::Class_1_13AECAB1AEC5B524
{
public:
	::Class_3_A9E2939AF1A43E78* Field_2_1; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99FB1896D3EF3A19__CTOR_OFFSET))(this);
	}

	::System::Object* Method_2_B42FEF26496987E3(::System::String* a1, ::System::Int32 a2, ::Class_2_B62C942A2774BBB8* a3)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Int32, ::Class_2_B62C942A2774BBB8*))((::PBYTE)hIl2Cpp + CLASS_2_99FB1896D3EF3A19_METHOD_2_B42FEF26496987E3_OFFSET))(this, a1, a2, a3);
	}

	::Class_3_BBC8043D4DD55A71* Method_2_143284F0F316140B(::System::String* a1)
	{
		return ((::Class_3_BBC8043D4DD55A71*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_99FB1896D3EF3A19_METHOD_2_143284F0F316140B_OFFSET))(this, a1);
	}

	::Class_3_0A131E788B21A901* Method_2_DB356265CC9FB458(::System::String* a1, ::System::Int32 a2, ::Class_2_B62C942A2774BBB8* a3)
	{
		return ((::Class_3_0A131E788B21A901*(*)(::PVOID, ::System::String*, ::System::Int32, ::Class_2_B62C942A2774BBB8*))((::PBYTE)hIl2Cpp + CLASS_2_99FB1896D3EF3A19_METHOD_2_DB356265CC9FB458_OFFSET))(this, a1, a2, a3);
	}

	::Class_3_1699D6295DC3F818_4* Method_2_3D3C59526D064E7E(::System::Int32 a1)
	{
		return ((::Class_3_1699D6295DC3F818_4*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_99FB1896D3EF3A19_METHOD_2_3D3C59526D064E7E_OFFSET))(this, a1);
	}

	::Class_3_0A131E788B21A901* Method_2_6597D4884E1FE329(::System::Int32 a1)
	{
		return ((::Class_3_0A131E788B21A901*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_99FB1896D3EF3A19_METHOD_2_6597D4884E1FE329_OFFSET))(this, a1);
	}
};
