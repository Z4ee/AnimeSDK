#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_59E1B4DADF2323B0_CLASS_1_CBCA3D9CC4AC3B2C_METHOD_1_7F6A4E51FB65CD5C_OFFSET UNITYSDK_OFFSET(0x10C7D880)
#define CLASS_1_59E1B4DADF2323B0_CLASS_1_CBCA3D9CC4AC3B2C__CTOR_OFFSET UNITYSDK_OFFSET(0x10C7D870)

inline static constexpr unsigned int Class_1_59E1B4DADF2323B0_Class_1_CBCA3D9CC4AC3B2C_TypeDefinitionIndex = 61178;

class Class_1_59E1B4DADF2323B0_Class_1_CBCA3D9CC4AC3B2C : public ::System::Object
{
public:
	::System::Collections::Generic::IEnumerable_1<::System::String*>* Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59E1B4DADF2323B0_CLASS_1_CBCA3D9CC4AC3B2C__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Method_1_7F6A4E51FB65CD5C()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59E1B4DADF2323B0_CLASS_1_CBCA3D9CC4AC3B2C_METHOD_1_7F6A4E51FB65CD5C_OFFSET))(this);
	}
};
