#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_AttributeOwner.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_StorageType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_OUTPUTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B44EF20)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_OutputAttribute_TypeDefinitionIndex = 39131;

	class HEU_OutputAttribute : public ::System::Object
	{
	public:
		::System::String* _name; // 0x10
		::HoudiniEngineUnity::HAPI_AttributeOwner _class; // 0x18
		::HoudiniEngineUnity::HAPI_StorageType _type; // 0x1C
		::System::Int32 _count; // 0x20
		::System::Int32 _tupleSize; // 0x24
		::Il2CppArray<::System::Int32>* _intValues; // 0x28
		::Il2CppArray<::System::Single>* _floatValues; // 0x30
		::Il2CppArray<::System::String*>* _stringValues; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OUTPUTATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
