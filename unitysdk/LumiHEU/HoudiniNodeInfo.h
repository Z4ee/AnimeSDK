#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define LUMIHEU_HOUDININODEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x16A75CA0)

namespace LumiHEU
{
	inline static constexpr unsigned int HoudiniNodeInfo_TypeDefinitionIndex = 47375;

	class HoudiniNodeInfo : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 Id; // 0x18
		::System::Int32 RootId; // 0x1C
		::System::Int32 IsEmptyGO; // 0x20
		::System::String* Type; // 0x28
		::System::String* DisplayName; // 0x30
		::UnityEngine::Vector3 Position; // 0x38
		::System::String* Script; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LUMIHEU_HOUDININODEINFO__CTOR_OFFSET))(this);
		}
	};
}
