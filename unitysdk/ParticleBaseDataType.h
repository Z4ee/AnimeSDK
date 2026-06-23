#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParticleDataTypeEnum.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }

#define PARTICLEBASEDATATYPE_GETSHADERPROPERTYID_OFFSET UNITYSDK_OFFSET(0x1AEBD270)
#define PARTICLEBASEDATATYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEBD2E0)

inline static constexpr unsigned int ParticleBaseDataType_TypeDefinitionIndex = 27028;

class ParticleBaseDataType : public ::System::Object
{
public:
	::System::String* name; // 0x10
	::System::String* shaderPropertyName; // 0x18
	::ParticleDataTypeEnum dataType; // 0x20
	::Il2CppArray<::System::Single>* floatValues; // 0x28
	::Il2CppArray<::UnityEngine::Vector4>* vector4Values; // 0x30
	::System::Int32 cachedShaderPropertyId; // 0x38
	::System::Boolean hasCachedShaderPropertyId; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLEBASEDATATYPE__CTOR_OFFSET))(this);
	}

	::System::Int32 GetShaderPropertyId()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLEBASEDATATYPE_GETSHADERPROPERTYID_OFFSET))(this);
	}
};
