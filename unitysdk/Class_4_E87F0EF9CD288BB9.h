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

#define CLASS_4_E87F0EF9CD288BB9_GETTYPEID_OFFSET UNITYSDK_OFFSET(0x1846C790)
#define CLASS_4_E87F0EF9CD288BB9_METHOD_4_1F6BEEF5B2E21D39_OFFSET UNITYSDK_OFFSET(0x1846B190)
#define CLASS_4_E87F0EF9CD288BB9_METHOD_4_74B53E9267CE3010_OFFSET UNITYSDK_OFFSET(0x1846B3E0)
#define CLASS_4_E87F0EF9CD288BB9_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1846C470)
#define CLASS_4_E87F0EF9CD288BB9_METHOD_4_9A4624CDE3ED9C2E_OFFSET UNITYSDK_OFFSET(0x1846B4F0)
#define CLASS_4_E87F0EF9CD288BB9_METHOD_4_9E68EE8376A1076F_OFFSET UNITYSDK_OFFSET(0x1846B3A0)
#define CLASS_4_E87F0EF9CD288BB9_METHOD_4_C38AA259F0B46320_OFFSET UNITYSDK_OFFSET(0x1846C1A0)
#define CLASS_4_E87F0EF9CD288BB9_METHOD_4_CC99BBFAC9417CA7_OFFSET UNITYSDK_OFFSET(0x1846BB40)
#define CLASS_4_E87F0EF9CD288BB9_METHOD_4_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0x1846C4D0)
#define CLASS_4_E87F0EF9CD288BB9_METHOD_4_DF3C54A5ADEABAF1_OFFSET UNITYSDK_OFFSET(0x1846AE80)
#define CLASS_4_E87F0EF9CD288BB9_ONBEGINSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x1846CA80)
#define CLASS_4_E87F0EF9CD288BB9_ONENDSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x1846CAD0)
#define CLASS_4_E87F0EF9CD288BB9_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0x1846CB60)
#define CLASS_4_E87F0EF9CD288BB9_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x1846C9D0)
#define CLASS_4_E87F0EF9CD288BB9_ONUNSERIALIZEFINISH_OFFSET UNITYSDK_OFFSET(0x1846C990)
#define CLASS_4_E87F0EF9CD288BB9_TICK_OFFSET UNITYSDK_OFFSET(0x1846C580)
#define CLASS_4_E87F0EF9CD288BB9_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x1846C7E0)
#define CLASS_4_E87F0EF9CD288BB9__CCTOR_OFFSET UNITYSDK_OFFSET(0x1846CD70)
#define CLASS_4_E87F0EF9CD288BB9__CTOR_OFFSET UNITYSDK_OFFSET(0x1846CD60)

inline static constexpr unsigned int Class_4_E87F0EF9CD288BB9_TypeDefinitionIndex = 70751;

class Class_4_E87F0EF9CD288BB9 : public ::Class_3_4D01A2E7B479D8DE
{
public:
	static ::Il2CppArray<::UnityEngine::Rendering::BlendMode>** StaticGet_DHLANOMILKH()
	{
		return (::Il2CppArray<::UnityEngine::Rendering::BlendMode>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_E87F0EF9CD288BB9_TypeDefinitionIndex)->GetStaticField(0x665D0);
	}
	static ::Il2CppArray<::UnityEngine::Rendering::BlendMode>** StaticGet_AJDNIEDBIBP()
	{
		return (::Il2CppArray<::UnityEngine::Rendering::BlendMode>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_E87F0EF9CD288BB9_TypeDefinitionIndex)->GetStaticField(0x665D8);
	}
	static ::UnityEngine::Material** StaticGet_FNPPGFLOBDE()
	{
		return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Class_4_E87F0EF9CD288BB9_TypeDefinitionIndex)->GetStaticField(0x665E0);
	}
	::UnityEngine::Material* IMOHCDHKBAJ; // 0x48
	::UnityEngine::Material* GGPCNBKCPDF; // 0x50
	::UnityEngine::Mesh* BCHHLPKOMCK; // 0x58
	::UnityEngine::MeshRenderer* GFEHCONCNCA; // 0x60
	::UnityEngine::MeshFilter* FNDMMIEAEHF; // 0x68
	::UnityEngine::Color AFBLDLHBDDM; // 0x70

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

	::System::Void Method_4_D0CD9A971CA3B1CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E87F0EF9CD288BB9_METHOD_4_D0CD9A971CA3B1CF_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_E87F0EF9CD288BB9_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_4_CC99BBFAC9417CA7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E87F0EF9CD288BB9_METHOD_4_CC99BBFAC9417CA7_OFFSET))(this);
	}

	::UnityEngine::Mesh* Method_4_9A4624CDE3ED9C2E(::System::Single a1)
	{
		return ((::UnityEngine::Mesh*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_E87F0EF9CD288BB9_METHOD_4_9A4624CDE3ED9C2E_OFFSET))(this, a1);
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
};
