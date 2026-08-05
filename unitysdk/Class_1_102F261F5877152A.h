#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1224.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_723;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_102F261F5877152A_FINALIZE_OFFSET UNITYSDK_OFFSET(0x11EF5E10)
#define CLASS_1_102F261F5877152A_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x11EF5710)
#define CLASS_1_102F261F5877152A_METHOD_1_20F0A15C724866EA_OFFSET UNITYSDK_OFFSET(0x11EF62F0)
#define CLASS_1_102F261F5877152A_METHOD_1_292CC34C78A58E6F_OFFSET UNITYSDK_OFFSET(0x11EF5F90)
#define CLASS_1_102F261F5877152A_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x11EF5AC0)
#define CLASS_1_102F261F5877152A_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x11EF59D0)
#define CLASS_1_102F261F5877152A_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x11EF5C70)
#define CLASS_1_102F261F5877152A_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x11EF5D30)
#define CLASS_1_102F261F5877152A_METHOD_1_C64F3CA8A6C36FAC_OFFSET UNITYSDK_OFFSET(0x11EF5AD0)
#define CLASS_1_102F261F5877152A_METHOD_1_CDD7CA5BB0212FA9_OFFSET UNITYSDK_OFFSET(0x11EF6500)
#define CLASS_1_102F261F5877152A_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x11EF56F0)
#define CLASS_1_102F261F5877152A_METHOD_1_F64DECD888E32669_OFFSET UNITYSDK_OFFSET(0x11EF6220)
#define CLASS_1_102F261F5877152A_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x11EF6200)
#define CLASS_1_102F261F5877152A__CTOR_OFFSET UNITYSDK_OFFSET(0x11EF5F40)

inline static constexpr unsigned int Class_1_102F261F5877152A_TypeDefinitionIndex = 17097;

class Class_1_102F261F5877152A : public ::System::Object
{
public:
	::Struct_2_1862835F8661A21F_1224 Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_7; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_6; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_723*>*>* Field_1_4; // 0x38
	::Il2CppArray<::Class_2_208CC9941471731A_723*>* Field_1_0; // 0x40
	::System::Int32 Field_1_5; // 0x48
	::System::Boolean Field_1_11; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_102F261F5877152A__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_102F261F5877152A_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_102F261F5877152A_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_C64F3CA8A6C36FAC(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_102F261F5877152A_METHOD_1_C64F3CA8A6C36FAC_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_102F261F5877152A_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_102F261F5877152A_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_102F261F5877152A_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_102F261F5877152A_FINALIZE_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_723* Method_1_292CC34C78A58E6F(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_723*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_102F261F5877152A_METHOD_1_292CC34C78A58E6F_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_2_208CC9941471731A_723*>* Method_1_F64DECD888E32669()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_2_208CC9941471731A_723*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_102F261F5877152A_METHOD_1_F64DECD888E32669_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_102F261F5877152A_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_723*>* Method_1_CDD7CA5BB0212FA9(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_723*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_102F261F5877152A_METHOD_1_CDD7CA5BB0212FA9_OFFSET))(this, a1);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_102F261F5877152A_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_723* Method_1_20F0A15C724866EA(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_723*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_102F261F5877152A_METHOD_1_20F0A15C724866EA_OFFSET))(this, a1);
	}
};
