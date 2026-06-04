#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

namespace RPG::Client::DynamicFloatingObject { class DynamicFloatingObject; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define CLASS_3_A333FF8FA6912697_METHOD_3_06A2B758FCB8A24E_OFFSET UNITYSDK_OFFSET(0xB042D90)
#define CLASS_3_A333FF8FA6912697_METHOD_3_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xB042AD0)
#define CLASS_3_A333FF8FA6912697_METHOD_3_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0xB042FA0)
#define CLASS_3_A333FF8FA6912697_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xB043570)
#define CLASS_3_A333FF8FA6912697_METHOD_3_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0xB0435D0)
#define CLASS_3_A333FF8FA6912697_METHOD_3_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0xB043630)
#define CLASS_3_A333FF8FA6912697_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xB043510)
#define CLASS_3_A333FF8FA6912697_METHOD_3_5D3D37F2BAE9FB65_OFFSET UNITYSDK_OFFSET(0xB042850)
#define CLASS_3_A333FF8FA6912697_METHOD_3_93E6B8A6D29521ED_OFFSET UNITYSDK_OFFSET(0xB042740)
#define CLASS_3_A333FF8FA6912697_METHOD_3_A40475C44AA8CEAB_OFFSET UNITYSDK_OFFSET(0xB043190)
#define CLASS_3_A333FF8FA6912697_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB042A40)
#define CLASS_3_A333FF8FA6912697_METHOD_3_F28B321E148538D1_OFFSET UNITYSDK_OFFSET(0xB043320)
#define CLASS_3_A333FF8FA6912697_METHOD_3_F5447CD65612575D_1_OFFSET UNITYSDK_OFFSET(0xB042BD0)
#define CLASS_3_A333FF8FA6912697_METHOD_3_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0xB042A80)
#define CLASS_3_A333FF8FA6912697_TICK_OFFSET UNITYSDK_OFFSET(0xB042C20)
#define CLASS_3_A333FF8FA6912697__CCTOR_OFFSET UNITYSDK_OFFSET(0xB0434D0)
#define CLASS_3_A333FF8FA6912697__CTOR_OFFSET UNITYSDK_OFFSET(0xB043490)
#define CLASS_3_A333FF8FA6912697___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xB043690)

inline static constexpr unsigned int Class_3_A333FF8FA6912697_TypeDefinitionIndex = 68669;

class Class_3_A333FF8FA6912697 : public ::RPG::Client::TABehaviorBase
{
public:
	static ::System::Int32* StaticGet_Field_3_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_A333FF8FA6912697_TypeDefinitionIndex)->GetStaticField(0xF910);
	}
	::RPG::Client::DynamicFloatingObject::DynamicFloatingObject* Field_3_1; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_3_2; // 0x40
	::System::Boolean Field_3_3; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A333FF8FA6912697__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_A333FF8FA6912697__CCTOR_OFFSET))();
	}

	::System::Void Method_3_93E6B8A6D29521ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A333FF8FA6912697_METHOD_3_93E6B8A6D29521ED_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A333FF8FA6912697_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A333FF8FA6912697_METHOD_3_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Method_3_F5447CD65612575D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A333FF8FA6912697_METHOD_3_F5447CD65612575D_1_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_A333FF8FA6912697_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A333FF8FA6912697_METHOD_3_151E25A63D14DDB0_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::Material*>* Method_3_F28B321E148538D1(::UnityEngine::GameObject* a1)
	{
		return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_A333FF8FA6912697_METHOD_3_F28B321E148538D1_OFFSET))(this, a1);
	}

	::System::Void Method_3_06A2B758FCB8A24E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A333FF8FA6912697_METHOD_3_06A2B758FCB8A24E_OFFSET))(this);
	}

	::System::Void Method_3_5D3D37F2BAE9FB65()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A333FF8FA6912697_METHOD_3_5D3D37F2BAE9FB65_OFFSET))(this);
	}

	::System::Void Method_3_2566AD459572DFC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A333FF8FA6912697_METHOD_3_2566AD459572DFC3_OFFSET))(this);
	}

	::System::Void Method_3_A40475C44AA8CEAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A333FF8FA6912697_METHOD_3_A40475C44AA8CEAB_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A333FF8FA6912697_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A333FF8FA6912697_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A333FF8FA6912697_METHOD_3_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A333FF8FA6912697_METHOD_3_5790A55946AA509D_3_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_A333FF8FA6912697___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
