#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D9FAA3DCCFE14DB8_61.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_277.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_9BD4B5485A9E96A0_METHOD_2_8D16D3C350175652_OFFSET UNITYSDK_OFFSET(0x14F21450)
#define CLASS_2_9BD4B5485A9E96A0_METHOD_2_DE4D93413C18F350_OFFSET UNITYSDK_OFFSET(0x14F21930)
#define CLASS_2_9BD4B5485A9E96A0__CTOR_OFFSET UNITYSDK_OFFSET(0x14F21440)

inline static constexpr unsigned int Class_2_9BD4B5485A9E96A0_TypeDefinitionIndex = 18118;

class Class_2_9BD4B5485A9E96A0 : public ::Class_1_D9FAA3DCCFE14DB8_61
{
public:
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Field_2_1; // 0x50
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Int32>>* Field_2_0; // 0x58

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_277 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_277, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_9BD4B5485A9E96A0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Int32>>* Method_2_8D16D3C350175652()
	{
		return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9BD4B5485A9E96A0_METHOD_2_8D16D3C350175652_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Method_2_DE4D93413C18F350()
	{
		return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9BD4B5485A9E96A0_METHOD_2_DE4D93413C18F350_OFFSET))(this);
	}
};
