#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_D70971723CC3AF9E;
namespace System { class Random; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F68A356F07E71451_METHOD_1_05E2A473AB3464A9_OFFSET UNITYSDK_OFFSET(0x129415D0)
#define CLASS_1_F68A356F07E71451_METHOD_1_74F8C5BC184627AE_OFFSET UNITYSDK_OFFSET(0x129413B0)
#define CLASS_1_F68A356F07E71451_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x12941790)
#define CLASS_1_F68A356F07E71451_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x12941780)
#define CLASS_1_F68A356F07E71451_METHOD_1_D1FD6FC3DE101764_OFFSET UNITYSDK_OFFSET(0x129412B0)
#define CLASS_1_F68A356F07E71451_METHOD_1_EE981B78617A832D_OFFSET UNITYSDK_OFFSET(0x129416D0)
#define CLASS_1_F68A356F07E71451__CTOR_OFFSET UNITYSDK_OFFSET(0x12941220)

inline static constexpr unsigned int Class_1_F68A356F07E71451_TypeDefinitionIndex = 65375;

class Class_1_F68A356F07E71451 : public ::System::Object
{
public:
	::Class_1_D70971723CC3AF9E* Field_1_1; // 0x10
	::System::Random* Field_1_2; // 0x18
	::System::Int32 Field_1_3; // 0x20
	::System::Int32 Field_1_0; // 0x24

	::System::Void _ctor(::System::Int32 a1, ::Class_1_D70971723CC3AF9E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_D70971723CC3AF9E*))((::PBYTE)hIl2Cpp + CLASS_1_F68A356F07E71451__CTOR_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_2<::System::Collections::Generic::List_1<::System::Int32>*, ::System::String*> Method_1_D1FD6FC3DE101764(::System::String* a1)
	{
		return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::System::Int32>*, ::System::String*>(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F68A356F07E71451_METHOD_1_D1FD6FC3DE101764_OFFSET))(this, a1);
	}

	::System::ValueTuple_2<::System::Collections::Generic::List_1<::System::Int32>*, ::System::String*> Method_1_05E2A473AB3464A9()
	{
		return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::System::Int32>*, ::System::String*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F68A356F07E71451_METHOD_1_05E2A473AB3464A9_OFFSET))(this);
	}

	::System::Boolean Method_1_74F8C5BC184627AE(::System::String* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Int32>*& a3, ::System::String*& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*&, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_F68A356F07E71451_METHOD_1_74F8C5BC184627AE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_EE981B78617A832D(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F68A356F07E71451_METHOD_1_EE981B78617A832D_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F68A356F07E71451_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F68A356F07E71451_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}
};
