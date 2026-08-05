#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Plugins/Core/PathCore/ControlPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace DG::Tweening::Plugins::Core::PathCore { class Path; }

#define DG_TWEENING_PLUGINS_CORE_PATHCORE_ABSPATHDECODER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC6F840)

namespace DG::Tweening::Plugins::Core::PathCore
{
	inline static constexpr unsigned int ABSPathDecoder_TypeDefinitionIndex = 28576;

	class ABSPathDecoder : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_CORE_PATHCORE_ABSPATHDECODER__CTOR_OFFSET))(this);
		}
	};
}
