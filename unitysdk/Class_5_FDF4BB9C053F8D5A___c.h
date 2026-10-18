#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_412;
class Class_0_16E4307DCC419505_415;
namespace System { template <typename T> class Action_1; }

#define CLASS_5_FDF4BB9C053F8D5A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC3AB90)
#define CLASS_5_FDF4BB9C053F8D5A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC3ABD0)
#define CLASS_5_FDF4BB9C053F8D5A___C___ONPAUSEIMPLEMENT_B__6_0_OFFSET UNITYSDK_OFFSET(0x1EC3AD00)
#define CLASS_5_FDF4BB9C053F8D5A___C___ONRESUMEIMPLEMENT_B__7_0_OFFSET UNITYSDK_OFFSET(0x1EC3AE20)
#define CLASS_5_FDF4BB9C053F8D5A___C___ONSTOPREQUESTED_B__4_0_OFFSET UNITYSDK_OFFSET(0x1EC3ABE0)

inline static constexpr unsigned int Class_5_FDF4BB9C053F8D5A___c_TypeDefinitionIndex = 44198;

class Class_5_FDF4BB9C053F8D5A___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_0_16E4307DCC419505_412*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::Class_0_16E4307DCC419505_412*>**)Il2CppClass::FromTypeDefinitionIndex(Class_5_FDF4BB9C053F8D5A___c_TypeDefinitionIndex)->GetStaticField(0x47510);
	}
	static ::System::Action_1<::Class_0_16E4307DCC419505_415*>** StaticGet___9__7_0()
	{
		return (::System::Action_1<::Class_0_16E4307DCC419505_415*>**)Il2CppClass::FromTypeDefinitionIndex(Class_5_FDF4BB9C053F8D5A___c_TypeDefinitionIndex)->GetStaticField(0x47518);
	}
	static ::Class_5_FDF4BB9C053F8D5A___c** StaticGet___9()
	{
		return (::Class_5_FDF4BB9C053F8D5A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_5_FDF4BB9C053F8D5A___c_TypeDefinitionIndex)->GetStaticField(0x47520);
	}
	static ::System::Action_1<::Class_0_16E4307DCC419505_415*>** StaticGet___9__6_0()
	{
		return (::System::Action_1<::Class_0_16E4307DCC419505_415*>**)Il2CppClass::FromTypeDefinitionIndex(Class_5_FDF4BB9C053F8D5A___c_TypeDefinitionIndex)->GetStaticField(0x47528);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_5_FDF4BB9C053F8D5A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_FDF4BB9C053F8D5A___C__CTOR_OFFSET))(this);
	}

	::System::Void __OnStopRequested_b__4_0(::Class_0_16E4307DCC419505_412* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_412*))((::PBYTE)hIl2Cpp + CLASS_5_FDF4BB9C053F8D5A___C___ONSTOPREQUESTED_B__4_0_OFFSET))(this, a1);
	}

	::System::Void __OnPauseImplement_b__6_0(::Class_0_16E4307DCC419505_415* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_415*))((::PBYTE)hIl2Cpp + CLASS_5_FDF4BB9C053F8D5A___C___ONPAUSEIMPLEMENT_B__6_0_OFFSET))(this, a1);
	}

	::System::Void __OnResumeImplement_b__7_0(::Class_0_16E4307DCC419505_415* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_415*))((::PBYTE)hIl2Cpp + CLASS_5_FDF4BB9C053F8D5A___C___ONRESUMEIMPLEMENT_B__7_0_OFFSET))(this, a1);
	}
};
