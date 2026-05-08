#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"

class Class_1_1310CBEDADC30874;
namespace Foundation { template <typename T1, typename T2> class PriorityQueue_2; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Threading { class CancellationTokenSource; }

#define CLASS_2_83796440D48DF5B4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12C06520)
#define CLASS_2_83796440D48DF5B4_METHOD_2_0169F0DBABDADCA6_OFFSET UNITYSDK_OFFSET(0x12C07560)
#define CLASS_2_83796440D48DF5B4_METHOD_2_0C5458969C1A065A_OFFSET UNITYSDK_OFFSET(0x12C07270)
#define CLASS_2_83796440D48DF5B4_METHOD_2_19D21DC63CFC45D5_OFFSET UNITYSDK_OFFSET(0x12C06C40)
#define CLASS_2_83796440D48DF5B4_METHOD_2_2A97A8C2900C3101_1_OFFSET UNITYSDK_OFFSET(0x12C080D0)
#define CLASS_2_83796440D48DF5B4_METHOD_2_2A97A8C2900C3101_OFFSET UNITYSDK_OFFSET(0x12C07FA0)
#define CLASS_2_83796440D48DF5B4_METHOD_2_2FA8AE0519AC7829_OFFSET UNITYSDK_OFFSET(0x12C064A0)
#define CLASS_2_83796440D48DF5B4_METHOD_2_2FC887146F7D9C32_1_OFFSET UNITYSDK_OFFSET(0x12C077A0)
#define CLASS_2_83796440D48DF5B4_METHOD_2_2FC887146F7D9C32_OFFSET UNITYSDK_OFFSET(0x12C07740)
#define CLASS_2_83796440D48DF5B4_METHOD_2_458DAEAB6170C584_OFFSET UNITYSDK_OFFSET(0x12C05C90)
#define CLASS_2_83796440D48DF5B4_METHOD_2_5FBCC7F3CDB0E882_OFFSET UNITYSDK_OFFSET(0x12C05FD0)
#define CLASS_2_83796440D48DF5B4_METHOD_2_9A2A9A8FD6B5D017_OFFSET UNITYSDK_OFFSET(0x12C071F0)
#define CLASS_2_83796440D48DF5B4_METHOD_2_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0x12C07800)
#define CLASS_2_83796440D48DF5B4_METHOD_2_C04C10246EBC8F79_OFFSET UNITYSDK_OFFSET(0x12C08020)
#define CLASS_2_83796440D48DF5B4_METHOD_2_F01A00A14FF0288C_1_OFFSET UNITYSDK_OFFSET(0x12C07C40)
#define CLASS_2_83796440D48DF5B4_METHOD_2_F01A00A14FF0288C_OFFSET UNITYSDK_OFFSET(0x12C06E90)
#define CLASS_2_83796440D48DF5B4_METHOD_2_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0x12C067E0)
#define CLASS_2_83796440D48DF5B4_ONCREATE_OFFSET UNITYSDK_OFFSET(0x12C05830)
#define CLASS_2_83796440D48DF5B4__CTOR_OFFSET UNITYSDK_OFFSET(0x12C06B00)

inline static constexpr unsigned int Class_2_83796440D48DF5B4_TypeDefinitionIndex = 67921;

class Class_2_83796440D48DF5B4 : public ::Foundation::SingletonDisposable_1<::Class_2_83796440D48DF5B4*>
{
public:
	::System::Action_1<::System::Int32>* Field_2_6; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_1310CBEDADC30874*>* Field_2_0; // 0x18
	::Foundation::PriorityQueue_2<::Class_1_1310CBEDADC30874*, ::System::Int32>* Field_2_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_1; // 0x28
	::System::Threading::CancellationTokenSource* Field_2_3; // 0x30
	::System::Int32 Field_2_5; // 0x38
	::System::Boolean Field_2_4; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_83796440D48DF5B4__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_83796440D48DF5B4_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_83796440D48DF5B4_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_19D21DC63CFC45D5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_83796440D48DF5B4_METHOD_2_19D21DC63CFC45D5_OFFSET))(this, a1);
	}

	::System::Void Method_2_F01A00A14FF0288C(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_83796440D48DF5B4_METHOD_2_F01A00A14FF0288C_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_1_1310CBEDADC30874*>* Method_2_9A2A9A8FD6B5D017()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_1_1310CBEDADC30874*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_83796440D48DF5B4_METHOD_2_9A2A9A8FD6B5D017_OFFSET))(this);
	}

	::Class_1_1310CBEDADC30874* Method_2_0C5458969C1A065A(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::Class_1_1310CBEDADC30874*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_83796440D48DF5B4_METHOD_2_0C5458969C1A065A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2FC887146F7D9C32(::Class_1_1310CBEDADC30874* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1310CBEDADC30874*))((::PBYTE)hIl2Cpp + CLASS_2_83796440D48DF5B4_METHOD_2_2FC887146F7D9C32_OFFSET))(this, a1);
	}

	::System::Void Method_2_2FC887146F7D9C32_1(::Class_1_1310CBEDADC30874* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1310CBEDADC30874*))((::PBYTE)hIl2Cpp + CLASS_2_83796440D48DF5B4_METHOD_2_2FC887146F7D9C32_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_B9A97467188E4B69()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_83796440D48DF5B4_METHOD_2_B9A97467188E4B69_OFFSET))(this);
	}

	::System::Void Method_2_458DAEAB6170C584()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_83796440D48DF5B4_METHOD_2_458DAEAB6170C584_OFFSET))(this);
	}

	::System::Void Method_2_F01A00A14FF0288C_1(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_83796440D48DF5B4_METHOD_2_F01A00A14FF0288C_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_2A97A8C2900C3101(::System::Action_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_83796440D48DF5B4_METHOD_2_2A97A8C2900C3101_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_2_2FA8AE0519AC7829()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_83796440D48DF5B4_METHOD_2_2FA8AE0519AC7829_OFFSET))(this);
	}

	::System::Void Method_2_F4DD08A31BA3F883()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_83796440D48DF5B4_METHOD_2_F4DD08A31BA3F883_OFFSET))(this);
	}

	::System::Void Method_2_0169F0DBABDADCA6(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_83796440D48DF5B4_METHOD_2_0169F0DBABDADCA6_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Method_2_5FBCC7F3CDB0E882()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_83796440D48DF5B4_METHOD_2_5FBCC7F3CDB0E882_OFFSET))(this);
	}

	::System::Boolean Method_2_C04C10246EBC8F79(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_83796440D48DF5B4_METHOD_2_C04C10246EBC8F79_OFFSET))(this, a1);
	}

	::System::Void Method_2_2A97A8C2900C3101_1(::System::Action_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_83796440D48DF5B4_METHOD_2_2A97A8C2900C3101_1_OFFSET))(this, a1);
	}
};
