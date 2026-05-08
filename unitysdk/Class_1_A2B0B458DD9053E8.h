#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_A3B5141C858708A0_9.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_534AF681CC2BD5FD_227;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_A2B0B458DD9053E8_FINALIZE_OFFSET UNITYSDK_OFFSET(0x16BB7BE0)
#define CLASS_1_A2B0B458DD9053E8_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x16BB77B0)
#define CLASS_1_A2B0B458DD9053E8_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x16BB7B10)
#define CLASS_1_A2B0B458DD9053E8_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x16BB7A30)
#define CLASS_1_A2B0B458DD9053E8_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x16BB7B20)
#define CLASS_1_A2B0B458DD9053E8_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x16BB7DC0)
#define CLASS_1_A2B0B458DD9053E8_METHOD_1_C70C8176486DAEF5_OFFSET UNITYSDK_OFFSET(0x16BB7D10)
#define CLASS_1_A2B0B458DD9053E8_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16BB7790)
#define CLASS_1_A2B0B458DD9053E8__CTOR_OFFSET UNITYSDK_OFFSET(0x16BB7EA0)

inline static constexpr unsigned int Class_1_A2B0B458DD9053E8_TypeDefinitionIndex = 15768;

class Class_1_A2B0B458DD9053E8 : public ::System::Object
{
public:
	::Il2CppArray<::Class_2_534AF681CC2BD5FD_227*>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* Field_1_2; // 0x18
	::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Field_1_3; // 0x20
	::Struct_2_A3B5141C858708A0_9 Field_1_0; // 0x28
	::System::Int32 Field_1_4; // 0x40
	::System::Boolean Field_1_5; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B0B458DD9053E8__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B0B458DD9053E8_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B0B458DD9053E8_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B0B458DD9053E8_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B0B458DD9053E8_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_C70C8176486DAEF5(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_A2B0B458DD9053E8_METHOD_1_C70C8176486DAEF5_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_A2B0B458DD9053E8_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B0B458DD9053E8_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B0B458DD9053E8_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}
};
