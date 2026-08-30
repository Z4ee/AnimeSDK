#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1664600992643C31_Struct_2_BBD456EBC9087BC2.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System { class Type; }
namespace System::Collections { class IList; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1664600992643C31_METHOD_1_2F39CCEA14879DDB_OFFSET UNITYSDK_OFFSET(0x1C8A0E80)
#define CLASS_1_1664600992643C31_METHOD_1_90718503D3639A3E_OFFSET UNITYSDK_OFFSET(0x1C8A1150)
#define CLASS_1_1664600992643C31__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8A1220)

inline static constexpr unsigned int Class_1_1664600992643C31_TypeDefinitionIndex = 34583;

class Class_1_1664600992643C31 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_1664600992643C31_Struct_2_BBD456EBC9087BC2>** StaticGet_HILOJJAEGGF()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_1664600992643C31_Struct_2_BBD456EBC9087BC2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1664600992643C31_TypeDefinitionIndex)->GetStaticField(0x5E270);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1664600992643C31__CCTOR_OFFSET))();
	}

	static ::Class_1_1664600992643C31_Struct_2_BBD456EBC9087BC2 Method_1_2F39CCEA14879DDB(::System::Type* a1)
	{
		return ((::Class_1_1664600992643C31_Struct_2_BBD456EBC9087BC2(*)(::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_1664600992643C31_METHOD_1_2F39CCEA14879DDB_OFFSET))(a1);
	}

	static ::System::Array* Method_1_90718503D3639A3E(::System::Collections::IList* a1)
	{
		return ((::System::Array*(*)(::System::Collections::IList*))((::PBYTE)hIl2Cpp + CLASS_1_1664600992643C31_METHOD_1_90718503D3639A3E_OFFSET))(a1);
	}
};
