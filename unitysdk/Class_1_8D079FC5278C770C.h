#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_AC76A180D6FDF6F0.h"
#include "unitysdk/Enum_3_D58007B05253E4CC.h"
#include "unitysdk/Struct_2_0B033464442583DD.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_8D079FC5278C770C_METHOD_1_18030521B263E70E_OFFSET UNITYSDK_OFFSET(0xDB6D8B0)
#define CLASS_1_8D079FC5278C770C_METHOD_1_535D46F35EF7552F_OFFSET UNITYSDK_OFFSET(0xDB6D720)
#define CLASS_1_8D079FC5278C770C_METHOD_1_620A86672E9FEBA2_OFFSET UNITYSDK_OFFSET(0xDB6D810)

inline static constexpr unsigned int Class_1_8D079FC5278C770C_TypeDefinitionIndex = 48785;

class Class_1_8D079FC5278C770C : public ::System::Object
{
public:
	static ::Struct_2_0B033464442583DD Method_1_535D46F35EF7552F(::Enum_3_D58007B05253E4CC a1)
	{
		return ((::Struct_2_0B033464442583DD(*)(::Enum_3_D58007B05253E4CC))((::PBYTE)hIl2Cpp + CLASS_1_8D079FC5278C770C_METHOD_1_535D46F35EF7552F_OFFSET))(a1);
	}

	static ::System::Collections::Generic::IEnumerable_1<::Struct_2_0B033464442583DD>* Method_1_620A86672E9FEBA2()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Struct_2_0B033464442583DD>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D079FC5278C770C_METHOD_1_620A86672E9FEBA2_OFFSET))();
	}

	static ::System::Int32 Method_1_18030521B263E70E(::Enum_3_AC76A180D6FDF6F0 a1)
	{
		return ((::System::Int32(*)(::Enum_3_AC76A180D6FDF6F0))((::PBYTE)hIl2Cpp + CLASS_1_8D079FC5278C770C_METHOD_1_18030521B263E70E_OFFSET))(a1);
	}
};
