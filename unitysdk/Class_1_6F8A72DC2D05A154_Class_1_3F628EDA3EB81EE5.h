#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class Random; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6F8A72DC2D05A154_CLASS_1_3F628EDA3EB81EE5_GET_ENDZ_OFFSET UNITYSDK_OFFSET(0x16664D50)
#define CLASS_1_6F8A72DC2D05A154_CLASS_1_3F628EDA3EB81EE5_GET_STARTZ_OFFSET UNITYSDK_OFFSET(0x16664D40)
#define CLASS_1_6F8A72DC2D05A154_CLASS_1_3F628EDA3EB81EE5_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x16664650)
#define CLASS_1_6F8A72DC2D05A154_CLASS_1_3F628EDA3EB81EE5_METHOD_1_87409E84C2AD546D_OFFSET UNITYSDK_OFFSET(0x16663360)
#define CLASS_1_6F8A72DC2D05A154_CLASS_1_3F628EDA3EB81EE5_METHOD_1_DA72E6E166210E9E_OFFSET UNITYSDK_OFFSET(0x16664790)
#define CLASS_1_6F8A72DC2D05A154_CLASS_1_3F628EDA3EB81EE5_METHOD_1_F40597CB5C299C0C_OFFSET UNITYSDK_OFFSET(0x166646B0)
#define CLASS_1_6F8A72DC2D05A154_CLASS_1_3F628EDA3EB81EE5__CTOR_OFFSET UNITYSDK_OFFSET(0x166632F0)

inline static constexpr unsigned int Class_1_6F8A72DC2D05A154_Class_1_3F628EDA3EB81EE5_TypeDefinitionIndex = 28955;

class Class_1_6F8A72DC2D05A154_Class_1_3F628EDA3EB81EE5 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* Field_1_2; // 0x10
	::System::UInt32 _EndZ_k__BackingField; // 0x18
	::System::UInt32 _StartZ_k__BackingField; // 0x1C

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6F8A72DC2D05A154_CLASS_1_3F628EDA3EB81EE5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_87409E84C2AD546D(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_6F8A72DC2D05A154_CLASS_1_3F628EDA3EB81EE5_METHOD_1_87409E84C2AD546D_OFFSET))(this, a1);
	}

	::System::Void Method_1_DA72E6E166210E9E(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_6F8A72DC2D05A154_CLASS_1_3F628EDA3EB81EE5_METHOD_1_DA72E6E166210E9E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F8A72DC2D05A154_CLASS_1_3F628EDA3EB81EE5_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> Method_1_F40597CB5C299C0C(::System::Random* a1)
	{
		return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::System::Random*))((::PBYTE)hIl2Cpp + CLASS_1_6F8A72DC2D05A154_CLASS_1_3F628EDA3EB81EE5_METHOD_1_F40597CB5C299C0C_OFFSET))(this, a1);
	}

	::System::UInt32 get_StartZ()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F8A72DC2D05A154_CLASS_1_3F628EDA3EB81EE5_GET_STARTZ_OFFSET))(this);
	}

	::System::UInt32 get_EndZ()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F8A72DC2D05A154_CLASS_1_3F628EDA3EB81EE5_GET_ENDZ_OFFSET))(this);
	}
};
