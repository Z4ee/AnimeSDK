#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_799.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_611;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_13A13FF29CF65D72_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1858A360)
#define CLASS_1_13A13FF29CF65D72_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x18589C80)
#define CLASS_1_13A13FF29CF65D72_METHOD_1_3BC6B414068B5B5A_OFFSET UNITYSDK_OFFSET(0x1858A500)
#define CLASS_1_13A13FF29CF65D72_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1858A020)
#define CLASS_1_13A13FF29CF65D72_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x18589F40)
#define CLASS_1_13A13FF29CF65D72_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x1858A1C0)
#define CLASS_1_13A13FF29CF65D72_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x1858A280)
#define CLASS_1_13A13FF29CF65D72_METHOD_1_C64F3CA8A6C36FAC_OFFSET UNITYSDK_OFFSET(0x1858A030)
#define CLASS_1_13A13FF29CF65D72_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18589C60)
#define CLASS_1_13A13FF29CF65D72_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x1858A4E0)
#define CLASS_1_13A13FF29CF65D72__CTOR_OFFSET UNITYSDK_OFFSET(0x1858A490)

inline static constexpr unsigned int Class_1_13A13FF29CF65D72_TypeDefinitionIndex = 11970;

class Class_1_13A13FF29CF65D72 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_2; // 0x10
	::Il2CppArray<::Class_2_208CC9941471731A_611*>* Field_1_1; // 0x18
	::Struct_2_1862835F8661A21F_799 Field_1_0; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_3; // 0x38
	::System::Int32 Field_1_4; // 0x40
	::System::Boolean Field_1_5; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13A13FF29CF65D72__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13A13FF29CF65D72_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13A13FF29CF65D72_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_C64F3CA8A6C36FAC(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_13A13FF29CF65D72_METHOD_1_C64F3CA8A6C36FAC_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_13A13FF29CF65D72_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13A13FF29CF65D72_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13A13FF29CF65D72_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13A13FF29CF65D72_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13A13FF29CF65D72_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13A13FF29CF65D72_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_611* Method_1_3BC6B414068B5B5A(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_611*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_13A13FF29CF65D72_METHOD_1_3BC6B414068B5B5A_OFFSET))(this, a1);
	}
};
