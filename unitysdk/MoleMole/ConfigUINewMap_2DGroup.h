#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6A96CF8852C977C2.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGUINEWMAP_2DGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x153E14D0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUINewMap_2DGroup_TypeDefinitionIndex = 57958;

	class ConfigUINewMap_2DGroup : public ::System::Object
	{
	public:
		::System::Single StartScale; // 0x10
		::System::Single EndScale; // 0x14
		::UnityEngine::AnimationCurve* ScaleCurve; // 0x18
		::System::Single UIStartScale; // 0x20
		::System::Single UIEndScale; // 0x24
		::UnityEngine::AnimationCurve* UIIconScaleCurve; // 0x28
		::System::Collections::Generic::List_1<::Enum_3_6A96CF8852C977C2>* ActiveUIIcon; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUINEWMAP_2DGROUP__CTOR_OFFSET))(this);
		}
	};
}
