#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline { class RuntimeMaterialInfo; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_CLASS_1_89615FBFC7EC5696_METHOD_1_14142C2B6724F68E_OFFSET UNITYSDK_OFFSET(0x167C1FC0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_CLASS_1_89615FBFC7EC5696__CTOR_OFFSET UNITYSDK_OFFSET(0x167C1FB0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RuntimeMaterialCompRecorderInfo_Class_1_89615FBFC7EC5696_TypeDefinitionIndex = 40869;

	class RuntimeMaterialCompRecorderInfo_Class_1_89615FBFC7EC5696 : public ::System::Object
	{
	public:
		::UnityEngine::Material* Field_1_0; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_CLASS_1_89615FBFC7EC5696__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_14142C2B6724F68E(::MoleMole::Timeline::RuntimeMaterialInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Timeline::RuntimeMaterialInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_CLASS_1_89615FBFC7EC5696_METHOD_1_14142C2B6724F68E_OFFSET))(this, a1);
		}
	};
}
