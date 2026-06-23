#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/TextureSheetStruct.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_175B5875BC5A4D3B;
class UGUIMeshRender;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOUITEXTURESHEETPLAYER_AWAKE_OFFSET UNITYSDK_OFFSET(0x10D73620)
#define MOLEMOLE_MONOUITEXTURESHEETPLAYER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10D73BE0)
#define MOLEMOLE_MONOUITEXTURESHEETPLAYER_STARTPLAYTEXTURESHEET_OFFSET UNITYSDK_OFFSET(0x10D73670)
#define MOLEMOLE_MONOUITEXTURESHEETPLAYER_UPDATE_OFFSET UNITYSDK_OFFSET(0x10D73CC0)
#define MOLEMOLE_MONOUITEXTURESHEETPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x10D73D20)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUITextureSheetPlayer_TypeDefinitionIndex = 77690;

	class MonoUITextureSheetPlayer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UGUIMeshRender* targetRenderer; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::TextureSheetStruct>* sheetList; // 0x20
		::Class_2_175B5875BC5A4D3B* player; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITEXTURESHEETPLAYER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITEXTURESHEETPLAYER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITEXTURESHEETPLAYER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITEXTURESHEETPLAYER_UPDATE_OFFSET))(this);
		}

		::System::Void StartPlayTextureSheet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITEXTURESHEETPLAYER_STARTPLAYTEXTURESHEET_OFFSET))(this);
		}
	};
}
