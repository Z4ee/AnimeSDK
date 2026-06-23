#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_100.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_438;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_460F324F32BF462D_FINALIZE_OFFSET UNITYSDK_OFFSET(0x189F3E40)
#define CLASS_1_460F324F32BF462D_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x189F3190)
#define CLASS_1_460F324F32BF462D_METHOD_1_20F0A15C724866EA_OFFSET UNITYSDK_OFFSET(0x189F3FC0)
#define CLASS_1_460F324F32BF462D_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x189F3460)
#define CLASS_1_460F324F32BF462D_METHOD_1_4FA110C37078733E_OFFSET UNITYSDK_OFFSET(0x189F3550)
#define CLASS_1_460F324F32BF462D_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x189F3CA0)
#define CLASS_1_460F324F32BF462D_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x189F3D60)
#define CLASS_1_460F324F32BF462D_METHOD_1_C64F3CA8A6C36FAC_OFFSET UNITYSDK_OFFSET(0x189F3A30)
#define CLASS_1_460F324F32BF462D_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x189F3170)
#define CLASS_1_460F324F32BF462D_METHOD_1_D4561F0320FA9D65_OFFSET UNITYSDK_OFFSET(0x189F41F0)
#define CLASS_1_460F324F32BF462D_METHOD_1_F64DECD888E32669_OFFSET UNITYSDK_OFFSET(0x189F3BD0)
#define CLASS_1_460F324F32BF462D_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x189F41D0)
#define CLASS_1_460F324F32BF462D__CTOR_OFFSET UNITYSDK_OFFSET(0x189F3F70)

inline static constexpr unsigned int Class_1_460F324F32BF462D_TypeDefinitionIndex = 17402;

class Class_1_460F324F32BF462D : public ::System::Object
{
public:
	::Struct_2_1862835F8661A21F_100 Field_1_0; // 0x10
	::Il2CppArray<::Class_2_208CC9941471731A_438*>* Field_1_1; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_438*>*>* Field_1_5; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_3; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_2; // 0x40
	::System::Boolean Field_1_6; // 0x48
	::System::Int32 Field_1_4; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_460F324F32BF462D__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_460F324F32BF462D_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_460F324F32BF462D_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_C64F3CA8A6C36FAC(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_460F324F32BF462D_METHOD_1_C64F3CA8A6C36FAC_OFFSET))(this, a1);
	}

	::System::Void Method_1_4FA110C37078733E(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_460F324F32BF462D_METHOD_1_4FA110C37078733E_OFFSET))(this, a1);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_460F324F32BF462D_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_460F324F32BF462D_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_460F324F32BF462D_FINALIZE_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_438* Method_1_20F0A15C724866EA(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_438*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_460F324F32BF462D_METHOD_1_20F0A15C724866EA_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_2_208CC9941471731A_438*>* Method_1_F64DECD888E32669()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_2_208CC9941471731A_438*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_460F324F32BF462D_METHOD_1_F64DECD888E32669_OFFSET))(this);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_460F324F32BF462D_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_438*>* Method_1_D4561F0320FA9D65(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_438*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_460F324F32BF462D_METHOD_1_D4561F0320FA9D65_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_460F324F32BF462D_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}
};
