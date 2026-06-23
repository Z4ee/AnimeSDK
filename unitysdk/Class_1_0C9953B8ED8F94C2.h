#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3C783B10034614E4.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_0C9953B8ED8F94C2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1269CD60)

inline static constexpr unsigned int Class_1_0C9953B8ED8F94C2_TypeDefinitionIndex = 46244;

class Class_1_0C9953B8ED8F94C2 : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::Enum_3_3C783B10034614E4>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::HashSet_1<::Enum_3_3C783B10034614E4>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0C9953B8ED8F94C2_TypeDefinitionIndex)->GetStaticField(0x422A0);
	}
	static ::System::Collections::Generic::HashSet_1<::Enum_3_3C783B10034614E4>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::HashSet_1<::Enum_3_3C783B10034614E4>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0C9953B8ED8F94C2_TypeDefinitionIndex)->GetStaticField(0x422A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0C9953B8ED8F94C2__CCTOR_OFFSET))();
	}
};
