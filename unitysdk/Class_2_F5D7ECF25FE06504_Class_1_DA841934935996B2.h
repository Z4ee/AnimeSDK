#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_F5D7ECF25FE06504_CLASS_1_DA841934935996B2__CTOR_OFFSET UNITYSDK_OFFSET(0x1397D920)

inline static constexpr unsigned int Class_2_F5D7ECF25FE06504_Class_1_DA841934935996B2_TypeDefinitionIndex = 68412;

class Class_2_F5D7ECF25FE06504_Class_1_DA841934935996B2 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5D7ECF25FE06504_CLASS_1_DA841934935996B2__CTOR_OFFSET))(this);
	}
};
