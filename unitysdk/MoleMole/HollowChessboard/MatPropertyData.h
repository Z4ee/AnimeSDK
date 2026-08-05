#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/MatPropertyData_Value.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/ShaderPropertyType.h"

namespace System { class String; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_HOLLOWCHESSBOARD_MATPROPERTYDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x19B29960)
#define MOLEMOLE_HOLLOWCHESSBOARD_MATPROPERTYDATA_GET_SHADERPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x19B29940)
#define MOLEMOLE_HOLLOWCHESSBOARD_MATPROPERTYDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0x19B29970)
#define MOLEMOLE_HOLLOWCHESSBOARD_MATPROPERTYDATA_SET_SHADERPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x19B29950)
#define MOLEMOLE_HOLLOWCHESSBOARD_MATPROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19B294F0)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int MatPropertyData_TypeDefinitionIndex = 54934;

	class MatPropertyData : public ::System::Object
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::UnityEngine::Rendering::ShaderPropertyType _ShaderPropertyType_k__BackingField; // 0x18
		::System::Boolean NeedSave; // 0x1C

		::System::Void _ctor(::UnityEngine::Rendering::ShaderPropertyType shaderPropertyType, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ShaderPropertyType, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_MATPROPERTYDATA__CTOR_OFFSET))(this, shaderPropertyType, name);
		}

		::UnityEngine::Rendering::ShaderPropertyType get_ShaderPropertyType()
		{
			return ((::UnityEngine::Rendering::ShaderPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_MATPROPERTYDATA_GET_SHADERPROPERTYTYPE_OFFSET))(this);
		}

		::System::Void set_ShaderPropertyType(::UnityEngine::Rendering::ShaderPropertyType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ShaderPropertyType))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_MATPROPERTYDATA_SET_SHADERPROPERTYTYPE_OFFSET))(this, value);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_MATPROPERTYDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_MATPROPERTYDATA_SET_NAME_OFFSET))(this, value);
		}
	};
}
