#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_69C4121CDD013F6B_Struct_2_BBD456EBC9087BC2.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System { class Type; }
namespace System::Collections { class IList; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_69C4121CDD013F6B_METHOD_1_742EB5E1A15799D8_OFFSET UNITYSDK_OFFSET(0x1EC37AD0)
#define CLASS_1_69C4121CDD013F6B_METHOD_1_AE2DA9982EC8726D_OFFSET UNITYSDK_OFFSET(0x1EC37DD0)
#define CLASS_1_69C4121CDD013F6B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC37ED0)

inline static constexpr unsigned int Class_1_69C4121CDD013F6B_TypeDefinitionIndex = 35247;

class Class_1_69C4121CDD013F6B : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_69C4121CDD013F6B_Struct_2_BBD456EBC9087BC2>** StaticGet_HILOJJAEGGF()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_69C4121CDD013F6B_Struct_2_BBD456EBC9087BC2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_69C4121CDD013F6B_TypeDefinitionIndex)->GetStaticField(0x50070);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_69C4121CDD013F6B__CCTOR_OFFSET))();
	}

	static ::Class_1_69C4121CDD013F6B_Struct_2_BBD456EBC9087BC2 Method_1_742EB5E1A15799D8(::System::Type* a1)
	{
		return ((::Class_1_69C4121CDD013F6B_Struct_2_BBD456EBC9087BC2(*)(::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_69C4121CDD013F6B_METHOD_1_742EB5E1A15799D8_OFFSET))(a1);
	}

	static ::System::Array* Method_1_AE2DA9982EC8726D(::System::Collections::IList* a1)
	{
		return ((::System::Array*(*)(::System::Collections::IList*))((::PBYTE)hIl2Cpp + CLASS_1_69C4121CDD013F6B_METHOD_1_AE2DA9982EC8726D_OFFSET))(a1);
	}
};
