#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_9;
class Class_1_79098BC9B0AF0D6E;
class Class_3_F6C4C44754A545F8;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CC51E5A69B590607_METHOD_1_1559DF961FFD7476_OFFSET UNITYSDK_OFFSET(0x1C6759F0)
#define CLASS_1_CC51E5A69B590607__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6759E0)

inline static constexpr unsigned int Class_1_CC51E5A69B590607_TypeDefinitionIndex = 29651;

class Class_1_CC51E5A69B590607 : public ::System::Object
{
public:
	::Class_3_F6C4C44754A545F8* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18

	::System::Void _ctor(::System::String* a1, ::Class_3_F6C4C44754A545F8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_3_F6C4C44754A545F8*))((::PBYTE)hIl2Cpp + CLASS_1_CC51E5A69B590607__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_79098BC9B0AF0D6E* Method_1_1559DF961FFD7476(::Class_1_43BD383C98B4C0C5_9* a1, ::System::Collections::Generic::List_1<::Class_1_79098BC9B0AF0D6E*>* a2)
	{
		return ((::Class_1_79098BC9B0AF0D6E*(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_9*, ::System::Collections::Generic::List_1<::Class_1_79098BC9B0AF0D6E*>*))((::PBYTE)hIl2Cpp + CLASS_1_CC51E5A69B590607_METHOD_1_1559DF961FFD7476_OFFSET))(this, a1, a2);
	}
};
