#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/Struct_2_35A988BF5E50EA31.h"
#include "unitysdk/Struct_2_B679E4D914A10080_2.h"

class Class_1_6EEAA83EDB800B24;
namespace MoleMole { class BubbleGroupPlayGraphContent; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_1503376ECC91D8EA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BC207B0)
#define CLASS_2_1503376ECC91D8EA_METHOD_2_1B34B4422E8A6FCB_1_OFFSET UNITYSDK_OFFSET(0x1BC211E0)
#define CLASS_2_1503376ECC91D8EA_METHOD_2_1B34B4422E8A6FCB_OFFSET UNITYSDK_OFFSET(0x1BC20FC0)
#define CLASS_2_1503376ECC91D8EA_METHOD_2_298E03B6F4208E39_OFFSET UNITYSDK_OFFSET(0x1BC21340)
#define CLASS_2_1503376ECC91D8EA_METHOD_2_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x1BC21120)
#define CLASS_2_1503376ECC91D8EA_METHOD_2_7ED2EFFA32B3D36B_OFFSET UNITYSDK_OFFSET(0x1BC20E60)
#define CLASS_2_1503376ECC91D8EA_METHOD_2_B768B32E4CEA46B8_OFFSET UNITYSDK_OFFSET(0x1BC208E0)
#define CLASS_2_1503376ECC91D8EA_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1BC207F0)
#define CLASS_2_1503376ECC91D8EA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC208C0)

inline static constexpr unsigned int Class_2_1503376ECC91D8EA_TypeDefinitionIndex = 50829;

class Class_2_1503376ECC91D8EA : public ::Foundation::SingletonDisposable_1<::Class_2_1503376ECC91D8EA*>
{
public:
	::System::Collections::Generic::Dictionary_2<::Struct_2_35A988BF5E50EA31, ::Class_1_6EEAA83EDB800B24*>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1503376ECC91D8EA__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1503376ECC91D8EA_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1503376ECC91D8EA_ONCREATE_OFFSET))(this);
	}

	::System::Boolean Method_2_B768B32E4CEA46B8(::Struct_2_35A988BF5E50EA31 a1, ::MoleMole::BubbleGroupPlayGraphContent* a2, ::System::Func_1<::Class_1_6EEAA83EDB800B24*>* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_35A988BF5E50EA31, ::MoleMole::BubbleGroupPlayGraphContent*, ::System::Func_1<::Class_1_6EEAA83EDB800B24*>*))((::PBYTE)hIl2Cpp + CLASS_2_1503376ECC91D8EA_METHOD_2_B768B32E4CEA46B8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_1B34B4422E8A6FCB(::Struct_2_35A988BF5E50EA31 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_35A988BF5E50EA31))((::PBYTE)hIl2Cpp + CLASS_2_1503376ECC91D8EA_METHOD_2_1B34B4422E8A6FCB_OFFSET))(this, a1);
	}

	::System::Void Method_2_7ED2EFFA32B3D36B(::Struct_2_35A988BF5E50EA31 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_35A988BF5E50EA31))((::PBYTE)hIl2Cpp + CLASS_2_1503376ECC91D8EA_METHOD_2_7ED2EFFA32B3D36B_OFFSET))(this, a1);
	}

	static ::Class_1_6EEAA83EDB800B24* Method_2_358A144584A5DBFC()
	{
		return ((::Class_1_6EEAA83EDB800B24*(*)())((::PBYTE)hIl2Cpp + CLASS_2_1503376ECC91D8EA_METHOD_2_358A144584A5DBFC_OFFSET))();
	}

	::System::Void Method_2_1B34B4422E8A6FCB_1(::Struct_2_35A988BF5E50EA31 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_35A988BF5E50EA31))((::PBYTE)hIl2Cpp + CLASS_2_1503376ECC91D8EA_METHOD_2_1B34B4422E8A6FCB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_298E03B6F4208E39(::Struct_2_B679E4D914A10080_2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_B679E4D914A10080_2))((::PBYTE)hIl2Cpp + CLASS_2_1503376ECC91D8EA_METHOD_2_298E03B6F4208E39_OFFSET))(this, a1);
	}
};
