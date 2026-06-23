#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_458.h"
#include "unitysdk/System/Object.h"

class Class_2_534AF681CC2BD5FD_72;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_8A9CBEA2D8F45854_FINALIZE_OFFSET UNITYSDK_OFFSET(0x149A0250)
#define CLASS_1_8A9CBEA2D8F45854_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x1499FB70)
#define CLASS_1_8A9CBEA2D8F45854_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1499FF10)
#define CLASS_1_8A9CBEA2D8F45854_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x1499FE30)
#define CLASS_1_8A9CBEA2D8F45854_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x149A00B0)
#define CLASS_1_8A9CBEA2D8F45854_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x149A0170)
#define CLASS_1_8A9CBEA2D8F45854_METHOD_1_C64F3CA8A6C36FAC_OFFSET UNITYSDK_OFFSET(0x1499FF20)
#define CLASS_1_8A9CBEA2D8F45854_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1499FB50)
#define CLASS_1_8A9CBEA2D8F45854__CTOR_OFFSET UNITYSDK_OFFSET(0x149A0380)

inline static constexpr unsigned int Class_1_8A9CBEA2D8F45854_TypeDefinitionIndex = 10416;

class Class_1_8A9CBEA2D8F45854 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_3; // 0x10
	::Struct_2_1862835F8661A21F_458 Field_1_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_2; // 0x30
	::Il2CppArray<::Class_2_534AF681CC2BD5FD_72*>* Field_1_1; // 0x38
	::System::Boolean Field_1_5; // 0x40
	::System::Int32 Field_1_4; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A9CBEA2D8F45854__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A9CBEA2D8F45854_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A9CBEA2D8F45854_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_C64F3CA8A6C36FAC(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8A9CBEA2D8F45854_METHOD_1_C64F3CA8A6C36FAC_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_8A9CBEA2D8F45854_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A9CBEA2D8F45854_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A9CBEA2D8F45854_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A9CBEA2D8F45854_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A9CBEA2D8F45854_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}
};
