#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_81;
class Class_1_1FEC7CFD978B42F9;
class Class_1_7179D0DED6D3E44A;
class Class_1_AD0B53B56535FBAD;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_80D386C0A3DD13F5_METHOD_1_1C7F2067B6B8305E_OFFSET UNITYSDK_OFFSET(0x16542EC0)
#define CLASS_1_80D386C0A3DD13F5_METHOD_1_581BC49D4AB403ED_OFFSET UNITYSDK_OFFSET(0x16543110)
#define CLASS_1_80D386C0A3DD13F5_METHOD_1_EE481A926642501F_OFFSET UNITYSDK_OFFSET(0x16542F10)

inline static constexpr unsigned int Class_1_80D386C0A3DD13F5_TypeDefinitionIndex = 32096;

class Class_1_80D386C0A3DD13F5 : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_81* Method_1_1C7F2067B6B8305E(::System::String* a1, ::System::String* a2)
	{
		return ((::Class_0_16E4307DCC419505_81*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_80D386C0A3DD13F5_METHOD_1_1C7F2067B6B8305E_OFFSET))(a1, a2);
	}

	static ::Class_1_1FEC7CFD978B42F9* Method_1_EE481A926642501F(::System::String* a1, ::System::String* a2)
	{
		return ((::Class_1_1FEC7CFD978B42F9*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_80D386C0A3DD13F5_METHOD_1_EE481A926642501F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_581BC49D4AB403ED(::System::String* a1, ::System::Collections::Generic::IEnumerable_1<::Class_1_7179D0DED6D3E44A*>* a2, ::System::Collections::Generic::IEnumerable_1<::Class_1_AD0B53B56535FBAD*>* a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::IEnumerable_1<::Class_1_7179D0DED6D3E44A*>*, ::System::Collections::Generic::IEnumerable_1<::Class_1_AD0B53B56535FBAD*>*))((::PBYTE)hIl2Cpp + CLASS_1_80D386C0A3DD13F5_METHOD_1_581BC49D4AB403ED_OFFSET))(a1, a2, a3);
	}
};
