#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

namespace RPG::Client::DynamicFloatingObject { class DynamicFloatingObject; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define CLASS_3_D9DAF5014A6CC08C_METHOD_3_06A2B758FCB8A24E_OFFSET UNITYSDK_OFFSET(0x1A08D980)
#define CLASS_3_D9DAF5014A6CC08C_METHOD_3_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x1A08D6C0)
#define CLASS_3_D9DAF5014A6CC08C_METHOD_3_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0x1A08DB90)
#define CLASS_3_D9DAF5014A6CC08C_METHOD_3_5D3D37F2BAE9FB65_OFFSET UNITYSDK_OFFSET(0x1A08D440)
#define CLASS_3_D9DAF5014A6CC08C_METHOD_3_93E6B8A6D29521ED_OFFSET UNITYSDK_OFFSET(0x1A08D330)
#define CLASS_3_D9DAF5014A6CC08C_METHOD_3_A40475C44AA8CEAB_OFFSET UNITYSDK_OFFSET(0x1A08DD80)
#define CLASS_3_D9DAF5014A6CC08C_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A08D630)
#define CLASS_3_D9DAF5014A6CC08C_METHOD_3_F28B321E148538D1_OFFSET UNITYSDK_OFFSET(0x1A08DF10)
#define CLASS_3_D9DAF5014A6CC08C_METHOD_3_F5447CD65612575D_1_OFFSET UNITYSDK_OFFSET(0x1A08D7C0)
#define CLASS_3_D9DAF5014A6CC08C_METHOD_3_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x1A08D670)
#define CLASS_3_D9DAF5014A6CC08C_TICK_OFFSET UNITYSDK_OFFSET(0x1A08D810)
#define CLASS_3_D9DAF5014A6CC08C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A08E0C0)
#define CLASS_3_D9DAF5014A6CC08C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A08E080)

inline static constexpr unsigned int Class_3_D9DAF5014A6CC08C_TypeDefinitionIndex = 73466;

class Class_3_D9DAF5014A6CC08C : public ::RPG::Client::TABehaviorBase
{
public:
	static ::System::Int32* StaticGet_DCGFLBMJPCA()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_D9DAF5014A6CC08C_TypeDefinitionIndex)->GetStaticField(0x13D50);
	}
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* IGIKHHKHBKD; // 0x38
	::RPG::Client::DynamicFloatingObject::DynamicFloatingObject* DILGJEAEKGL; // 0x40
	::System::Boolean KKCFCJFAAKA; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D9DAF5014A6CC08C__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D9DAF5014A6CC08C__CCTOR_OFFSET))();
	}

	::System::Void Method_3_93E6B8A6D29521ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D9DAF5014A6CC08C_METHOD_3_93E6B8A6D29521ED_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D9DAF5014A6CC08C_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D9DAF5014A6CC08C_METHOD_3_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Method_3_F5447CD65612575D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D9DAF5014A6CC08C_METHOD_3_F5447CD65612575D_1_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D9DAF5014A6CC08C_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D9DAF5014A6CC08C_METHOD_3_151E25A63D14DDB0_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::Material*>* Method_3_F28B321E148538D1(::UnityEngine::GameObject* a1)
	{
		return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_D9DAF5014A6CC08C_METHOD_3_F28B321E148538D1_OFFSET))(this, a1);
	}

	::System::Void Method_3_06A2B758FCB8A24E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D9DAF5014A6CC08C_METHOD_3_06A2B758FCB8A24E_OFFSET))(this);
	}

	::System::Void Method_3_5D3D37F2BAE9FB65()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D9DAF5014A6CC08C_METHOD_3_5D3D37F2BAE9FB65_OFFSET))(this);
	}

	::System::Void Method_3_2566AD459572DFC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D9DAF5014A6CC08C_METHOD_3_2566AD459572DFC3_OFFSET))(this);
	}

	::System::Void Method_3_A40475C44AA8CEAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D9DAF5014A6CC08C_METHOD_3_A40475C44AA8CEAB_OFFSET))(this);
	}
};
