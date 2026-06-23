#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_688FBF6C0FC439E7_Enum_3_EF7E278E13556C25.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A54F1A54D77C1498_METHOD_1_39307AC329B05F34_OFFSET UNITYSDK_OFFSET(0x10673DB0)
#define CLASS_1_A54F1A54D77C1498__CCTOR_OFFSET UNITYSDK_OFFSET(0x10673D10)

inline static constexpr unsigned int Class_1_A54F1A54D77C1498_TypeDefinitionIndex = 79611;

class Class_1_A54F1A54D77C1498 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Class_1_688FBF6C0FC439E7_Enum_3_EF7E278E13556C25, ::System::String*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::Class_1_688FBF6C0FC439E7_Enum_3_EF7E278E13556C25, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A54F1A54D77C1498_TypeDefinitionIndex)->GetStaticField(0x39880);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A54F1A54D77C1498__CCTOR_OFFSET))();
	}

	static ::System::String* Method_1_39307AC329B05F34(::Class_1_688FBF6C0FC439E7_Enum_3_EF7E278E13556C25 a1)
	{
		return ((::System::String*(*)(::Class_1_688FBF6C0FC439E7_Enum_3_EF7E278E13556C25))((::PBYTE)hIl2Cpp + CLASS_1_A54F1A54D77C1498_METHOD_1_39307AC329B05F34_OFFSET))(a1);
	}
};
