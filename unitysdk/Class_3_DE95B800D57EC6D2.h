#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

class Class_0_16E4307DCC419505_40;
class Class_1_446FF0195498B714;
class Class_2_8026BF886B2570E0;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_DE95B800D57EC6D2_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x169DE430)
#define CLASS_3_DE95B800D57EC6D2_METHOD_3_107EBB36293F82B5_OFFSET UNITYSDK_OFFSET(0x169DE530)
#define CLASS_3_DE95B800D57EC6D2_METHOD_3_128774387667156B_OFFSET UNITYSDK_OFFSET(0x169DEC40)
#define CLASS_3_DE95B800D57EC6D2_METHOD_3_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x169DECA0)
#define CLASS_3_DE95B800D57EC6D2_METHOD_3_7AAF4659D71CE76F_OFFSET UNITYSDK_OFFSET(0x169DE650)
#define CLASS_3_DE95B800D57EC6D2_METHOD_3_862724C61E89A558_OFFSET UNITYSDK_OFFSET(0x169DE970)
#define CLASS_3_DE95B800D57EC6D2_METHOD_3_9292217C488E94FF_OFFSET UNITYSDK_OFFSET(0x169DEA10)
#define CLASS_3_DE95B800D57EC6D2_METHOD_3_94B25CAC09010F16_OFFSET UNITYSDK_OFFSET(0x169DE6F0)
#define CLASS_3_DE95B800D57EC6D2_METHOD_3_977A5C8234F34C98_OFFSET UNITYSDK_OFFSET(0x169DEC30)
#define CLASS_3_DE95B800D57EC6D2_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x169DEBA0)
#define CLASS_3_DE95B800D57EC6D2_METHOD_3_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x169DEC80)
#define CLASS_3_DE95B800D57EC6D2_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x169DE8F0)
#define CLASS_3_DE95B800D57EC6D2_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x169DEC90)
#define CLASS_3_DE95B800D57EC6D2_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x169DDF30)
#define CLASS_3_DE95B800D57EC6D2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x169DE1C0)
#define CLASS_3_DE95B800D57EC6D2__CCTOR_OFFSET UNITYSDK_OFFSET(0x169DE480)
#define CLASS_3_DE95B800D57EC6D2__CTOR_OFFSET UNITYSDK_OFFSET(0x169DE520)

inline static constexpr unsigned int Class_3_DE95B800D57EC6D2_TypeDefinitionIndex = 88399;

class Class_3_DE95B800D57EC6D2 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::Il2CppArray<::Class_2_8026BF886B2570E0*>** StaticGet_Field_3_2()
	{
		return (::Il2CppArray<::Class_2_8026BF886B2570E0*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_DE95B800D57EC6D2_TypeDefinitionIndex)->GetStaticField(0x415D0);
	}
	// static const ::System::Int32 Field_3_10 = 0xD0; // 0x0
	::Class_0_16E4307DCC419505_40* Field_3_1; // 0x48
	::System::Collections::Generic::List_1<::Class_1_446FF0195498B714*>* Field_3_11; // 0x50
	::System::Action* Field_3_4; // 0x58
	::System::Collections::Generic::List_1<::Class_2_8026BF886B2570E0*>* Field_3_0; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_8026BF886B2570E0*>*>* Field_3_7; // 0x68
	::System::Boolean Field_3_5; // 0x70
	::System::Single Field_3_6; // 0x74

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_DE95B800D57EC6D2__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DE95B800D57EC6D2__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DE95B800D57EC6D2_ONCLEAN_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DE95B800D57EC6D2_TOSTRING_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DE95B800D57EC6D2_GETCLASSID_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_2_8026BF886B2570E0*>* Method_3_107EBB36293F82B5(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_2_8026BF886B2570E0*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_DE95B800D57EC6D2_METHOD_3_107EBB36293F82B5_OFFSET))(this, a1);
	}

	::System::Void Method_3_7AAF4659D71CE76F(::Class_2_8026BF886B2570E0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_8026BF886B2570E0*))((::PBYTE)hIl2Cpp + CLASS_3_DE95B800D57EC6D2_METHOD_3_7AAF4659D71CE76F_OFFSET))(this, a1);
	}

	static ::Class_3_DE95B800D57EC6D2* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_DE95B800D57EC6D2*(*)())((::PBYTE)hIl2Cpp + CLASS_3_DE95B800D57EC6D2_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Boolean Method_3_862724C61E89A558(::Class_2_8026BF886B2570E0* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_8026BF886B2570E0*))((::PBYTE)hIl2Cpp + CLASS_3_DE95B800D57EC6D2_METHOD_3_862724C61E89A558_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DE95B800D57EC6D2_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_94B25CAC09010F16(::Class_2_8026BF886B2570E0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_8026BF886B2570E0*))((::PBYTE)hIl2Cpp + CLASS_3_DE95B800D57EC6D2_METHOD_3_94B25CAC09010F16_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_8026BF886B2570E0*>* Method_3_977A5C8234F34C98()
	{
		return ((::System::Collections::Generic::List_1<::Class_2_8026BF886B2570E0*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DE95B800D57EC6D2_METHOD_3_977A5C8234F34C98_OFFSET))(this);
	}

	::System::String* Method_3_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DE95B800D57EC6D2_METHOD_3_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_3_9292217C488E94FF(::Class_2_8026BF886B2570E0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_8026BF886B2570E0*))((::PBYTE)hIl2Cpp + CLASS_3_DE95B800D57EC6D2_METHOD_3_9292217C488E94FF_OFFSET))(this, a1);
	}

	::System::Void Method_3_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_DE95B800D57EC6D2_METHOD_3_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DE95B800D57EC6D2_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_3_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DE95B800D57EC6D2_METHOD_3_30D1209326FA87FC_OFFSET))(this);
	}
};
