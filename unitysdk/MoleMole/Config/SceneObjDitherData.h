#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int SceneObjDitherData_TypeDefinitionIndex = 67872;

	struct alignas(4) SceneObjDitherData
	{
		static ::MoleMole::Config::SceneObjDitherData* StaticGet_Default()
		{
			return (::MoleMole::Config::SceneObjDitherData*)Il2CppClass::FromTypeDefinitionIndex(SceneObjDitherData_TypeDefinitionIndex)->GetStaticField(0x10EE0);
		}
		::System::Single SceneObjDitherMin; // 0x10
		::System::Single fadeInTime; // 0x14
		::System::Single fadeOutTime; // 0x18
		::UnityEngine::Vector3 CamColliderSize; // 0x1C
	};
}
