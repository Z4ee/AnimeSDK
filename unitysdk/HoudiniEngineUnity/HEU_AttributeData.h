#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_AttributeInfo.h"
#include "unitysdk/HoudiniEngineUnity/HEU_AttributeData_AttributeState.h"
#include "unitysdk/HoudiniEngineUnity/HEU_AttributeData_AttributeType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_ATTRIBUTEDATA_COPYVALUESTO_OFFSET UNITYSDK_OFFSET(0x8409E80)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTEDATA_ISCOLORATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x8409E10)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8409F70)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_AttributeData_TypeDefinitionIndex = 37647;

	class HEU_AttributeData : public ::System::Object
	{
	public:
		::HoudiniEngineUnity::HAPI_AttributeInfo _attributeInfo; // 0x10
		::System::String* _name; // 0x38
		::HoudiniEngineUnity::HEU_AttributeData_AttributeType _attributeType; // 0x40
		::Il2CppArray<::System::Int32>* _intValues; // 0x48
		::Il2CppArray<::System::Single>* _floatValues; // 0x50
		::Il2CppArray<::System::String*>* _stringValues; // 0x58
		::HoudiniEngineUnity::HEU_AttributeData_AttributeState _attributeState; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTEDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean IsColorAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTEDATA_ISCOLORATTRIBUTE_OFFSET))(this);
		}

		::System::Void CopyValuesTo(::HoudiniEngineUnity::HEU_AttributeData* destAttrData)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_AttributeData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTEDATA_COPYVALUESTO_OFFSET))(this, destAttrData);
		}
	};
}
