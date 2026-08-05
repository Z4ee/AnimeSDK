#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataAliveType.h"
#include "unitysdk/MoleMole/HollowChessboard/ShowEntryType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_CONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x13844930)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int SceneAnimRenderSection_Config_TypeDefinitionIndex = 52705;

	class SceneAnimRenderSection_Config : public ::System::Object
	{
	public:
		::System::String* key; // 0x10
		::System::Int32 soundID; // 0x18
		::System::Boolean sync; // 0x1C
		::System::Boolean RecordTextureSheetFrameIndex; // 0x1D
		::MoleMole::HollowChessboard::ShowEntryType type; // 0x20
		::System::Nullable_1<::MoleMole::HollowChessboard::RenderDataAliveType> AliveType; // 0x24
		::System::Int32 animID; // 0x2C
		::System::Nullable_1<::System::Int32> tran; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_CONFIG__CTOR_OFFSET))(this);
		}
	};
}
