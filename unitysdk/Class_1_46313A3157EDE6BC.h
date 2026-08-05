#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_29B277056E3DA58E;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_46313A3157EDE6BC_METHOD_1_F3F25F983BD2D8A1_OFFSET UNITYSDK_OFFSET(0x1AF241E0)
#define CLASS_1_46313A3157EDE6BC_METHOD_1_F49316BD01FF714B_OFFSET UNITYSDK_OFFSET(0x1AF23C90)
#define CLASS_1_46313A3157EDE6BC__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF23C80)

inline static constexpr unsigned int Class_1_46313A3157EDE6BC_TypeDefinitionIndex = 42618;

class Class_1_46313A3157EDE6BC : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46313A3157EDE6BC__CTOR_OFFSET))(this);
	}

	static ::System::Boolean Method_1_F49316BD01FF714B(::Class_1_29B277056E3DA58E* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Boolean(*)(::Class_1_29B277056E3DA58E*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_46313A3157EDE6BC_METHOD_1_F49316BD01FF714B_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F3F25F983BD2D8A1(::Class_1_29B277056E3DA58E* a1)
	{
		return ((::System::Boolean(*)(::Class_1_29B277056E3DA58E*))((::PBYTE)hIl2Cpp + CLASS_1_46313A3157EDE6BC_METHOD_1_F3F25F983BD2D8A1_OFFSET))(a1);
	}
};
