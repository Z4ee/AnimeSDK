#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MOLEMOLE_MONO2DMAPDATA_ICONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x161FC920)

namespace MoleMole
{
	inline static constexpr unsigned int Mono2dMapData_IconInfo_TypeDefinitionIndex = 67191;

	class Mono2dMapData_IconInfo : public ::System::Object
	{
	public:
		::System::Int32 Id; // 0x10
		::UnityEngine::Vector2 PosOffset; // 0x14
		::System::Single IconScale; // 0x1C
		::System::Int32 EffectType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO2DMAPDATA_ICONINFO__CTOR_OFFSET))(this);
		}
	};
}
