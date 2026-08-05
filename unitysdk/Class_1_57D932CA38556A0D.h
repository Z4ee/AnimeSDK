#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_578C1C713BCD1D2D;
class Class_3_578C1C713BCD1D2D_1;
class Class_3_D053DCDA6D88DABA;
namespace System { class String; }

#define CLASS_1_57D932CA38556A0D_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1EC85A50)
#define CLASS_1_57D932CA38556A0D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EC859E0)
#define CLASS_1_57D932CA38556A0D__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EC858F0)
#define CLASS_1_57D932CA38556A0D__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC85800)

inline static constexpr unsigned int Class_1_57D932CA38556A0D_TypeDefinitionIndex = 29684;

class Class_1_57D932CA38556A0D : public ::System::Object
{
public:
	::Class_3_578C1C713BCD1D2D_1* Field_1_2; // 0x10
	::Class_3_D053DCDA6D88DABA* Field_1_0; // 0x18
	::Class_3_578C1C713BCD1D2D* Field_1_1; // 0x20

	::System::Void _ctor(::System::String* a1, ::Class_3_578C1C713BCD1D2D_1* a2, ::Class_3_578C1C713BCD1D2D* a3, ::Class_3_D053DCDA6D88DABA* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_3_578C1C713BCD1D2D_1*, ::Class_3_578C1C713BCD1D2D*, ::Class_3_D053DCDA6D88DABA*))((::PBYTE)hIl2Cpp + CLASS_1_57D932CA38556A0D__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _ctor_1(::Class_3_578C1C713BCD1D2D_1* a1, ::Class_3_578C1C713BCD1D2D* a2, ::Class_3_D053DCDA6D88DABA* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_578C1C713BCD1D2D_1*, ::Class_3_578C1C713BCD1D2D*, ::Class_3_D053DCDA6D88DABA*))((::PBYTE)hIl2Cpp + CLASS_1_57D932CA38556A0D__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_57D932CA38556A0D_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_57D932CA38556A0D_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
