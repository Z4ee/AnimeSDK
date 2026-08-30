#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_133;
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_A4885DDF11901422___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB994EE0)
#define CLASS_2_A4885DDF11901422___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB994F20)
#define CLASS_2_A4885DDF11901422___C__SWITCHACIVEPATHES_B__4_0_OFFSET UNITYSDK_OFFSET(0xB995010)
#define CLASS_2_A4885DDF11901422___C__SWITCHACIVEPATHES_B__4_1_OFFSET UNITYSDK_OFFSET(0xB995020)
#define CLASS_2_A4885DDF11901422___C__SWITCHACTIVEPATH_B__2_0_OFFSET UNITYSDK_OFFSET(0xB994F30)
#define CLASS_2_A4885DDF11901422___C__UNLOCKAVATARPATH_B__3_1_OFFSET UNITYSDK_OFFSET(0xB994FA0)

inline static constexpr unsigned int Class_2_A4885DDF11901422___c_TypeDefinitionIndex = 62837;

class Class_2_A4885DDF11901422___c : public ::System::Object
{
public:
	static ::Class_2_A4885DDF11901422___c** StaticGet___9()
	{
		return (::Class_2_A4885DDF11901422___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A4885DDF11901422___c_TypeDefinitionIndex)->GetStaticField(0x2FBB0);
	}
	static ::System::Action_1<::System::Exception*>** StaticGet___9__3_1()
	{
		return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A4885DDF11901422___c_TypeDefinitionIndex)->GetStaticField(0x2FBB8);
	}
	static ::System::Action_1<::Class_1_D17272E82AE804C2_133*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::Class_1_D17272E82AE804C2_133*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A4885DDF11901422___c_TypeDefinitionIndex)->GetStaticField(0x2FBC0);
	}
	static ::System::Action_1<::System::Exception*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A4885DDF11901422___c_TypeDefinitionIndex)->GetStaticField(0x2FBC8);
	}
	static ::System::Action_1<::System::Exception*>** StaticGet___9__4_1()
	{
		return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A4885DDF11901422___c_TypeDefinitionIndex)->GetStaticField(0x2FBD0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A4885DDF11901422___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4885DDF11901422___C__CTOR_OFFSET))(this);
	}

	::System::Void _SwitchActivePath_b__2_0(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_A4885DDF11901422___C__SWITCHACTIVEPATH_B__2_0_OFFSET))(this, a1);
	}

	::System::Void _UnlockAvatarPath_b__3_1(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_A4885DDF11901422___C__UNLOCKAVATARPATH_B__3_1_OFFSET))(this, a1);
	}

	::System::Void _SwitchAcivePathes_b__4_0(::Class_1_D17272E82AE804C2_133* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_133*))((::PBYTE)hIl2Cpp + CLASS_2_A4885DDF11901422___C__SWITCHACIVEPATHES_B__4_0_OFFSET))(this, a1);
	}

	::System::Void _SwitchAcivePathes_b__4_1(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_A4885DDF11901422___C__SWITCHACIVEPATHES_B__4_1_OFFSET))(this, a1);
	}
};
