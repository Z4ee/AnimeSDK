#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_33D16697470DD4E7.h"
#include "unitysdk/System/Object.h"

namespace System { class Random; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5F5D92B486077EA8_METHOD_1_8FC5C096B5A46ED1_OFFSET UNITYSDK_OFFSET(0x1539E170)
#define CLASS_1_5F5D92B486077EA8__CTOR_OFFSET UNITYSDK_OFFSET(0x1539E0B0)

inline static constexpr unsigned int Class_1_5F5D92B486077EA8_TypeDefinitionIndex = 41879;

class Class_1_5F5D92B486077EA8 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Struct_2_33D16697470DD4E7>* Field_1_0; // 0x10
	::System::Random* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F5D92B486077EA8__CTOR_OFFSET))(this);
	}

	::Struct_2_33D16697470DD4E7 Method_1_8FC5C096B5A46ED1()
	{
		return ((::Struct_2_33D16697470DD4E7(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F5D92B486077EA8_METHOD_1_8FC5C096B5A46ED1_OFFSET))(this);
	}
};
