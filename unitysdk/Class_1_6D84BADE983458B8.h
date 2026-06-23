#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_956.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_984;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_6D84BADE983458B8_FINALIZE_OFFSET UNITYSDK_OFFSET(0x189F8590)
#define CLASS_1_6D84BADE983458B8_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x189F8110)
#define CLASS_1_6D84BADE983458B8_METHOD_1_3BC6B414068B5B5A_OFFSET UNITYSDK_OFFSET(0x189F88C0)
#define CLASS_1_6D84BADE983458B8_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x189F84C0)
#define CLASS_1_6D84BADE983458B8_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x189F83D0)
#define CLASS_1_6D84BADE983458B8_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x189F84D0)
#define CLASS_1_6D84BADE983458B8_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x189F8770)
#define CLASS_1_6D84BADE983458B8_METHOD_1_C70C8176486DAEF5_OFFSET UNITYSDK_OFFSET(0x189F86C0)
#define CLASS_1_6D84BADE983458B8_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x189F80F0)
#define CLASS_1_6D84BADE983458B8_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x189F88A0)
#define CLASS_1_6D84BADE983458B8__CTOR_OFFSET UNITYSDK_OFFSET(0x189F8850)

inline static constexpr unsigned int Class_1_6D84BADE983458B8_TypeDefinitionIndex = 17484;

class Class_1_6D84BADE983458B8 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_3; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_2; // 0x18
	::Struct_2_1862835F8661A21F_956 Field_1_0; // 0x20
	::Il2CppArray<::Class_2_208CC9941471731A_984*>* Field_1_1; // 0x38
	::System::Int32 Field_1_4; // 0x40
	::System::Boolean Field_1_5; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D84BADE983458B8__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D84BADE983458B8_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D84BADE983458B8_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D84BADE983458B8_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D84BADE983458B8_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_C70C8176486DAEF5(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_6D84BADE983458B8_METHOD_1_C70C8176486DAEF5_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_6D84BADE983458B8_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D84BADE983458B8_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D84BADE983458B8_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D84BADE983458B8_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_984* Method_1_3BC6B414068B5B5A(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_984*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6D84BADE983458B8_METHOD_1_3BC6B414068B5B5A_OFFSET))(this, a1);
	}
};
