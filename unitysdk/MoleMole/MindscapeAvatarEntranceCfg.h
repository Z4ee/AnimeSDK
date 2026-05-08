#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MINDSCAPEAVATARENTRANCECFG__CTOR_OFFSET UNITYSDK_OFFSET(0x1781C310)

namespace MoleMole
{
	inline static constexpr unsigned int MindscapeAvatarEntranceCfg_TypeDefinitionIndex = 52299;

	class MindscapeAvatarEntranceCfg : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* avatarIdList; // 0x10
		::System::Single Hue; // 0x18
		::System::Single Saturation; // 0x1C
		::System::Single Brightness; // 0x20
		::System::Single Gamma; // 0x24
		::UnityEngine::Color UpColor; // 0x28
		::UnityEngine::Color DownColor; // 0x38
		::UnityEngine::Color NumBColor; // 0x48
		::System::Single GradientOffsetVertical; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINDSCAPEAVATARENTRANCECFG__CTOR_OFFSET))(this);
		}
	};
}
