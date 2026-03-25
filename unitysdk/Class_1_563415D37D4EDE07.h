#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_494BD190B553B399;
namespace System { class String; }

#define CLASS_1_563415D37D4EDE07_METHOD_1_5F642F91C0DEEB77_OFFSET UNITYSDK_OFFSET(0x104B31E0)
#define CLASS_1_563415D37D4EDE07_METHOD_1_B2D2FF9FEDFCC51D_OFFSET UNITYSDK_OFFSET(0x104B2E90)
#define CLASS_1_563415D37D4EDE07_METHOD_1_EC5A0691CFC2967F_OFFSET UNITYSDK_OFFSET(0x104B33E0)
#define CLASS_1_563415D37D4EDE07__CTOR_OFFSET UNITYSDK_OFFSET(0x104B3450)

inline static constexpr unsigned int Class_1_563415D37D4EDE07_TypeDefinitionIndex = 60461;

class Class_1_563415D37D4EDE07 : public ::System::Object
{
public:
	::Il2CppArray<::System::String*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_563415D37D4EDE07__CTOR_OFFSET))(this);
	}

	::Class_1_563415D37D4EDE07* Method_1_B2D2FF9FEDFCC51D(::System::String* a1, ::Class_1_494BD190B553B399* a2, ::Il2CppArray<::System::String*>* a3)
	{
		return ((::Class_1_563415D37D4EDE07*(*)(::PVOID, ::System::String*, ::Class_1_494BD190B553B399*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_563415D37D4EDE07_METHOD_1_B2D2FF9FEDFCC51D_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_563415D37D4EDE07* Method_1_5F642F91C0DEEB77(::System::String* a1)
	{
		return ((::Class_1_563415D37D4EDE07*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_563415D37D4EDE07_METHOD_1_5F642F91C0DEEB77_OFFSET))(this, a1);
	}

	::System::String* Method_1_EC5A0691CFC2967F(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_563415D37D4EDE07_METHOD_1_EC5A0691CFC2967F_OFFSET))(this, a1);
	}
};
