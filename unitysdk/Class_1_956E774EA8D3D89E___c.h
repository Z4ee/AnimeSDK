#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1ABDF1855FCDB08F;
class Class_1_1BD847A31AE58508;
class Class_1_21BD3AD2A1214F1C;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_956E774EA8D3D89E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB87F870)
#define CLASS_1_956E774EA8D3D89E___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB87F8B0)
#define CLASS_1_956E774EA8D3D89E___C__GET_TUTORIALDRAGTARGET_B__66_0_OFFSET UNITYSDK_OFFSET(0xB87F8C0)
#define CLASS_1_956E774EA8D3D89E___C__RPG_CLIENT_MECHCRAFT_VIEWMODEL_IMECHCRAFTCRAFTEDITVIEWMODEL_GET_ISTUTORIALGUIDING_B__68_0_OFFSET UNITYSDK_OFFSET(0xB87F8D0)
#define CLASS_1_956E774EA8D3D89E___C___REFRESHCANCLEAR_B__157_0_OFFSET UNITYSDK_OFFSET(0xB87F8E0)

inline static constexpr unsigned int Class_1_956E774EA8D3D89E___c_TypeDefinitionIndex = 79501;

class Class_1_956E774EA8D3D89E___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_1BD847A31AE58508*, ::System::Boolean>** StaticGet___9__68_0()
	{
		return (::System::Func_2<::Class_1_1BD847A31AE58508*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_956E774EA8D3D89E___c_TypeDefinitionIndex)->GetStaticField(0x5D610);
	}
	static ::System::Func_2<::Class_1_1BD847A31AE58508*, ::Class_1_21BD3AD2A1214F1C*>** StaticGet___9__66_0()
	{
		return (::System::Func_2<::Class_1_1BD847A31AE58508*, ::Class_1_21BD3AD2A1214F1C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_956E774EA8D3D89E___c_TypeDefinitionIndex)->GetStaticField(0x5D618);
	}
	static ::System::Func_2<::Class_1_1ABDF1855FCDB08F*, ::System::Boolean>** StaticGet___9__157_0()
	{
		return (::System::Func_2<::Class_1_1ABDF1855FCDB08F*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_956E774EA8D3D89E___c_TypeDefinitionIndex)->GetStaticField(0x5D620);
	}
	static ::Class_1_956E774EA8D3D89E___c** StaticGet___9()
	{
		return (::Class_1_956E774EA8D3D89E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_956E774EA8D3D89E___c_TypeDefinitionIndex)->GetStaticField(0x5D628);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_956E774EA8D3D89E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_956E774EA8D3D89E___C__CTOR_OFFSET))(this);
	}

	::Class_1_21BD3AD2A1214F1C* _get_TutorialDragTarget_b__66_0(::Class_1_1BD847A31AE58508* a1)
	{
		return ((::Class_1_21BD3AD2A1214F1C*(*)(::PVOID, ::Class_1_1BD847A31AE58508*))((::PBYTE)hIl2Cpp + CLASS_1_956E774EA8D3D89E___C__GET_TUTORIALDRAGTARGET_B__66_0_OFFSET))(this, a1);
	}

	::System::Boolean _RPG_Client_MechCraft_ViewModel_IMechCraftCraftEditViewModel_get_IsTutorialGuiding_b__68_0(::Class_1_1BD847A31AE58508* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1BD847A31AE58508*))((::PBYTE)hIl2Cpp + CLASS_1_956E774EA8D3D89E___C__RPG_CLIENT_MECHCRAFT_VIEWMODEL_IMECHCRAFTCRAFTEDITVIEWMODEL_GET_ISTUTORIALGUIDING_B__68_0_OFFSET))(this, a1);
	}

	::System::Boolean __RefreshCanClear_b__157_0(::Class_1_1ABDF1855FCDB08F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1ABDF1855FCDB08F*))((::PBYTE)hIl2Cpp + CLASS_1_956E774EA8D3D89E___C___REFRESHCANCLEAR_B__157_0_OFFSET))(this, a1);
	}
};
