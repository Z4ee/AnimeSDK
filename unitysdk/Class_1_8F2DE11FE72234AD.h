#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1321.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_95;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_8F2DE11FE72234AD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x136675E0)
#define CLASS_1_8F2DE11FE72234AD_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x13666ED0)
#define CLASS_1_8F2DE11FE72234AD_METHOD_1_3BC6B414068B5B5A_OFFSET UNITYSDK_OFFSET(0x13667780)
#define CLASS_1_8F2DE11FE72234AD_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x13667280)
#define CLASS_1_8F2DE11FE72234AD_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x13667190)
#define CLASS_1_8F2DE11FE72234AD_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x13667440)
#define CLASS_1_8F2DE11FE72234AD_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x13667500)
#define CLASS_1_8F2DE11FE72234AD_METHOD_1_C64F3CA8A6C36FAC_OFFSET UNITYSDK_OFFSET(0x13667290)
#define CLASS_1_8F2DE11FE72234AD_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x13666EB0)
#define CLASS_1_8F2DE11FE72234AD_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x13667760)
#define CLASS_1_8F2DE11FE72234AD__CTOR_OFFSET UNITYSDK_OFFSET(0x13667710)

inline static constexpr unsigned int Class_1_8F2DE11FE72234AD_TypeDefinitionIndex = 17763;

class Class_1_8F2DE11FE72234AD : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_2; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_3; // 0x18
	::Il2CppArray<::Class_2_208CC9941471731A_95*>* Field_1_1; // 0x20
	::Struct_2_1862835F8661A21F_1321 Field_1_0; // 0x28
	::System::Int32 Field_1_4; // 0x40
	::System::Boolean Field_1_5; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F2DE11FE72234AD__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F2DE11FE72234AD_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F2DE11FE72234AD_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_C64F3CA8A6C36FAC(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8F2DE11FE72234AD_METHOD_1_C64F3CA8A6C36FAC_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_8F2DE11FE72234AD_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F2DE11FE72234AD_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F2DE11FE72234AD_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F2DE11FE72234AD_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F2DE11FE72234AD_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F2DE11FE72234AD_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_95* Method_1_3BC6B414068B5B5A(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_95*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8F2DE11FE72234AD_METHOD_1_3BC6B414068B5B5A_OFFSET))(this, a1);
	}
};
