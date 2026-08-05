#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1498.h"
#include "unitysdk/System/Object.h"

class Class_2_387B1E2AEAB797B9_1;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_20B03AB980922557_FINALIZE_OFFSET UNITYSDK_OFFSET(0x14000B80)
#define CLASS_1_20B03AB980922557_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x14000A80)
#define CLASS_1_20B03AB980922557_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x13FFF440)
#define CLASS_1_20B03AB980922557_METHOD_1_2A0AD3ABBD6BB40E_OFFSET UNITYSDK_OFFSET(0x13FFF9D0)
#define CLASS_1_20B03AB980922557_METHOD_1_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0x13FFF6D0)
#define CLASS_1_20B03AB980922557_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x14001310)
#define CLASS_1_20B03AB980922557_METHOD_1_36170E9D9D3D8AF6_OFFSET UNITYSDK_OFFSET(0x14001060)
#define CLASS_1_20B03AB980922557_METHOD_1_492B5CEAF18AFFFE_OFFSET UNITYSDK_OFFSET(0x14001050)
#define CLASS_1_20B03AB980922557_METHOD_1_4D6461016E98642F_OFFSET UNITYSDK_OFFSET(0x14001680)
#define CLASS_1_20B03AB980922557_METHOD_1_5A5DA5976F10CAF1_OFFSET UNITYSDK_OFFSET(0x14001070)
#define CLASS_1_20B03AB980922557_METHOD_1_82AED606E137C919_OFFSET UNITYSDK_OFFSET(0x140013A0)
#define CLASS_1_20B03AB980922557_METHOD_1_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x13FFF4A0)
#define CLASS_1_20B03AB980922557_METHOD_1_9DBC271B05B4A93A_OFFSET UNITYSDK_OFFSET(0x14000CE0)
#define CLASS_1_20B03AB980922557_METHOD_1_A9505CE1ED08D646_OFFSET UNITYSDK_OFFSET(0x14000BF0)
#define CLASS_1_20B03AB980922557_METHOD_1_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x14000E40)
#define CLASS_1_20B03AB980922557__CTOR_OFFSET UNITYSDK_OFFSET(0x14000EB0)

inline static constexpr unsigned int Class_1_20B03AB980922557_TypeDefinitionIndex = 44098;

class Class_1_20B03AB980922557 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>*>* Field_1_2; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_4; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_387B1E2AEAB797B9_1*>*>*>* Field_1_0; // 0x20
	::Il2CppArray<::Class_2_387B1E2AEAB797B9_1*>* Field_1_6; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::UInt16>*>*>* Field_1_1; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_5; // 0x38
	::Struct_2_1862835F8661A21F_1498 Field_1_7; // 0x40
	::System::Boolean Field_1_10; // 0x58
	::System::Int32 Field_1_11; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20B03AB980922557__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20B03AB980922557_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20B03AB980922557_METHOD_1_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_1_2B9D478141E0F891()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20B03AB980922557_METHOD_1_2B9D478141E0F891_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20B03AB980922557_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_A9505CE1ED08D646(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_20B03AB980922557_METHOD_1_A9505CE1ED08D646_OFFSET))(this, a1);
	}

	::System::Void Method_1_2A0AD3ABBD6BB40E(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_20B03AB980922557_METHOD_1_2A0AD3ABBD6BB40E_OFFSET))(this, a1);
	}

	::System::Void Method_1_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20B03AB980922557_METHOD_1_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::UInt16>*>*>* Method_1_492B5CEAF18AFFFE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::UInt16>*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20B03AB980922557_METHOD_1_492B5CEAF18AFFFE_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>*>* Method_1_36170E9D9D3D8AF6()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20B03AB980922557_METHOD_1_36170E9D9D3D8AF6_OFFSET))(this);
	}

	::Class_2_387B1E2AEAB797B9_1* Method_1_5A5DA5976F10CAF1(::System::Int32 a1)
	{
		return ((::Class_2_387B1E2AEAB797B9_1*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_20B03AB980922557_METHOD_1_5A5DA5976F10CAF1_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20B03AB980922557_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::Il2CppArray<::Class_2_387B1E2AEAB797B9_1*>* Method_1_9DBC271B05B4A93A()
	{
		return ((::Il2CppArray<::Class_2_387B1E2AEAB797B9_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20B03AB980922557_METHOD_1_9DBC271B05B4A93A_OFFSET))(this);
	}

	::Class_2_387B1E2AEAB797B9_1* Method_1_4D6461016E98642F(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::Class_2_387B1E2AEAB797B9_1*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_20B03AB980922557_METHOD_1_4D6461016E98642F_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_387B1E2AEAB797B9_1* Method_1_82AED606E137C919(::System::Int32 a1)
	{
		return ((::Class_2_387B1E2AEAB797B9_1*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_20B03AB980922557_METHOD_1_82AED606E137C919_OFFSET))(this, a1);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20B03AB980922557_METHOD_1_0865E94460F11643_OFFSET))(this);
	}
};
