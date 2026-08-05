#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ChessboardGlitchConfig; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CHESSBOARDEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x14366F50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ChessboardEffectConfig_TypeDefinitionIndex = 71442;

	class ChessboardEffectConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Tuple_2<::MoleMole::Config::ScreenEffectType, ::System::String*>*>* effects; // 0x10
		::MoleMole::Config::ChessboardGlitchConfig* glitchConfig; // 0x18
		::System::String* soundTrigger; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHESSBOARDEFFECTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
