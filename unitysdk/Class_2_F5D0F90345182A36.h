#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"

class Class_3_F33F9DC5F4112336;
namespace MoleMole { class DynamicBoneGroup; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_F5D0F90345182A36_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15655040)
#define CLASS_2_F5D0F90345182A36_METHOD_2_09A7DACAB84FF0AC_OFFSET UNITYSDK_OFFSET(0x15656030)
#define CLASS_2_F5D0F90345182A36_METHOD_2_21E7A940533C61B3_OFFSET UNITYSDK_OFFSET(0x15655A80)
#define CLASS_2_F5D0F90345182A36_METHOD_2_50B28C24D28E0D3B_OFFSET UNITYSDK_OFFSET(0x15655E00)
#define CLASS_2_F5D0F90345182A36_METHOD_2_6BB86695870EFBD1_OFFSET UNITYSDK_OFFSET(0x15656610)
#define CLASS_2_F5D0F90345182A36_METHOD_2_B15FA47FBE35BA3F_OFFSET UNITYSDK_OFFSET(0x15655D60)
#define CLASS_2_F5D0F90345182A36_METHOD_2_BFF96E989AC38879_OFFSET UNITYSDK_OFFSET(0x15656360)
#define CLASS_2_F5D0F90345182A36_METHOD_2_C145705A054F47D2_1_OFFSET UNITYSDK_OFFSET(0x156561C0)
#define CLASS_2_F5D0F90345182A36_METHOD_2_C145705A054F47D2_OFFSET UNITYSDK_OFFSET(0x15655290)
#define CLASS_2_F5D0F90345182A36_METHOD_2_C171322AB8E99A59_OFFSET UNITYSDK_OFFSET(0x15656540)
#define CLASS_2_F5D0F90345182A36_METHOD_2_E1152AED493A6AF7_OFFSET UNITYSDK_OFFSET(0x15655890)
#define CLASS_2_F5D0F90345182A36_METHOD_2_F293B8F6EC136895_OFFSET UNITYSDK_OFFSET(0x15655CB0)
#define CLASS_2_F5D0F90345182A36_METHOD_2_F5B4708E7805566C_OFFSET UNITYSDK_OFFSET(0x15655450)
#define CLASS_2_F5D0F90345182A36_ONCREATE_OFFSET UNITYSDK_OFFSET(0x15655080)
#define CLASS_2_F5D0F90345182A36_UPDATE_OFFSET UNITYSDK_OFFSET(0x156550C0)
#define CLASS_2_F5D0F90345182A36__CCTOR_OFFSET UNITYSDK_OFFSET(0x15655880)
#define CLASS_2_F5D0F90345182A36__CTOR_OFFSET UNITYSDK_OFFSET(0x156557B0)

inline static constexpr unsigned int Class_2_F5D0F90345182A36_TypeDefinitionIndex = 84369;

class Class_2_F5D0F90345182A36 : public ::Foundation::SingletonDisposable_1<::Class_2_F5D0F90345182A36*>
{
public:
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F5D0F90345182A36_TypeDefinitionIndex)->GetStaticField(0xD940);
	}
	::System::Collections::Generic::List_1<::MoleMole::DynamicBoneGroup*>* Field_2_1; // 0x10
	::System::Collections::Generic::List_1<::Class_3_F33F9DC5F4112336*>* Field_2_2; // 0x18
	::System::UInt32 Field_2_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5D0F90345182A36__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F5D0F90345182A36__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5D0F90345182A36_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5D0F90345182A36_ONCREATE_OFFSET))(this);
	}

	::System::Void Update(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F5D0F90345182A36_UPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_C145705A054F47D2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F5D0F90345182A36_METHOD_2_C145705A054F47D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_E1152AED493A6AF7(::Class_3_F33F9DC5F4112336* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F33F9DC5F4112336*))((::PBYTE)hIl2Cpp + CLASS_2_F5D0F90345182A36_METHOD_2_E1152AED493A6AF7_OFFSET))(this, a1);
	}

	::System::Void Method_2_F293B8F6EC136895(::MoleMole::DynamicBoneGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::DynamicBoneGroup*))((::PBYTE)hIl2Cpp + CLASS_2_F5D0F90345182A36_METHOD_2_F293B8F6EC136895_OFFSET))(this, a1);
	}

	::System::Void Method_2_B15FA47FBE35BA3F(::MoleMole::DynamicBoneGroup* a1, ::MoleMole::DynamicBoneGroup* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::DynamicBoneGroup*, ::MoleMole::DynamicBoneGroup*))((::PBYTE)hIl2Cpp + CLASS_2_F5D0F90345182A36_METHOD_2_B15FA47FBE35BA3F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_50B28C24D28E0D3B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F5D0F90345182A36_METHOD_2_50B28C24D28E0D3B_OFFSET))(this, a1);
	}

	::System::Void Method_2_09A7DACAB84FF0AC(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F5D0F90345182A36_METHOD_2_09A7DACAB84FF0AC_OFFSET))(this, a1);
	}

	::System::Void Method_2_C145705A054F47D2_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F5D0F90345182A36_METHOD_2_C145705A054F47D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_BFF96E989AC38879(::Class_3_F33F9DC5F4112336* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F33F9DC5F4112336*))((::PBYTE)hIl2Cpp + CLASS_2_F5D0F90345182A36_METHOD_2_BFF96E989AC38879_OFFSET))(this, a1);
	}

	::System::Void Method_2_F5B4708E7805566C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5D0F90345182A36_METHOD_2_F5B4708E7805566C_OFFSET))(this);
	}

	::System::Void Method_2_21E7A940533C61B3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F5D0F90345182A36_METHOD_2_21E7A940533C61B3_OFFSET))(this, a1);
	}

	::System::Void Method_2_C171322AB8E99A59(::MoleMole::DynamicBoneGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::DynamicBoneGroup*))((::PBYTE)hIl2Cpp + CLASS_2_F5D0F90345182A36_METHOD_2_C171322AB8E99A59_OFFSET))(this, a1);
	}

	::System::Void Method_2_6BB86695870EFBD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5D0F90345182A36_METHOD_2_6BB86695870EFBD1_OFFSET))(this);
	}
};
