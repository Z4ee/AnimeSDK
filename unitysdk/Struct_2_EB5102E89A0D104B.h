#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_DAFDD2A40891B364.h"
#include "unitysdk/Struct_2_EB5102E89A0D104B_Enum_3_65426FEB15ABEF11.h"
#include "unitysdk/System/ValueType.h"

class Class_1_0653B4DCF7808BED;
class Class_3_EACEEEB216DA3601;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define STRUCT_2_EB5102E89A0D104B_METHOD_2_37D8071CB6D517EF_OFFSET UNITYSDK_OFFSET(0x8BC940)
#define STRUCT_2_EB5102E89A0D104B_METHOD_2_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0x322600)
#define STRUCT_2_EB5102E89A0D104B_METHOD_2_602A336CBD30C930_OFFSET UNITYSDK_OFFSET(0x3222E0)
#define STRUCT_2_EB5102E89A0D104B_METHOD_2_735D62D494339767_OFFSET UNITYSDK_OFFSET(0x1AF1A790)
#define STRUCT_2_EB5102E89A0D104B_METHOD_2_96E8372C380BBC46_OFFSET UNITYSDK_OFFSET(0x8BC920)
#define STRUCT_2_EB5102E89A0D104B_METHOD_2_D3B665142403311C_OFFSET UNITYSDK_OFFSET(0x8BC950)

inline static constexpr unsigned int Struct_2_EB5102E89A0D104B_TypeDefinitionIndex = 69124;

struct alignas(8) Struct_2_EB5102E89A0D104B
{
	::Struct_2_DAFDD2A40891B364 Field_2_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_0653B4DCF7808BED*>* Field_2_7; // 0x28

	static ::Struct_2_EB5102E89A0D104B Method_2_735D62D494339767(::Class_3_EACEEEB216DA3601* a1, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>* a2)
	{
		return ((::Struct_2_EB5102E89A0D104B(*)(::Class_3_EACEEEB216DA3601*, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + STRUCT_2_EB5102E89A0D104B_METHOD_2_735D62D494339767_OFFSET))(a1, a2);
	}

	/*
	::System::Nullable_1<::Struct_2_A1A45D8655270887> Method_2_96E8372C380BBC46(::System::UInt32 a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_0653B4DCF7808BED*>* a2)
	{
		return ((::System::Nullable_1<::Struct_2_A1A45D8655270887>(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_0653B4DCF7808BED*>*))((::PBYTE)hIl2Cpp + STRUCT_2_EB5102E89A0D104B_METHOD_2_96E8372C380BBC46_OFFSET))(this, a1, a2);
	}
	*/

	::System::Boolean Method_2_37D8071CB6D517EF(::System::Int32 a1, ::System::Int32 a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_0653B4DCF7808BED*>* a3, ::Struct_2_EB5102E89A0D104B_Enum_3_65426FEB15ABEF11 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_0653B4DCF7808BED*>*, ::Struct_2_EB5102E89A0D104B_Enum_3_65426FEB15ABEF11))((::PBYTE)hIl2Cpp + STRUCT_2_EB5102E89A0D104B_METHOD_2_37D8071CB6D517EF_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_602A336CBD30C930(::Struct_2_DAFDD2A40891B364 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_DAFDD2A40891B364))((::PBYTE)hIl2Cpp + STRUCT_2_EB5102E89A0D104B_METHOD_2_602A336CBD30C930_OFFSET))(this, a1);
	}

	::System::Void Method_2_D3B665142403311C(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_0653B4DCF7808BED*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_0653B4DCF7808BED*>*))((::PBYTE)hIl2Cpp + STRUCT_2_EB5102E89A0D104B_METHOD_2_D3B665142403311C_OFFSET))(this, a1);
	}

	::Struct_2_DAFDD2A40891B364 Method_2_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_DAFDD2A40891B364(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_EB5102E89A0D104B_METHOD_2_3D78D2E0F9F95F07_OFFSET))(this);
	}
};
