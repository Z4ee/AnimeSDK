#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define CHARACTERLINELIGHTGROUP_CLASS_1_6B669866A7A95ADE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A86DE80)

inline static constexpr unsigned int CharacterLineLightGroup_Class_1_6B669866A7A95ADE_TypeDefinitionIndex = 47924;

class CharacterLineLightGroup_Class_1_6B669866A7A95ADE : public ::System::Object
{
public:
	::UnityEngine::Transform* NGGEBBDBPLC; // 0x10
	::System::Int32 FKMABDEDNHO; // 0x18
	::UnityEngine::Vector3 OAIEPPNKEHA; // 0x1C
	::System::Single BCLLNPOPCIM; // 0x28
	::System::Int32 CBAOEKFNHLH; // 0x2C
	::UnityEngine::Vector3 KHOECFJFKIB; // 0x30
	::UnityEngine::Vector3 LHLDIPIMOML; // 0x3C
	::UnityEngine::Color BNAIPPHEIJO; // 0x48
	::UnityEngine::Vector3 EDGBMAMBBNM; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_CLASS_1_6B669866A7A95ADE__CTOR_OFFSET))(this);
	}
};
