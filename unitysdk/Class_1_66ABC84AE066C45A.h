#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_032E3093F309FC91.h"
#include "unitysdk/System/Object.h"

class Class_2_5C38134D4169B6E0;
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_1_66ABC84AE066C45A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14E33B50)
#define CLASS_1_66ABC84AE066C45A_METHOD_1_1A35B0C4602C0627_OFFSET UNITYSDK_OFFSET(0x14E33E50)
#define CLASS_1_66ABC84AE066C45A__CTOR_OFFSET UNITYSDK_OFFSET(0x14E339C0)

inline static constexpr unsigned int Class_1_66ABC84AE066C45A_TypeDefinitionIndex = 64492;

class Class_1_66ABC84AE066C45A : public ::System::Object
{
public:
	::Class_2_5C38134D4169B6E0* Field_1_3; // 0x10
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_1_2; // 0x18
	::Class_2_000597E145D7A42A<::System::Int32>* Field_1_0; // 0x20
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_1_1; // 0x28

	::System::Void _ctor(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_66ABC84AE066C45A__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66ABC84AE066C45A_DISPOSE_OFFSET))(this);
	}

	::Struct_2_032E3093F309FC91 Method_1_1A35B0C4602C0627()
	{
		return ((::Struct_2_032E3093F309FC91(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66ABC84AE066C45A_METHOD_1_1A35B0C4602C0627_OFFSET))(this);
	}
};
