#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1EA8435E138F2E03;
class Class_2_208CC9941471731A_6;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3ECB4BE169D1AA39__CTOR_OFFSET UNITYSDK_OFFSET(0x1659B9E0)

inline static constexpr unsigned int Class_1_3ECB4BE169D1AA39_TypeDefinitionIndex = 63765;

class Class_1_3ECB4BE169D1AA39 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Class_1_1EA8435E138F2E03* Field_1_7; // 0x18
	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_6*>* Field_1_6; // 0x20
	::System::Int32 Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3ECB4BE169D1AA39__CTOR_OFFSET))(this);
	}
};
