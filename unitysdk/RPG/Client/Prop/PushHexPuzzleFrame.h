#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/HexPuzzleItemBase.h"
#include "unitysdk/RPG/Client/Prop/PushHexColor.h"

namespace RPG::Client::Prop { class PuzzleBoardBase; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_PROP_PUSHHEXPUZZLEFRAME_INIT_OFFSET UNITYSDK_OFFSET(0xDCFCBC0)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEFRAME_METHOD_7_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0xDCFE470)
#define RPG_CLIENT_PROP_PUSHHEXPUZZLEFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0xDCFE730)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PushHexPuzzleFrame_TypeDefinitionIndex = 78148;

	class PushHexPuzzleFrame : public ::RPG::Client::Prop::HexPuzzleItemBase
	{
	public:
		::RPG::Client::Prop::PushHexColor Color; // 0x30
		::UnityEngine::Material* ColorRed; // 0x38
		::UnityEngine::Material* ColorBlue; // 0x40
		::UnityEngine::Material* ColorGreen; // 0x48
		::UnityEngine::Material* ColorYellow; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEFRAME__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::Prop::PuzzleBoardBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PuzzleBoardBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEFRAME_INIT_OFFSET))(this, a1);
		}

		::System::Void Method_7_F5447CD65612575D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUSHHEXPUZZLEFRAME_METHOD_7_F5447CD65612575D_OFFSET))(this);
		}
	};
}
