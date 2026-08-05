#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F7258B3266138D0E.h"
#include "unitysdk/Struct_2_EB8B7F5FFB953B6C.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int Class_2_4B3E004A217894D5_TypeDefinitionIndex = 57045;

template <typename T>
class Class_2_4B3E004A217894D5 : public ::Class_1_F7258B3266138D0E
{
public:
	static T* StaticGet_Field_2_1()
	{
		return (T*)Il2CppClass::FromTypeDefinitionIndex(Class_2_4B3E004A217894D5_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Collections::Generic::List_1<::Class_1_F7258B3266138D0E*>* Field_2_0; // 0x0
};
