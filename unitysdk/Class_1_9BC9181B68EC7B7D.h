#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DBF2701137F18AA6.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9BC9181B68EC7B7D__CCTOR_OFFSET UNITYSDK_OFFSET(0xE989FC0)
#define CLASS_1_9BC9181B68EC7B7D__CTOR_OFFSET UNITYSDK_OFFSET(0xE989FB0)

inline static constexpr unsigned int Class_1_9BC9181B68EC7B7D_TypeDefinitionIndex = 41788;

class Class_1_9BC9181B68EC7B7D : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Enum_3_DBF2701137F18AA6>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::Enum_3_DBF2701137F18AA6>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9BC9181B68EC7B7D_TypeDefinitionIndex)->GetStaticField(0x327B0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BC9181B68EC7B7D__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9BC9181B68EC7B7D__CCTOR_OFFSET))();
	}
};
