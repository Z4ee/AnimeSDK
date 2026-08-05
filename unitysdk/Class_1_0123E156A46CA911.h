#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0123E156A46CA911_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x1671B340)
#define CLASS_1_0123E156A46CA911_METHOD_1_AD826B25465D0838_OFFSET UNITYSDK_OFFSET(0x1671B480)
#define CLASS_1_0123E156A46CA911__CTOR_OFFSET UNITYSDK_OFFSET(0x1671B330)

inline static constexpr unsigned int Class_1_0123E156A46CA911_TypeDefinitionIndex = 40299;

class Class_1_0123E156A46CA911 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_6; // 0x10
	::System::Collections::Generic::List_1<::System::Single>* Field_1_0; // 0x18
	::System::Int32 Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0123E156A46CA911__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0123E156A46CA911_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_1_AD826B25465D0838(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0123E156A46CA911_METHOD_1_AD826B25465D0838_OFFSET))(this, a1);
	}
};
