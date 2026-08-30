#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define CHARACTERLINELIGHTGROUP_CLASS_1_6B669866A7A95ADE__CTOR_OFFSET UNITYSDK_OFFSET(0xDDAA4C0)

inline static constexpr unsigned int CharacterLineLightGroup_Class_1_6B669866A7A95ADE_TypeDefinitionIndex = 47924;

class CharacterLineLightGroup_Class_1_6B669866A7A95ADE : public ::System::Object
{
public:
	::UnityEngine::Transform* NGGEBBDBPLC; // 0x10
	::UnityEngine::Vector3 EDGBMAMBBNM; // 0x18
	::System::Int32 FKMABDEDNHO; // 0x24
	::UnityEngine::Vector3 LHLDIPIMOML; // 0x28
	::System::Single BCLLNPOPCIM; // 0x34
	::UnityEngine::Color BNAIPPHEIJO; // 0x38
	::UnityEngine::Vector3 KHOECFJFKIB; // 0x48
	::System::Int32 CBAOEKFNHLH; // 0x54
	::UnityEngine::Vector3 OAIEPPNKEHA; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_CLASS_1_6B669866A7A95ADE__CTOR_OFFSET))(this);
	}
};
