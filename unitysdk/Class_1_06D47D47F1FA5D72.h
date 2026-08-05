#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6C92075B4B29418E.h"
#include "unitysdk/System/Object.h"

class Class_1_9B3CF24BC5578B7B;
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_06D47D47F1FA5D72__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC80C00)

inline static constexpr unsigned int Class_1_06D47D47F1FA5D72_TypeDefinitionIndex = 29223;

class Class_1_06D47D47F1FA5D72 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_6C92075B4B29418E, ::System::Func_1<::Class_1_9B3CF24BC5578B7B*>*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_6C92075B4B29418E, ::System::Func_1<::Class_1_9B3CF24BC5578B7B*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_06D47D47F1FA5D72_TypeDefinitionIndex)->GetStaticField(0x24B80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_06D47D47F1FA5D72__CCTOR_OFFSET))();
	}
};
