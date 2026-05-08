#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParticleDataTypeEnum.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }

#define PARTICLEBASEDATATYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x19080E20)

inline static constexpr unsigned int ParticleBaseDataType_TypeDefinitionIndex = 29507;

class ParticleBaseDataType : public ::System::Object
{
public:
	::System::String* name; // 0x10
	::System::Int32 shaderPropertyId; // 0x18
	::ParticleDataTypeEnum dataType; // 0x1C
	::Il2CppArray<::System::Single>* floatValues; // 0x20
	::Il2CppArray<::UnityEngine::Vector4>* vector4Values; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLEBASEDATATYPE__CTOR_OFFSET))(this);
	}
};
