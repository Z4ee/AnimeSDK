#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/DefaultMatType.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }

#define RPG_CUSTOMRP_CRPSCRIPTABLERENDERDATA_GETDEFAULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x181184B0)
#define RPG_CUSTOMRP_CRPSCRIPTABLERENDERDATA_GETDEFAULTSHADER_OFFSET UNITYSDK_OFFSET(0x181184C0)
#define RPG_CUSTOMRP_CRPSCRIPTABLERENDERDATA_GET_ISINVALIDATED_OFFSET UNITYSDK_OFFSET(0x181184D0)
#define RPG_CUSTOMRP_CRPSCRIPTABLERENDERDATA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18118500)
#define RPG_CUSTOMRP_CRPSCRIPTABLERENDERDATA_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x181184F0)
#define RPG_CUSTOMRP_CRPSCRIPTABLERENDERDATA_RELOADRES_OFFSET UNITYSDK_OFFSET(0x18118490)
#define RPG_CUSTOMRP_CRPSCRIPTABLERENDERDATA_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x181184A0)
#define RPG_CUSTOMRP_CRPSCRIPTABLERENDERDATA_SET_ISINVALIDATED_OFFSET UNITYSDK_OFFSET(0x181184E0)
#define RPG_CUSTOMRP_CRPSCRIPTABLERENDERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18118480)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPScriptableRenderData_TypeDefinitionIndex = 35241;

	class CRPScriptableRenderData : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Boolean _isInvalidated_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPSCRIPTABLERENDERDATA__CTOR_OFFSET))(this);
		}

		::System::Void ReloadRes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPSCRIPTABLERENDERDATA_RELOADRES_OFFSET))(this);
		}

		::System::Void SetDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPSCRIPTABLERENDERDATA_SETDIRTY_OFFSET))(this);
		}

		::UnityEngine::Material* GetDefaultMaterial(::RPG::CustomRP::DefaultMatType materialType)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::RPG::CustomRP::DefaultMatType))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPSCRIPTABLERENDERDATA_GETDEFAULTMATERIAL_OFFSET))(this, materialType);
		}

		::UnityEngine::Shader* GetDefaultShader()
		{
			return ((::UnityEngine::Shader*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPSCRIPTABLERENDERDATA_GETDEFAULTSHADER_OFFSET))(this);
		}

		::System::Boolean get_isInvalidated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPSCRIPTABLERENDERDATA_GET_ISINVALIDATED_OFFSET))(this);
		}

		::System::Void set_isInvalidated(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPSCRIPTABLERENDERDATA_SET_ISINVALIDATED_OFFSET))(this, value);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPSCRIPTABLERENDERDATA_ONVALIDATE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPSCRIPTABLERENDERDATA_ONENABLE_OFFSET))(this);
		}
	};
}
