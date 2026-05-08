#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_4;
class Class_1_9545B07472DE9BFD_Class_3_58CFE2A124E91724;
class Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C;
class Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C_1;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_654511307D0E3508_METHOD_1_4F6DE320374E6E37_OFFSET UNITYSDK_OFFSET(0x14D075E0)
#define CLASS_1_654511307D0E3508_METHOD_1_7816D9708B580AF6_OFFSET UNITYSDK_OFFSET(0x14D07580)
#define CLASS_1_654511307D0E3508__CCTOR_OFFSET UNITYSDK_OFFSET(0x14D07660)
#define CLASS_1_654511307D0E3508__CTOR_OFFSET UNITYSDK_OFFSET(0x14D07650)

inline static constexpr unsigned int Class_1_654511307D0E3508_TypeDefinitionIndex = 51406;

class Class_1_654511307D0E3508 : public ::System::Object
{
public:
	static ::Class_1_654511307D0E3508** StaticGet_Field_1_0()
	{
		return (::Class_1_654511307D0E3508**)Il2CppClass::FromTypeDefinitionIndex(Class_1_654511307D0E3508_TypeDefinitionIndex)->GetStaticField(0x36F00);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_654511307D0E3508__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_654511307D0E3508__CCTOR_OFFSET))();
	}

	::System::Void Method_1_7816D9708B580AF6(::Class_0_16E4307DCC419505_4* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_4*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_654511307D0E3508_METHOD_1_7816D9708B580AF6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4F6DE320374E6E37(::Class_0_16E4307DCC419505_4* a1, ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C* a2, ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C_1* a3, ::System::Collections::Generic::List_1<::System::UInt16>* a4, ::Class_1_9545B07472DE9BFD_Class_3_58CFE2A124E91724* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_4*, ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C*, ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C_1*, ::System::Collections::Generic::List_1<::System::UInt16>*, ::Class_1_9545B07472DE9BFD_Class_3_58CFE2A124E91724*))((::PBYTE)hIl2Cpp + CLASS_1_654511307D0E3508_METHOD_1_4F6DE320374E6E37_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
