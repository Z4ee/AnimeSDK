#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessboardPathLink.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CHESSBOARDPATHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19295610)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ChessboardPathConfig_TypeDefinitionIndex = 53078;

	class ChessboardPathConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::ChessboardPathLink, ::System::Int32>* PathLinkResDictStamina; // 0x10
		::System::Collections::Generic::Dictionary_2<::MoleMole::ChessboardPathLink, ::System::Int32>* PathLinkResDict; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHESSBOARDPATHCONFIG__CTOR_OFFSET))(this);
		}
	};
}
