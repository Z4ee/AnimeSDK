#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BE136E515AF9A61_1.h"

class Class_2_E1DC3D0DDD796244;

#define CLASS_2_430FB4DC3D1ED274_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17F06AB0)
#define CLASS_2_430FB4DC3D1ED274_METHOD_2_0414B7E68ABA5085_OFFSET UNITYSDK_OFFSET(0x17F081E0)
#define CLASS_2_430FB4DC3D1ED274_METHOD_2_BBF4A547D7671F86_OFFSET UNITYSDK_OFFSET(0x17F07B10)
#define CLASS_2_430FB4DC3D1ED274_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17F081A0)
#define CLASS_2_430FB4DC3D1ED274_METHOD_2_D545E2F706415F81_OFFSET UNITYSDK_OFFSET(0x17F06BF0)
#define CLASS_2_430FB4DC3D1ED274__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F080C0)
#define CLASS_2_430FB4DC3D1ED274__CTOR_OFFSET UNITYSDK_OFFSET(0x17F06A90)
#define CLASS_2_430FB4DC3D1ED274___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17F08120)

inline static constexpr unsigned int Class_2_430FB4DC3D1ED274_TypeDefinitionIndex = 38725;

class Class_2_430FB4DC3D1ED274 : public ::Class_1_5BE136E515AF9A61_1
{
public:
	static ::System::Int32* StaticGet_Field_2_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_430FB4DC3D1ED274_TypeDefinitionIndex)->GetStaticField(0x64A0);
	}
	static ::System::Int32* StaticGet_Field_2_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_430FB4DC3D1ED274_TypeDefinitionIndex)->GetStaticField(0x64A4);
	}
	static ::System::Int32* StaticGet_Field_2_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_430FB4DC3D1ED274_TypeDefinitionIndex)->GetStaticField(0x64A8);
	}
	::Class_2_E1DC3D0DDD796244* Field_2_0; // 0x18
	::System::Single Field_2_1; // 0x20
	::System::Single Field_2_2; // 0x24

	::System::Void _ctor(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_430FB4DC3D1ED274__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_430FB4DC3D1ED274__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_430FB4DC3D1ED274_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_D545E2F706415F81()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_430FB4DC3D1ED274_METHOD_2_D545E2F706415F81_OFFSET))(this);
	}

	::System::Void Method_2_BBF4A547D7671F86(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_430FB4DC3D1ED274_METHOD_2_BBF4A547D7671F86_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_430FB4DC3D1ED274___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_430FB4DC3D1ED274_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_0414B7E68ABA5085(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_430FB4DC3D1ED274_METHOD_2_0414B7E68ABA5085_OFFSET))(this, P0);
	}
};
