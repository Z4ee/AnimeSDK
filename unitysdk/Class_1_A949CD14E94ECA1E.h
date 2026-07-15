#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_9AF9867BCD86F583;
class Class_1_A6385553C787E0DF;
class Class_2_F3C45F1FC7349B6E;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A949CD14E94ECA1E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14A682A0)
#define CLASS_1_A949CD14E94ECA1E_METHOD_1_2B020C274F6883CA_OFFSET UNITYSDK_OFFSET(0x14A68AB0)
#define CLASS_1_A949CD14E94ECA1E_METHOD_1_648262CB0DAA6020_OFFSET UNITYSDK_OFFSET(0x14A68770)
#define CLASS_1_A949CD14E94ECA1E_METHOD_1_AB521B1AE7712673_OFFSET UNITYSDK_OFFSET(0x14A682F0)
#define CLASS_1_A949CD14E94ECA1E_METHOD_1_AEBF55280097FDE7_OFFSET UNITYSDK_OFFSET(0x14A68E80)
#define CLASS_1_A949CD14E94ECA1E__CTOR_OFFSET UNITYSDK_OFFSET(0x14A68120)

inline static constexpr unsigned int Class_1_A949CD14E94ECA1E_TypeDefinitionIndex = 35772;

class Class_1_A949CD14E94ECA1E : public ::System::Object
{
public:
	// static const ::System::UInt64 Field_1_0 = 0x1F4; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::ValueTuple_2<::System::Int32, ::System::UInt32>>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::ValueTuple_2<::System::UInt64, ::System::UInt32>>* Field_1_2; // 0x18
	::Class_2_F3C45F1FC7349B6E* Field_1_3; // 0x20
	::System::UInt32 Field_1_4; // 0x28

	::System::Void _ctor(::Class_2_F3C45F1FC7349B6E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_1_A949CD14E94ECA1E__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A949CD14E94ECA1E_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_AB521B1AE7712673(::System::Int32 a1, ::Class_1_9AF9867BCD86F583* a2, ::System::UInt32& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_9AF9867BCD86F583*, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_A949CD14E94ECA1E_METHOD_1_AB521B1AE7712673_OFFSET))(this, a1, a2, a3);
	}

	::System::ValueTuple_2<::System::Int32, ::System::Int32> Method_1_648262CB0DAA6020(::Il2CppArray<::Class_1_A6385553C787E0DF*>* a1, ::System::UInt32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::Il2CppArray<::Class_1_A6385553C787E0DF*>*, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A949CD14E94ECA1E_METHOD_1_648262CB0DAA6020_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_2B020C274F6883CA(::Class_1_9AF9867BCD86F583* a1, ::System::UInt32& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AF9867BCD86F583*, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_A949CD14E94ECA1E_METHOD_1_2B020C274F6883CA_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_2<::System::Int32, ::System::Int32> Method_1_AEBF55280097FDE7(::Il2CppArray<::Class_1_A6385553C787E0DF*>* a1, ::System::UInt32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::Il2CppArray<::Class_1_A6385553C787E0DF*>*, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A949CD14E94ECA1E_METHOD_1_AEBF55280097FDE7_OFFSET))(this, a1, a2, a3, a4);
	}
};
