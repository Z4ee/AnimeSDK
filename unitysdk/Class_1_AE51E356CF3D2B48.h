#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0E117AC86D8E5BCA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_AE51E356CF3D2B48__CTOR_OFFSET UNITYSDK_OFFSET(0x189A02F0)

inline static constexpr unsigned int Class_1_AE51E356CF3D2B48_TypeDefinitionIndex = 34515;

class Class_1_AE51E356CF3D2B48 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE51E356CF3D2B48__CTOR_OFFSET))(this);
	}
};
