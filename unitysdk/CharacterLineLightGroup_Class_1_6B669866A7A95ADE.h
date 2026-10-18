#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define CHARACTERLINELIGHTGROUP_CLASS_1_6B669866A7A95ADE__CTOR_OFFSET UNITYSDK_OFFSET(0xDCE2130)

inline static constexpr unsigned int CharacterLineLightGroup_Class_1_6B669866A7A95ADE_TypeDefinitionIndex = 47464;

class CharacterLineLightGroup_Class_1_6B669866A7A95ADE : public ::System::Object
{
public:
	::UnityEngine::Transform* NGGEBBDBPLC; // 0x10
	::UnityEngine::Vector3 OAIEPPNKEHA; // 0x18
	::UnityEngine::Color BNAIPPHEIJO; // 0x24
	::UnityEngine::Vector3 LHLDIPIMOML; // 0x34
	::System::Int32 FKMABDEDNHO; // 0x40
	::UnityEngine::Vector3 EDGBMAMBBNM; // 0x44
	::System::Single BCLLNPOPCIM; // 0x50
	::UnityEngine::Vector3 KHOECFJFKIB; // 0x54
	::System::Int32 CBAOEKFNHLH; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_CLASS_1_6B669866A7A95ADE__CTOR_OFFSET))(this);
	}
};
