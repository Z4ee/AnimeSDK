#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_070A00258D76D4EF.h"
#include "unitysdk/Struct_2_2150278D7330DC8D.h"
#include "unitysdk/Struct_2_61420C2CA4EE5107.h"
#include "unitysdk/System/Object.h"

class Class_1_303D5A33D1401D59;
class Class_1_E5DE610D10F73677_Class_1_16219D7C5BD9EB0A;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E5DE610D10F73677_METHOD_1_0B846187BAC268C4_OFFSET UNITYSDK_OFFSET(0xBF68EB0)
#define CLASS_1_E5DE610D10F73677_METHOD_1_1FFD915B86FF931D_OFFSET UNITYSDK_OFFSET(0xBF69390)
#define CLASS_1_E5DE610D10F73677_METHOD_1_58B6881687CAC6BD_OFFSET UNITYSDK_OFFSET(0xBF68B40)
#define CLASS_1_E5DE610D10F73677_METHOD_1_65FE5FFECBA7EA77_OFFSET UNITYSDK_OFFSET(0xBF69070)
#define CLASS_1_E5DE610D10F73677_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xBF69500)
#define CLASS_1_E5DE610D10F73677_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0xBF68A50)
#define CLASS_1_E5DE610D10F73677__CTOR_OFFSET UNITYSDK_OFFSET(0xBF69590)

inline static constexpr unsigned int Class_1_E5DE610D10F73677_TypeDefinitionIndex = 62244;

class Class_1_E5DE610D10F73677 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>* EEJKHGBOAGA; // 0x10
	::System::Collections::Generic::Dictionary_2<::Class_1_303D5A33D1401D59*, ::Class_1_E5DE610D10F73677_Class_1_16219D7C5BD9EB0A*>* AHNJBFFFHNA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5DE610D10F73677__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5DE610D10F73677_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_1_58B6881687CAC6BD(::Class_1_303D5A33D1401D59* a1, ::Struct_2_61420C2CA4EE5107 a2, ::Struct_2_2150278D7330DC8D a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*, ::Struct_2_61420C2CA4EE5107, ::Struct_2_2150278D7330DC8D))((::PBYTE)hIl2Cpp + CLASS_1_E5DE610D10F73677_METHOD_1_58B6881687CAC6BD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_0B846187BAC268C4(::Class_1_303D5A33D1401D59* a1, ::Struct_2_61420C2CA4EE5107 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*, ::Struct_2_61420C2CA4EE5107))((::PBYTE)hIl2Cpp + CLASS_1_E5DE610D10F73677_METHOD_1_0B846187BAC268C4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_65FE5FFECBA7EA77(::Class_1_303D5A33D1401D59* a1, ::System::Collections::Generic::List_1<::Struct_2_070A00258D76D4EF>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*, ::System::Collections::Generic::List_1<::Struct_2_070A00258D76D4EF>*))((::PBYTE)hIl2Cpp + CLASS_1_E5DE610D10F73677_METHOD_1_65FE5FFECBA7EA77_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1FFD915B86FF931D(::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>*))((::PBYTE)hIl2Cpp + CLASS_1_E5DE610D10F73677_METHOD_1_1FFD915B86FF931D_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5DE610D10F73677_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}
};
