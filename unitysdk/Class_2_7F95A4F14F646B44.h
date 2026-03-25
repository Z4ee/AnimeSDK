#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectPluginTargetHeadIcon; }
namespace System { class String; }
namespace UnityEngine { class Texture; }

#define CLASS_2_7F95A4F14F646B44_METHOD_2_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0x104DBF00)
#define CLASS_2_7F95A4F14F646B44_METHOD_2_D8DA10A34EF74509_OFFSET UNITYSDK_OFFSET(0x104DBF50)
#define CLASS_2_7F95A4F14F646B44_METHOD_2_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x104DBAC0)
#define CLASS_2_7F95A4F14F646B44_METHOD_2_E1BD81089CEF27A0_OFFSET UNITYSDK_OFFSET(0x104DBFC0)
#define CLASS_2_7F95A4F14F646B44_METHOD_2_EC25E6BA54B118A1_OFFSET UNITYSDK_OFFSET(0x104DBC40)
#define CLASS_2_7F95A4F14F646B44__CCTOR_OFFSET UNITYSDK_OFFSET(0x104DC230)
#define CLASS_2_7F95A4F14F646B44__CTOR_OFFSET UNITYSDK_OFFSET(0x104DC220)

inline static constexpr unsigned int Class_2_7F95A4F14F646B44_TypeDefinitionIndex = 57183;

class Class_2_7F95A4F14F646B44 : public ::RPG::Client::BehaviorBase
{
public:
	static ::System::String** StaticGet_Field_2_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7F95A4F14F646B44_TypeDefinitionIndex)->GetStaticField(0x14E80);
	}
	::System::String* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F95A4F14F646B44__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7F95A4F14F646B44__CCTOR_OFFSET))();
	}

	::System::Void Method_2_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F95A4F14F646B44_METHOD_2_DDA8A2337932DF10_OFFSET))(this);
	}

	::System::Void Method_2_092CD57850778EFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F95A4F14F646B44_METHOD_2_092CD57850778EFC_OFFSET))(this);
	}

	::System::String* Method_2_EC25E6BA54B118A1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F95A4F14F646B44_METHOD_2_EC25E6BA54B118A1_OFFSET))(this);
	}

	::System::Void Method_2_E1BD81089CEF27A0(::UnityEngine::Texture* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + CLASS_2_7F95A4F14F646B44_METHOD_2_E1BD81089CEF27A0_OFFSET))(this, a1);
	}

	::RPG::Client::MonoEffectPluginTargetHeadIcon* Method_2_D8DA10A34EF74509()
	{
		return ((::RPG::Client::MonoEffectPluginTargetHeadIcon*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F95A4F14F646B44_METHOD_2_D8DA10A34EF74509_OFFSET))(this);
	}
};
