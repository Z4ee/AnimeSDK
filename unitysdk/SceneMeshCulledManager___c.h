#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class SceneMeshCulledManager_MyTrigger;
namespace System { template <typename T1, typename T2> class Func_2; }

#define SCENEMESHCULLEDMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A514D40)
#define SCENEMESHCULLEDMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A514D80)
#define SCENEMESHCULLEDMANAGER___C__INVISBLEMESH_B__14_0_OFFSET UNITYSDK_OFFSET(0x1A514D90)

inline static constexpr unsigned int SceneMeshCulledManager___c_TypeDefinitionIndex = 72642;

class SceneMeshCulledManager___c : public ::System::Object
{
public:
	static ::SceneMeshCulledManager___c** StaticGet___9()
	{
		return (::SceneMeshCulledManager___c**)Il2CppClass::FromTypeDefinitionIndex(SceneMeshCulledManager___c_TypeDefinitionIndex)->GetStaticField(0x41EB0);
	}
	static ::System::Func_2<::SceneMeshCulledManager_MyTrigger*, ::System::Boolean>** StaticGet___9__14_0()
	{
		return (::System::Func_2<::SceneMeshCulledManager_MyTrigger*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(SceneMeshCulledManager___c_TypeDefinitionIndex)->GetStaticField(0x41EB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SCENEMESHCULLEDMANAGER___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEMESHCULLEDMANAGER___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _invisbleMesh_b__14_0(::SceneMeshCulledManager_MyTrigger* item)
	{
		return ((::System::Boolean(*)(::PVOID, ::SceneMeshCulledManager_MyTrigger*))((::PBYTE)hIl2Cpp + SCENEMESHCULLEDMANAGER___C__INVISBLEMESH_B__14_0_OFFSET))(this, item);
	}
};
