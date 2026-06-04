#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_4D01A2E7B479D8DE.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/BlendMode.h"

class Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47;
namespace RPG::Client { class LineGlowLightMonoPlugin; }
namespace ScenenLightManager { class BaseComponentExportData; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }

#define CLASS_4_E87F0EF9CD288BB9_GETTYPEID_OFFSET UNITYSDK_OFFSET(0xA463D60)
#define CLASS_4_E87F0EF9CD288BB9_METHOD_4_1F6BEEF5B2E21D39_OFFSET UNITYSDK_OFFSET(0xA462740)
#define CLASS_4_E87F0EF9CD288BB9_METHOD_4_3C56C1AF247AC1EC_OFFSET UNITYSDK_OFFSET(0xA463AA0)
#define CLASS_4_E87F0EF9CD288BB9_METHOD_4_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xA464480)
#define CLASS_4_E87F0EF9CD288BB9_METHOD_4_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0xA4644E0)
#define CLASS_4_E87F0EF9CD288BB9_METHOD_4_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0xA464540)
#define CLASS_4_E87F0EF9CD288BB9_METHOD_4_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA464420)
#define CLASS_4_E87F0EF9CD288BB9_METHOD_4_74B53E9267CE3010_OFFSET UNITYSDK_OFFSET(0xA462990)
#define CLASS_4_E87F0EF9CD288BB9_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA463A40)
#define CLASS_4_E87F0EF9CD288BB9_METHOD_4_9A91A67DCFAFF737_OFFSET UNITYSDK_OFFSET(0xA462AA0)
#define CLASS_4_E87F0EF9CD288BB9_METHOD_4_9E68EE8376A1076F_OFFSET UNITYSDK_OFFSET(0xA462950)
#define CLASS_4_E87F0EF9CD288BB9_METHOD_4_C38AA259F0B46320_OFFSET UNITYSDK_OFFSET(0xA463770)
#define CLASS_4_E87F0EF9CD288BB9_METHOD_4_CC99BBFAC9417CA7_OFFSET UNITYSDK_OFFSET(0xA463110)
#define CLASS_4_E87F0EF9CD288BB9_METHOD_4_DF3C54A5ADEABAF1_OFFSET UNITYSDK_OFFSET(0xA462430)
#define CLASS_4_E87F0EF9CD288BB9_ONBEGINSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0xA464050)
#define CLASS_4_E87F0EF9CD288BB9_ONENDSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0xA4640A0)
#define CLASS_4_E87F0EF9CD288BB9_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0xA464130)
#define CLASS_4_E87F0EF9CD288BB9_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0xA463FA0)
#define CLASS_4_E87F0EF9CD288BB9_ONUNSERIALIZEFINISH_OFFSET UNITYSDK_OFFSET(0xA463F60)
#define CLASS_4_E87F0EF9CD288BB9_TICK_OFFSET UNITYSDK_OFFSET(0xA463B50)
#define CLASS_4_E87F0EF9CD288BB9_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0xA463DB0)
#define CLASS_4_E87F0EF9CD288BB9__CCTOR_OFFSET UNITYSDK_OFFSET(0xA464340)
#define CLASS_4_E87F0EF9CD288BB9__CTOR_OFFSET UNITYSDK_OFFSET(0xA464330)
#define CLASS_4_E87F0EF9CD288BB9___IFIXBASEPROXY_ONBEGINSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0xA4646C0)
#define CLASS_4_E87F0EF9CD288BB9___IFIXBASEPROXY_ONENDSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0xA464720)
#define CLASS_4_E87F0EF9CD288BB9___IFIXBASEPROXY_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0xA464780)
#define CLASS_4_E87F0EF9CD288BB9___IFIXBASEPROXY_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0xA464660)
#define CLASS_4_E87F0EF9CD288BB9___IFIXBASEPROXY_ONUNSERIALIZEFINISH_OFFSET UNITYSDK_OFFSET(0xA464600)
#define CLASS_4_E87F0EF9CD288BB9___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xA4645A0)

inline static constexpr unsigned int Class_4_E87F0EF9CD288BB9_TypeDefinitionIndex = 66203;

class Class_4_E87F0EF9CD288BB9 : public ::Class_3_4D01A2E7B479D8DE
{
public:
	static ::Il2CppArray<::UnityEngine::Rendering::BlendMode>** StaticGet_Field_4_0()
	{
		return (::Il2CppArray<::UnityEngine::Rendering::BlendMode>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_E87F0EF9CD288BB9_TypeDefinitionIndex)->GetStaticField(0x59380);
	}
	static ::Il2CppArray<::UnityEngine::Rendering::BlendMode>** StaticGet_Field_4_1()
	{
		return (::Il2CppArray<::UnityEngine::Rendering::BlendMode>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_E87F0EF9CD288BB9_TypeDefinitionIndex)->GetStaticField(0x59388);
	}
	static ::UnityEngine::Material** StaticGet_Field_4_2()
	{
		return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Class_4_E87F0EF9CD288BB9_TypeDefinitionIndex)->GetStaticField(0x59390);
	}
	::UnityEngine::Material* Field_4_3; // 0x48
	::UnityEngine::MeshFilter* Field_4_4; // 0x50
	::UnityEngine::MeshRenderer* Field_4_5; // 0x58
	::UnityEngine::Mesh* Field_4_6; // 0x60
	::UnityEngine::Material* Field_4_7; // 0x68
	::UnityEngine::Color Field_4_8; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E87F0EF9CD288BB9__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_E87F0EF9CD288BB9__CCTOR_OFFSET))();
	}

	::System::Void Method_4_DF3C54A5ADEABAF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E87F0EF9CD288BB9_METHOD_4_DF3C54A5ADEABAF1_OFFSET))(this);
	}

	::System::Void Method_4_74B53E9267CE3010(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_E87F0EF9CD288BB9_METHOD_4_74B53E9267CE3010_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_1F6BEEF5B2E21D39(::UnityEngine::Material* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_4_E87F0EF9CD288BB9_METHOD_4_1F6BEEF5B2E21D39_OFFSET))(this, a1);
	}

	::System::Void Method_4_C38AA259F0B46320()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E87F0EF9CD288BB9_METHOD_4_C38AA259F0B46320_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E87F0EF9CD288BB9_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_4_3C56C1AF247AC1EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E87F0EF9CD288BB9_METHOD_4_3C56C1AF247AC1EC_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_E87F0EF9CD288BB9_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_4_CC99BBFAC9417CA7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E87F0EF9CD288BB9_METHOD_4_CC99BBFAC9417CA7_OFFSET))(this);
	}

	::UnityEngine::Mesh* Method_4_9A91A67DCFAFF737(::System::Single a1)
	{
		return ((::UnityEngine::Mesh*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_E87F0EF9CD288BB9_METHOD_4_9A91A67DCFAFF737_OFFSET))(this, a1);
	}

	::System::Int32 GetTypeID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E87F0EF9CD288BB9_GETTYPEID_OFFSET))(this);
	}

	::System::Void UnserializeAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1, ::ScenenLightManager::BaseComponentExportData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + CLASS_4_E87F0EF9CD288BB9_UNSERIALIZEASYNC_OFFSET))(this, a1, a2);
	}

	::System::Void OnUnserializeFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E87F0EF9CD288BB9_ONUNSERIALIZEFINISH_OFFSET))(this);
	}

	::System::Void OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_4_E87F0EF9CD288BB9_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
	}

	::System::Void OnBeginSceneLightFading(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_4_E87F0EF9CD288BB9_ONBEGINSCENELIGHTFADING_OFFSET))(this, a1);
	}

	::System::Void OnEndSceneLightFading(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_4_E87F0EF9CD288BB9_ONENDSCENELIGHTFADING_OFFSET))(this, a1);
	}

	::System::Void OnObjectEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E87F0EF9CD288BB9_ONOBJECTENABLE_OFFSET))(this);
	}

	::RPG::Client::LineGlowLightMonoPlugin* Method_4_9E68EE8376A1076F()
	{
		return ((::RPG::Client::LineGlowLightMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E87F0EF9CD288BB9_METHOD_4_9E68EE8376A1076F_OFFSET))(this);
	}

	::System::Void Method_4_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E87F0EF9CD288BB9_METHOD_4_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_4_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E87F0EF9CD288BB9_METHOD_4_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_4_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E87F0EF9CD288BB9_METHOD_4_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void Method_4_5790A55946AA509D_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E87F0EF9CD288BB9_METHOD_4_5790A55946AA509D_3_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_E87F0EF9CD288BB9___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnUnserializeFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E87F0EF9CD288BB9___IFIXBASEPROXY_ONUNSERIALIZEFINISH_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_4_E87F0EF9CD288BB9___IFIXBASEPROXY_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_OnBeginSceneLightFading(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_4_E87F0EF9CD288BB9___IFIXBASEPROXY_ONBEGINSCENELIGHTFADING_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnEndSceneLightFading(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_4_E87F0EF9CD288BB9___IFIXBASEPROXY_ONENDSCENELIGHTFADING_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnObjectEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E87F0EF9CD288BB9___IFIXBASEPROXY_ONOBJECTENABLE_OFFSET))(this);
	}
};
