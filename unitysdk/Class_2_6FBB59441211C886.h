#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"

class Class_3_F33F9DC5F4112336;
namespace MoleMole { class DynamicBoneGroup; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6FBB59441211C886_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18DD2EE0)
#define CLASS_2_6FBB59441211C886_METHOD_2_0578F85BCC78EF51_OFFSET UNITYSDK_OFFSET(0x18DD4710)
#define CLASS_2_6FBB59441211C886_METHOD_2_09A7DACAB84FF0AC_OFFSET UNITYSDK_OFFSET(0x18DD3D40)
#define CLASS_2_6FBB59441211C886_METHOD_2_21E7A940533C61B3_OFFSET UNITYSDK_OFFSET(0x18DD3B10)
#define CLASS_2_6FBB59441211C886_METHOD_2_46737F85CDB5E497_OFFSET UNITYSDK_OFFSET(0x18DD3ED0)
#define CLASS_2_6FBB59441211C886_METHOD_2_50B28C24D28E0D3B_OFFSET UNITYSDK_OFFSET(0x18DD41E0)
#define CLASS_2_6FBB59441211C886_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x18DD4410)
#define CLASS_2_6FBB59441211C886_METHOD_2_6BB86695870EFBD1_OFFSET UNITYSDK_OFFSET(0x18DD4450)
#define CLASS_2_6FBB59441211C886_METHOD_2_B15FA47FBE35BA3F_OFFSET UNITYSDK_OFFSET(0x18DD45A0)
#define CLASS_2_6FBB59441211C886_METHOD_2_BFF96E989AC38879_OFFSET UNITYSDK_OFFSET(0x18DD49B0)
#define CLASS_2_6FBB59441211C886_METHOD_2_C145705A054F47D2_1_OFFSET UNITYSDK_OFFSET(0x18DD3740)
#define CLASS_2_6FBB59441211C886_METHOD_2_C145705A054F47D2_OFFSET UNITYSDK_OFFSET(0x18DD3130)
#define CLASS_2_6FBB59441211C886_METHOD_2_C171322AB8E99A59_OFFSET UNITYSDK_OFFSET(0x18DD4640)
#define CLASS_2_6FBB59441211C886_METHOD_2_E1152AED493A6AF7_OFFSET UNITYSDK_OFFSET(0x18DD38E0)
#define CLASS_2_6FBB59441211C886_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18DD4420)
#define CLASS_2_6FBB59441211C886_METHOD_2_F293B8F6EC136895_OFFSET UNITYSDK_OFFSET(0x18DD4130)
#define CLASS_2_6FBB59441211C886_METHOD_2_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x18DD4430)
#define CLASS_2_6FBB59441211C886_METHOD_2_F5B4708E7805566C_OFFSET UNITYSDK_OFFSET(0x18DD32F0)
#define CLASS_2_6FBB59441211C886_ONCREATE_OFFSET UNITYSDK_OFFSET(0x18DD2F20)
#define CLASS_2_6FBB59441211C886_UPDATE_OFFSET UNITYSDK_OFFSET(0x18DD2F60)
#define CLASS_2_6FBB59441211C886__CCTOR_OFFSET UNITYSDK_OFFSET(0x18DD3730)
#define CLASS_2_6FBB59441211C886__CTOR_OFFSET UNITYSDK_OFFSET(0x18DD3650)

inline static constexpr unsigned int Class_2_6FBB59441211C886_TypeDefinitionIndex = 50689;

class Class_2_6FBB59441211C886 : public ::Foundation::SingletonDisposable_1<::Class_2_6FBB59441211C886*>
{
public:
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6FBB59441211C886_TypeDefinitionIndex)->GetStaticField(0xC740);
	}
	::System::Collections::Generic::List_1<::Class_3_F33F9DC5F4112336*>* Field_2_6; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::DynamicBoneGroup*>* Field_2_7; // 0x18
	::System::Single Field_2_11; // 0x20
	::System::UInt32 Field_2_5; // 0x24
	::System::Boolean Field_2_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FBB59441211C886__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6FBB59441211C886__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FBB59441211C886_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FBB59441211C886_ONCREATE_OFFSET))(this);
	}

	::System::Void Update(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6FBB59441211C886_UPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_C145705A054F47D2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6FBB59441211C886_METHOD_2_C145705A054F47D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_C145705A054F47D2_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6FBB59441211C886_METHOD_2_C145705A054F47D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_E1152AED493A6AF7(::Class_3_F33F9DC5F4112336* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F33F9DC5F4112336*))((::PBYTE)hIl2Cpp + CLASS_2_6FBB59441211C886_METHOD_2_E1152AED493A6AF7_OFFSET))(this, a1);
	}

	::System::Void Method_2_21E7A940533C61B3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6FBB59441211C886_METHOD_2_21E7A940533C61B3_OFFSET))(this, a1);
	}

	::System::Void Method_2_09A7DACAB84FF0AC(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6FBB59441211C886_METHOD_2_09A7DACAB84FF0AC_OFFSET))(this, a1);
	}

	::System::Void Method_2_46737F85CDB5E497(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6FBB59441211C886_METHOD_2_46737F85CDB5E497_OFFSET))(this, a1);
	}

	::System::Void Method_2_F293B8F6EC136895(::MoleMole::DynamicBoneGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::DynamicBoneGroup*))((::PBYTE)hIl2Cpp + CLASS_2_6FBB59441211C886_METHOD_2_F293B8F6EC136895_OFFSET))(this, a1);
	}

	::System::Void Method_2_50B28C24D28E0D3B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6FBB59441211C886_METHOD_2_50B28C24D28E0D3B_OFFSET))(this, a1);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FBB59441211C886_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FBB59441211C886_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_F5B4708E7805566C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FBB59441211C886_METHOD_2_F5B4708E7805566C_OFFSET))(this);
	}

	::System::Int32 Method_2_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FBB59441211C886_METHOD_2_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Void Method_2_6BB86695870EFBD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FBB59441211C886_METHOD_2_6BB86695870EFBD1_OFFSET))(this);
	}

	::System::Void Method_2_B15FA47FBE35BA3F(::MoleMole::DynamicBoneGroup* a1, ::MoleMole::DynamicBoneGroup* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::DynamicBoneGroup*, ::MoleMole::DynamicBoneGroup*))((::PBYTE)hIl2Cpp + CLASS_2_6FBB59441211C886_METHOD_2_B15FA47FBE35BA3F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C171322AB8E99A59(::MoleMole::DynamicBoneGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::DynamicBoneGroup*))((::PBYTE)hIl2Cpp + CLASS_2_6FBB59441211C886_METHOD_2_C171322AB8E99A59_OFFSET))(this, a1);
	}

	::System::Void Method_2_0578F85BCC78EF51(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6FBB59441211C886_METHOD_2_0578F85BCC78EF51_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BFF96E989AC38879(::Class_3_F33F9DC5F4112336* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F33F9DC5F4112336*))((::PBYTE)hIl2Cpp + CLASS_2_6FBB59441211C886_METHOD_2_BFF96E989AC38879_OFFSET))(this, a1);
	}
};
