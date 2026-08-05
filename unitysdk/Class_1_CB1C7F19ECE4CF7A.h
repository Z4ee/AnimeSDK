#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_134.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_498;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_CB1C7F19ECE4CF7A_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17FA4440)
#define CLASS_1_CB1C7F19ECE4CF7A_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x17FA3FD0)
#define CLASS_1_CB1C7F19ECE4CF7A_METHOD_1_292CC34C78A58E6F_OFFSET UNITYSDK_OFFSET(0x17FA4750)
#define CLASS_1_CB1C7F19ECE4CF7A_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17FA4370)
#define CLASS_1_CB1C7F19ECE4CF7A_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x17FA4290)
#define CLASS_1_CB1C7F19ECE4CF7A_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x17FA4380)
#define CLASS_1_CB1C7F19ECE4CF7A_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x17FA4620)
#define CLASS_1_CB1C7F19ECE4CF7A_METHOD_1_C70C8176486DAEF5_OFFSET UNITYSDK_OFFSET(0x17FA4570)
#define CLASS_1_CB1C7F19ECE4CF7A_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x17FA3FB0)
#define CLASS_1_CB1C7F19ECE4CF7A_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x17FA49C0)
#define CLASS_1_CB1C7F19ECE4CF7A__CTOR_OFFSET UNITYSDK_OFFSET(0x17FA4700)

inline static constexpr unsigned int Class_1_CB1C7F19ECE4CF7A_TypeDefinitionIndex = 11689;

class Class_1_CB1C7F19ECE4CF7A : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_1; // 0x18
	::Il2CppArray<::Class_2_208CC9941471731A_498*>* Field_1_2; // 0x20
	::Struct_2_1862835F8661A21F_134 Field_1_3; // 0x28
	::System::Boolean Field_1_6; // 0x40
	::System::Int32 Field_1_7; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB1C7F19ECE4CF7A__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB1C7F19ECE4CF7A_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB1C7F19ECE4CF7A_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB1C7F19ECE4CF7A_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB1C7F19ECE4CF7A_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_C70C8176486DAEF5(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_CB1C7F19ECE4CF7A_METHOD_1_C70C8176486DAEF5_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_CB1C7F19ECE4CF7A_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB1C7F19ECE4CF7A_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_498* Method_1_292CC34C78A58E6F(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_498*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CB1C7F19ECE4CF7A_METHOD_1_292CC34C78A58E6F_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB1C7F19ECE4CF7A_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB1C7F19ECE4CF7A_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}
};
