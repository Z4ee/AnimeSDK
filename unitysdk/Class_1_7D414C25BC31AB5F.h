#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_99;
class Class_2_F7CAAD54879BD084;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_7D414C25BC31AB5F__CTOR_OFFSET UNITYSDK_OFFSET(0x134ED930)

inline static constexpr unsigned int Class_1_7D414C25BC31AB5F_TypeDefinitionIndex = 63982;

class Class_1_7D414C25BC31AB5F : public ::System::Object
{
public:
	::Class_2_208CC9941471731A_99* Field_1_2; // 0x10
	::Class_2_F7CAAD54879BD084* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D414C25BC31AB5F__CTOR_OFFSET))(this);
	}
};
