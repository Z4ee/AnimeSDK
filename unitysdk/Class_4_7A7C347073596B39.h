#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_4D01A2E7B479D8DE.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/BlendMode.h"

class Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB;
namespace RPG::Client { class LineGlowLightMonoPlugin; }
namespace ScenenLightManager { class BaseComponentExportData; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }

#define CLASS_4_7A7C347073596B39_GETTYPEID_OFFSET UNITYSDK_OFFSET(0x115FDE20)
#define CLASS_4_7A7C347073596B39_METHOD_4_03C4FFAD29DE0852_OFFSET UNITYSDK_OFFSET(0x115FC510)
#define CLASS_4_7A7C347073596B39_METHOD_4_071850D2764E9D4C_OFFSET UNITYSDK_OFFSET(0x115FD250)
#define CLASS_4_7A7C347073596B39_METHOD_4_20FFB454FEEDDC86_OFFSET UNITYSDK_OFFSET(0x115FCA10)
#define CLASS_4_7A7C347073596B39_METHOD_4_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x115FE520)
#define CLASS_4_7A7C347073596B39_METHOD_4_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x115FE580)
#define CLASS_4_7A7C347073596B39_METHOD_4_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0x115FE5E0)
#define CLASS_4_7A7C347073596B39_METHOD_4_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x115FE4C0)
#define CLASS_4_7A7C347073596B39_METHOD_4_6112A1276899AF0F_OFFSET UNITYSDK_OFFSET(0x115FD860)
#define CLASS_4_7A7C347073596B39_METHOD_4_74B53E9267CE3010_OFFSET UNITYSDK_OFFSET(0x115FCA50)
#define CLASS_4_7A7C347073596B39_METHOD_4_847FE1E8693369EC_OFFSET UNITYSDK_OFFSET(0x115FC810)
#define CLASS_4_7A7C347073596B39_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x115FDB10)
#define CLASS_4_7A7C347073596B39_METHOD_4_9A91A67DCFAFF737_OFFSET UNITYSDK_OFFSET(0x115FCB60)
#define CLASS_4_7A7C347073596B39_METHOD_4_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0x115FDB70)
#define CLASS_4_7A7C347073596B39_ONBEGINSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x115FE0E0)
#define CLASS_4_7A7C347073596B39_ONENDSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x115FE130)
#define CLASS_4_7A7C347073596B39_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0x115FE1C0)
#define CLASS_4_7A7C347073596B39_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x115FE030)
#define CLASS_4_7A7C347073596B39_ONUNSERIALIZEFINISH_OFFSET UNITYSDK_OFFSET(0x115FDFF0)
#define CLASS_4_7A7C347073596B39_TICK_OFFSET UNITYSDK_OFFSET(0x115FDC20)
#define CLASS_4_7A7C347073596B39_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x115FDE70)
#define CLASS_4_7A7C347073596B39__CCTOR_OFFSET UNITYSDK_OFFSET(0x115FE3C0)
#define CLASS_4_7A7C347073596B39__CTOR_OFFSET UNITYSDK_OFFSET(0x115FE3B0)
#define CLASS_4_7A7C347073596B39___IFIXBASEPROXY_ONBEGINSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x115FE780)
#define CLASS_4_7A7C347073596B39___IFIXBASEPROXY_ONENDSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x115FE7F0)
#define CLASS_4_7A7C347073596B39___IFIXBASEPROXY_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0x115FE860)
#define CLASS_4_7A7C347073596B39___IFIXBASEPROXY_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x115FE710)
#define CLASS_4_7A7C347073596B39___IFIXBASEPROXY_ONUNSERIALIZEFINISH_OFFSET UNITYSDK_OFFSET(0x115FE6B0)
#define CLASS_4_7A7C347073596B39___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x115FE640)

inline static constexpr unsigned int Class_4_7A7C347073596B39_TypeDefinitionIndex = 57989;

class Class_4_7A7C347073596B39 : public ::Class_3_4D01A2E7B479D8DE
{
public:
	static ::Il2CppArray<::UnityEngine::Rendering::BlendMode>** StaticGet_Field_4_0()
	{
		return (::Il2CppArray<::UnityEngine::Rendering::BlendMode>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_7A7C347073596B39_TypeDefinitionIndex)->GetStaticField(0x45A20);
	}
	static ::UnityEngine::Material** StaticGet_Field_4_7()
	{
		return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Class_4_7A7C347073596B39_TypeDefinitionIndex)->GetStaticField(0x45A28);
	}
	static ::Il2CppArray<::UnityEngine::Rendering::BlendMode>** StaticGet_Field_4_1()
	{
		return (::Il2CppArray<::UnityEngine::Rendering::BlendMode>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_7A7C347073596B39_TypeDefinitionIndex)->GetStaticField(0x45A30);
	}
	::UnityEngine::MeshFilter* Field_4_4; // 0x48
	::UnityEngine::MeshRenderer* Field_4_5; // 0x50
	::UnityEngine::Material* Field_4_8; // 0x58
	::UnityEngine::Material* Field_4_2; // 0x60
	::UnityEngine::Mesh* Field_4_3; // 0x68
	::UnityEngine::Color Field_4_6; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7A7C347073596B39__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_7A7C347073596B39__CCTOR_OFFSET))();
	}

	::System::Void Method_4_03C4FFAD29DE0852()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7A7C347073596B39_METHOD_4_03C4FFAD29DE0852_OFFSET))(this);
	}

	::System::Void Method_4_74B53E9267CE3010(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_7A7C347073596B39_METHOD_4_74B53E9267CE3010_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_847FE1E8693369EC(::UnityEngine::Material* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_4_7A7C347073596B39_METHOD_4_847FE1E8693369EC_OFFSET))(this, a1);
	}

	::System::Void Method_4_6112A1276899AF0F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7A7C347073596B39_METHOD_4_6112A1276899AF0F_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7A7C347073596B39_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_4_D0CD9A971CA3B1CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7A7C347073596B39_METHOD_4_D0CD9A971CA3B1CF_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_7A7C347073596B39_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_4_071850D2764E9D4C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7A7C347073596B39_METHOD_4_071850D2764E9D4C_OFFSET))(this);
	}

	::UnityEngine::Mesh* Method_4_9A91A67DCFAFF737(::System::Single a1)
	{
		return ((::UnityEngine::Mesh*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_7A7C347073596B39_METHOD_4_9A91A67DCFAFF737_OFFSET))(this, a1);
	}

	::System::Int32 GetTypeID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7A7C347073596B39_GETTYPEID_OFFSET))(this);
	}

	::System::Void UnserializeAsync(::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB* a1, ::ScenenLightManager::BaseComponentExportData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + CLASS_4_7A7C347073596B39_UNSERIALIZEASYNC_OFFSET))(this, a1, a2);
	}

	::System::Void OnUnserializeFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7A7C347073596B39_ONUNSERIALIZEFINISH_OFFSET))(this);
	}

	::System::Void OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_4_7A7C347073596B39_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
	}

	::System::Void OnBeginSceneLightFading(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_4_7A7C347073596B39_ONBEGINSCENELIGHTFADING_OFFSET))(this, a1);
	}

	::System::Void OnEndSceneLightFading(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_4_7A7C347073596B39_ONENDSCENELIGHTFADING_OFFSET))(this, a1);
	}

	::System::Void OnObjectEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7A7C347073596B39_ONOBJECTENABLE_OFFSET))(this);
	}

	::RPG::Client::LineGlowLightMonoPlugin* Method_4_20FFB454FEEDDC86()
	{
		return ((::RPG::Client::LineGlowLightMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7A7C347073596B39_METHOD_4_20FFB454FEEDDC86_OFFSET))(this);
	}

	::System::Void Method_4_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7A7C347073596B39_METHOD_4_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_4_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7A7C347073596B39_METHOD_4_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_4_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7A7C347073596B39_METHOD_4_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void Method_4_5790A55946AA509D_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7A7C347073596B39_METHOD_4_5790A55946AA509D_3_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_7A7C347073596B39___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnUnserializeFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7A7C347073596B39___IFIXBASEPROXY_ONUNSERIALIZEFINISH_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnSceneLightFading(::System::Single P0, ::ScenenLightManager::FadingState P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_4_7A7C347073596B39___IFIXBASEPROXY_ONSCENELIGHTFADING_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_OnBeginSceneLightFading(::ScenenLightManager::FadingState P0)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_4_7A7C347073596B39___IFIXBASEPROXY_ONBEGINSCENELIGHTFADING_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnEndSceneLightFading(::ScenenLightManager::FadingState P0)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_4_7A7C347073596B39___IFIXBASEPROXY_ONENDSCENELIGHTFADING_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnObjectEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7A7C347073596B39___IFIXBASEPROXY_ONOBJECTENABLE_OFFSET))(this);
	}
};
