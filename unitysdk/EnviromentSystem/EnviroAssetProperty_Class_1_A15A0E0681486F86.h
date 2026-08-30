#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Object; }

#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_CLASS_1_A15A0E0681486F86__CTOR_OFFSET UNITYSDK_OFFSET(0x152F7EC0)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroAssetProperty_Class_1_A15A0E0681486F86_TypeDefinitionIndex = 50041;

	class EnviroAssetProperty_Class_1_A15A0E0681486F86 : public ::System::Object
	{
	public:
		::System::String* CDMFNHJGGKF; // 0x10
		::UnityEngine::Object* JLMLMKIEMKA; // 0x18
		::System::Int32 DBDIHPKHGGE; // 0x20

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_CLASS_1_A15A0E0681486F86__CTOR_OFFSET))(this, a1);
		}
	};
}
