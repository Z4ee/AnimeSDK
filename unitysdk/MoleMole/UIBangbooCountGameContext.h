#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole::GalGame { class MainCityChatShowUIConfig_OnCloseWithIndex; }
namespace System { class String; }

#define MOLEMOLE_UIBANGBOOCOUNTGAMECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1929C1C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooCountGameContext_TypeDefinitionIndex = 62974;

	class UIBangbooCountGameContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* ConfigCameraBezierSurface; // 0x28
		::MoleMole::GalGame::MainCityChatShowUIConfig_OnCloseWithIndex* OnClose; // 0x30
		::System::UInt32 CountDownSeconds; // 0x38
		::System::Boolean IsHideCameraMove; // 0x3C
		::System::Int32 MainCityGameUIConfigGameID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOCOUNTGAMECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
