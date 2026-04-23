#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }

#define PLANETSCCONTROL_CLEARRENDERERS_OFFSET UNITYSDK_OFFSET(0x9A32DD0)
#define PLANETSCCONTROL_COLLECTRENDERERS_OFFSET UNITYSDK_OFFSET(0x9A32CC0)
#define PLANETSCCONTROL_STARTCLIP_OFFSET UNITYSDK_OFFSET(0x9A32E40)
#define PLANETSCCONTROL_STOPCLIP_OFFSET UNITYSDK_OFFSET(0x9A330C0)
#define PLANETSCCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0x9A32800)
#define PLANETSCCONTROL__CCTOR_OFFSET UNITYSDK_OFFSET(0x9A33380)
#define PLANETSCCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x9A33320)

inline static constexpr unsigned int PLaneTSCControl_TypeDefinitionIndex = 44071;

class PLaneTSCControl : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Int32* StaticGet_Field_5_8()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PLaneTSCControl_TypeDefinitionIndex)->GetStaticField(0x6A60);
	}
	static ::System::Int32* StaticGet_Field_5_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PLaneTSCControl_TypeDefinitionIndex)->GetStaticField(0x6A64);
	}
	static ::System::Int32* StaticGet_Field_5_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PLaneTSCControl_TypeDefinitionIndex)->GetStaticField(0x6A68);
	}
	static ::System::Int32* StaticGet_Field_5_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PLaneTSCControl_TypeDefinitionIndex)->GetStaticField(0x6A6C);
	}
	::System::Single width; // 0x18
	::System::Single height; // 0x1C
	::UnityEngine::Color lineColor; // 0x20
	::System::Boolean drawNormal; // 0x30
	::System::Single normalLength; // 0x34
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* TargetObjects; // 0x38
	::UnityEngine::GameObject* ClipBlockRoot; // 0x40
	::System::Boolean Field_5_11; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANETSCCONTROL__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLANETSCCONTROL__CCTOR_OFFSET))();
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANETSCCONTROL_UPDATE_OFFSET))(this);
	}

	::System::Void CollectRenderers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANETSCCONTROL_COLLECTRENDERERS_OFFSET))(this);
	}

	::System::Void ClearRenderers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANETSCCONTROL_CLEARRENDERERS_OFFSET))(this);
	}

	::System::Void startClip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANETSCCONTROL_STARTCLIP_OFFSET))(this);
	}

	::System::Void stopClip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANETSCCONTROL_STOPCLIP_OFFSET))(this);
	}
};
