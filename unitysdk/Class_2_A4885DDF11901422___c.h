#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_133;
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_A4885DDF11901422___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18DBDB50)
#define CLASS_2_A4885DDF11901422___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18DBDB90)
#define CLASS_2_A4885DDF11901422___C__SWITCHACIVEPATHES_B__4_0_OFFSET UNITYSDK_OFFSET(0x18DBDC80)
#define CLASS_2_A4885DDF11901422___C__SWITCHACIVEPATHES_B__4_1_OFFSET UNITYSDK_OFFSET(0x18DBDC90)
#define CLASS_2_A4885DDF11901422___C__SWITCHACTIVEPATH_B__2_0_OFFSET UNITYSDK_OFFSET(0x18DBDBA0)
#define CLASS_2_A4885DDF11901422___C__UNLOCKAVATARPATH_B__3_1_OFFSET UNITYSDK_OFFSET(0x18DBDC10)

inline static constexpr unsigned int Class_2_A4885DDF11901422___c_TypeDefinitionIndex = 59991;

class Class_2_A4885DDF11901422___c : public ::System::Object
{
public:
	static ::System::Action_1<::System::Exception*>** StaticGet___9__4_1()
	{
		return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A4885DDF11901422___c_TypeDefinitionIndex)->GetStaticField(0x5FE60);
	}
	static ::System::Action_1<::Class_1_D17272E82AE804C2_133*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::Class_1_D17272E82AE804C2_133*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A4885DDF11901422___c_TypeDefinitionIndex)->GetStaticField(0x5FE68);
	}
	static ::System::Action_1<::System::Exception*>** StaticGet___9__3_1()
	{
		return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A4885DDF11901422___c_TypeDefinitionIndex)->GetStaticField(0x5FE70);
	}
	static ::Class_2_A4885DDF11901422___c** StaticGet___9()
	{
		return (::Class_2_A4885DDF11901422___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A4885DDF11901422___c_TypeDefinitionIndex)->GetStaticField(0x5FE78);
	}
	static ::System::Action_1<::System::Exception*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A4885DDF11901422___c_TypeDefinitionIndex)->GetStaticField(0x5FE80);
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
