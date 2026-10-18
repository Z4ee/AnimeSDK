#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_ABC67D4EFBF3BD9A_1.h"
#include "unitysdk/Struct_2_DF90B2BD73749811_1.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5E412F716BC60BD1_METHOD_1_5A087A5D69501C87_OFFSET UNITYSDK_OFFSET(0xC21BE90)
#define CLASS_1_5E412F716BC60BD1_METHOD_1_CF780FC3D0CB1833_OFFSET UNITYSDK_OFFSET(0xC21BF90)
#define CLASS_1_5E412F716BC60BD1__CCTOR_OFFSET UNITYSDK_OFFSET(0xC21C140)
#define CLASS_1_5E412F716BC60BD1__CTOR_OFFSET UNITYSDK_OFFSET(0xC21C090)

inline static constexpr unsigned int Class_1_5E412F716BC60BD1_TypeDefinitionIndex = 54436;

class Class_1_5E412F716BC60BD1 : public ::System::Object
{
public:
	static ::Class_1_5E412F716BC60BD1** StaticGet_JNKBIGPJDNK()
	{
		return (::Class_1_5E412F716BC60BD1**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5E412F716BC60BD1_TypeDefinitionIndex)->GetStaticField(0x4F4B0);
	}
	::System::Collections::Generic::List_1<::Struct_2_ABC67D4EFBF3BD9A_1>* FDHBDIEIGKF; // 0x10
	::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>* CMHCFOMDBGM; // 0x18
	::System::Nullable_1<::System::Int32> EAIBNKPIJBK; // 0x20
	::System::Boolean PCDBKOKPOPG; // 0x28
	::System::Boolean ICMOLOJEKDF; // 0x29

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E412F716BC60BD1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5E412F716BC60BD1__CCTOR_OFFSET))();
	}

	::System::Void Method_1_5A087A5D69501C87(::Class_1_5E412F716BC60BD1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5E412F716BC60BD1*))((::PBYTE)hIl2Cpp + CLASS_1_5E412F716BC60BD1_METHOD_1_5A087A5D69501C87_OFFSET))(this, a1);
	}

	::Class_1_5E412F716BC60BD1* Method_1_CF780FC3D0CB1833()
	{
		return ((::Class_1_5E412F716BC60BD1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E412F716BC60BD1_METHOD_1_CF780FC3D0CB1833_OFFSET))(this);
	}
};
