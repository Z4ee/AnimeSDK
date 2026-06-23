#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_786.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1040;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C780A87D78AD39AF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x189FCFB0)
#define CLASS_1_C780A87D78AD39AF_METHOD_1_20F0A15C724866EA_OFFSET UNITYSDK_OFFSET(0x189FD420)
#define CLASS_1_C780A87D78AD39AF_METHOD_1_21886A8411E71157_OFFSET UNITYSDK_OFFSET(0x189FCC90)
#define CLASS_1_C780A87D78AD39AF_METHOD_1_3BC6B414068B5B5A_OFFSET UNITYSDK_OFFSET(0x189FD650)
#define CLASS_1_C780A87D78AD39AF_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x189FCEE0)
#define CLASS_1_C780A87D78AD39AF_METHOD_1_4616BAFB42DE5A32_OFFSET UNITYSDK_OFFSET(0x189FDC30)
#define CLASS_1_C780A87D78AD39AF_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x189FCEF0)
#define CLASS_1_C780A87D78AD39AF_METHOD_1_977A5C8234F34C98_OFFSET UNITYSDK_OFFSET(0x189FDC20)
#define CLASS_1_C780A87D78AD39AF_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x189FD220)
#define CLASS_1_C780A87D78AD39AF_METHOD_1_BC861F5C522B8D5C_OFFSET UNITYSDK_OFFSET(0x189FD8B0)
#define CLASS_1_C780A87D78AD39AF_METHOD_1_C70C8176486DAEF5_OFFSET UNITYSDK_OFFSET(0x189FD170)
#define CLASS_1_C780A87D78AD39AF_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x189FC430)
#define CLASS_1_C780A87D78AD39AF_METHOD_1_EB7282B6745B4611_OFFSET UNITYSDK_OFFSET(0x189FC450)
#define CLASS_1_C780A87D78AD39AF_METHOD_1_F64DECD888E32669_OFFSET UNITYSDK_OFFSET(0x189FCE10)
#define CLASS_1_C780A87D78AD39AF_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x189FD630)
#define CLASS_1_C780A87D78AD39AF__CCTOR_OFFSET UNITYSDK_OFFSET(0x189FD410)
#define CLASS_1_C780A87D78AD39AF__CTOR_OFFSET UNITYSDK_OFFSET(0x189FD300)

inline static constexpr unsigned int Class_1_C780A87D78AD39AF_TypeDefinitionIndex = 15895;

class Class_1_C780A87D78AD39AF : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C780A87D78AD39AF_TypeDefinitionIndex)->GetStaticField(0x3E50);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1040*>* Field_1_1; // 0x10
	::Il2CppArray<::Class_2_208CC9941471731A_1040*>* Field_1_4; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_5; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_6; // 0x28
	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1040*>* Field_1_2; // 0x30
	::Struct_2_1862835F8661A21F_786 Field_1_3; // 0x38
	::System::Int32 Field_1_7; // 0x50
	::System::Boolean Field_1_8; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C780A87D78AD39AF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C780A87D78AD39AF__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C780A87D78AD39AF_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_EB7282B6745B4611()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C780A87D78AD39AF_METHOD_1_EB7282B6745B4611_OFFSET))(this);
	}

	::System::Void Method_1_21886A8411E71157()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C780A87D78AD39AF_METHOD_1_21886A8411E71157_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C780A87D78AD39AF_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_C70C8176486DAEF5(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_C780A87D78AD39AF_METHOD_1_C70C8176486DAEF5_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_C780A87D78AD39AF_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C780A87D78AD39AF_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_1040* Method_1_20F0A15C724866EA(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_1040*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C780A87D78AD39AF_METHOD_1_20F0A15C724866EA_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_1040* Method_1_3BC6B414068B5B5A(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_1040*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C780A87D78AD39AF_METHOD_1_3BC6B414068B5B5A_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_BC861F5C522B8D5C(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C780A87D78AD39AF_METHOD_1_BC861F5C522B8D5C_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_2_208CC9941471731A_1040*>* Method_1_F64DECD888E32669()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_2_208CC9941471731A_1040*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C780A87D78AD39AF_METHOD_1_F64DECD888E32669_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C780A87D78AD39AF_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1040*>* Method_1_977A5C8234F34C98()
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1040*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C780A87D78AD39AF_METHOD_1_977A5C8234F34C98_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1040*>* Method_1_4616BAFB42DE5A32()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1040*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C780A87D78AD39AF_METHOD_1_4616BAFB42DE5A32_OFFSET))(this);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C780A87D78AD39AF_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}
};
