#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CHESSBOARDGICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1485BEE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ChessboardGIConfig_TypeDefinitionIndex = 44889;

	class ChessboardGIConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>* ChessboardGIReflectionCurves; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHESSBOARDGICONFIG__CTOR_OFFSET))(this);
		}
	};
}
