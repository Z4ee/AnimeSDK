#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_886.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1172;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_B45803B7F7E7F74A_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A141AE0)
#define CLASS_1_B45803B7F7E7F74A_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x1A141670)
#define CLASS_1_B45803B7F7E7F74A_METHOD_1_292CC34C78A58E6F_OFFSET UNITYSDK_OFFSET(0x1A141E10)
#define CLASS_1_B45803B7F7E7F74A_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1A141A10)
#define CLASS_1_B45803B7F7E7F74A_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x1A141930)
#define CLASS_1_B45803B7F7E7F74A_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x1A141A20)
#define CLASS_1_B45803B7F7E7F74A_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x1A141CC0)
#define CLASS_1_B45803B7F7E7F74A_METHOD_1_C70C8176486DAEF5_OFFSET UNITYSDK_OFFSET(0x1A141C10)
#define CLASS_1_B45803B7F7E7F74A_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1A141650)
#define CLASS_1_B45803B7F7E7F74A_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x1A141DF0)
#define CLASS_1_B45803B7F7E7F74A__CTOR_OFFSET UNITYSDK_OFFSET(0x1A141DA0)

inline static constexpr unsigned int Class_1_B45803B7F7E7F74A_TypeDefinitionIndex = 18348;

class Class_1_B45803B7F7E7F74A : public ::System::Object
{
public:
	::Il2CppArray<::Class_2_208CC9941471731A_1172*>* Field_1_7; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_6; // 0x18
	::Struct_2_1862835F8661A21F_886 Field_1_0; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_5; // 0x38
	::System::Boolean Field_1_11; // 0x40
	::System::Int32 Field_1_4; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B45803B7F7E7F74A__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B45803B7F7E7F74A_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B45803B7F7E7F74A_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B45803B7F7E7F74A_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B45803B7F7E7F74A_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_C70C8176486DAEF5(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B45803B7F7E7F74A_METHOD_1_C70C8176486DAEF5_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_B45803B7F7E7F74A_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B45803B7F7E7F74A_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B45803B7F7E7F74A_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B45803B7F7E7F74A_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_1172* Method_1_292CC34C78A58E6F(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_1172*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B45803B7F7E7F74A_METHOD_1_292CC34C78A58E6F_OFFSET))(this, a1);
	}
};
