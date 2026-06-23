#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D65512A83CF70AB7__CTOR_OFFSET UNITYSDK_OFFSET(0x1800FCE0)

inline static constexpr unsigned int Class_1_D65512A83CF70AB7_TypeDefinitionIndex = 82494;

class Class_1_D65512A83CF70AB7 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D65512A83CF70AB7__CTOR_OFFSET))(this);
	}
};
