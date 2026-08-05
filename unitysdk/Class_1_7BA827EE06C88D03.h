#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_A3B5141C858708A0_18.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_208CC9941471731A_614;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7BA827EE06C88D03_FINALIZE_OFFSET UNITYSDK_OFFSET(0x16A42BB0)
#define CLASS_1_7BA827EE06C88D03_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x16A41E90)
#define CLASS_1_7BA827EE06C88D03_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x16A42130)
#define CLASS_1_7BA827EE06C88D03_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x16A42A10)
#define CLASS_1_7BA827EE06C88D03_METHOD_1_87E60D0B8728CCD0_OFFSET UNITYSDK_OFFSET(0x16A42D30)
#define CLASS_1_7BA827EE06C88D03_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x16A42AD0)
#define CLASS_1_7BA827EE06C88D03_METHOD_1_C64F3CA8A6C36FAC_OFFSET UNITYSDK_OFFSET(0x16A427A0)
#define CLASS_1_7BA827EE06C88D03_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16A41E70)
#define CLASS_1_7BA827EE06C88D03_METHOD_1_D4561F0320FA9D65_OFFSET UNITYSDK_OFFSET(0x16A430B0)
#define CLASS_1_7BA827EE06C88D03_METHOD_1_D7212D472D632121_OFFSET UNITYSDK_OFFSET(0x16A42220)
#define CLASS_1_7BA827EE06C88D03_METHOD_1_F64DECD888E32669_OFFSET UNITYSDK_OFFSET(0x16A42940)
#define CLASS_1_7BA827EE06C88D03_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x16A43090)
#define CLASS_1_7BA827EE06C88D03__CTOR_OFFSET UNITYSDK_OFFSET(0x16A42CE0)

inline static constexpr unsigned int Class_1_7BA827EE06C88D03_TypeDefinitionIndex = 12023;

class Class_1_7BA827EE06C88D03 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::Class_2_208CC9941471731A_614*>* Field_1_5; // 0x18
	::Struct_2_A3B5141C858708A0_18 Field_1_2; // 0x20
	::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Field_1_7; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_614*>*>* Field_1_4; // 0x40
	::Il2CppArray<::Class_2_208CC9941471731A_614*>* Field_1_1; // 0x48
	::System::Int32 Field_1_6; // 0x50
	::System::Boolean Field_1_11; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BA827EE06C88D03__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BA827EE06C88D03_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BA827EE06C88D03_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_C64F3CA8A6C36FAC(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_7BA827EE06C88D03_METHOD_1_C64F3CA8A6C36FAC_OFFSET))(this, a1);
	}

	::System::Void Method_1_D7212D472D632121(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_7BA827EE06C88D03_METHOD_1_D7212D472D632121_OFFSET))(this, a1);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BA827EE06C88D03_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BA827EE06C88D03_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BA827EE06C88D03_FINALIZE_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_614* Method_1_87E60D0B8728CCD0(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_614*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7BA827EE06C88D03_METHOD_1_87E60D0B8728CCD0_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BA827EE06C88D03_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_2_208CC9941471731A_614*>* Method_1_F64DECD888E32669()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_2_208CC9941471731A_614*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BA827EE06C88D03_METHOD_1_F64DECD888E32669_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_614*>* Method_1_D4561F0320FA9D65(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_614*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7BA827EE06C88D03_METHOD_1_D4561F0320FA9D65_OFFSET))(this, a1);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BA827EE06C88D03_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}
};
