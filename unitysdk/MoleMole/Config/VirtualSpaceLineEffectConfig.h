#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/ChessboardView/LineInfo_LineType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_VIRTUALSPACELINEEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x110362D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int VirtualSpaceLineEffectConfig_TypeDefinitionIndex = 59075;

	class VirtualSpaceLineEffectConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::ChessboardView::LineInfo_LineType, ::System::String*>* effectPath; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VIRTUALSPACELINEEFFECTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
