#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Object; }

#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_CLASS_1_A15A0E0681486F86__CTOR_OFFSET UNITYSDK_OFFSET(0x13580F00)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroAssetProperty_Class_1_A15A0E0681486F86_TypeDefinitionIndex = 46795;

	class EnviroAssetProperty_Class_1_A15A0E0681486F86 : public ::System::Object
	{
	public:
		::UnityEngine::Object* Field_1_0; // 0x10
		::System::String* Field_1_1; // 0x18
		::System::Int32 Field_1_2; // 0x20

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_CLASS_1_A15A0E0681486F86__CTOR_OFFSET))(this, a1);
		}
	};
}
