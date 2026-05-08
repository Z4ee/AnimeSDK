#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_346A299033A30404_CLASS_1_14E953B143E67DEF_METHOD_1_7F41121F38389785_OFFSET UNITYSDK_OFFSET(0xFEB6510)
#define CLASS_1_346A299033A30404_CLASS_1_14E953B143E67DEF__CTOR_OFFSET UNITYSDK_OFFSET(0xFEB6500)

inline static constexpr unsigned int Class_1_346A299033A30404_Class_1_14E953B143E67DEF_TypeDefinitionIndex = 50042;

class Class_1_346A299033A30404_Class_1_14E953B143E67DEF : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_346A299033A30404_CLASS_1_14E953B143E67DEF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7F41121F38389785(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_346A299033A30404_CLASS_1_14E953B143E67DEF_METHOD_1_7F41121F38389785_OFFSET))(this, a1);
	}
};
