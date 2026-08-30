#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::Prop { class LightRubikCubePuzzleBlockData; }
namespace RPG::Client::Prop { class LightRubikCubePuzzleCube; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBLOCK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1611B3A0)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBLOCK_INITBLOCK_OFFSET UNITYSDK_OFFSET(0x1611B3E0)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBLOCK_LOGICROTATETATUMX_OFFSET UNITYSDK_OFFSET(0x1611B990)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBLOCK_LOGICROTATETATUMY_OFFSET UNITYSDK_OFFSET(0x1611BA30)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBLOCK_LOGICROTATETATUMZ_OFFSET UNITYSDK_OFFSET(0x1611BAD0)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBLOCK_REFRESHLIGHTSTATUS_OFFSET UNITYSDK_OFFSET(0x1611B4B0)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBLOCK_SETSELECT_OFFSET UNITYSDK_OFFSET(0x1611B930)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1611BB70)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int LightRubikCubePuzzleBlock_TypeDefinitionIndex = 78206;

	class LightRubikCubePuzzleBlock : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* SelectObj; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* LightObj; // 0x20
		::RPG::Client::Prop::LightRubikCubePuzzleBlockData* Data; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* ColorMaterial; // 0x30
		::Il2CppArray<::System::Int32>* LightStatus; // 0x38
		::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x40
		::RPG::Client::Prop::LightRubikCubePuzzleCube* FNHJKBEIKOA; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBLOCK__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBLOCK_DISPOSE_OFFSET))(this);
		}

		::System::Void InitBlock(::RPG::GameCore::GameEntity* a1, ::RPG::Client::Prop::LightRubikCubePuzzleCube* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::Prop::LightRubikCubePuzzleCube*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBLOCK_INITBLOCK_OFFSET))(this, a1, a2);
		}

		::System::Void RefreshLightStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBLOCK_REFRESHLIGHTSTATUS_OFFSET))(this);
		}

		::System::Void SetSelect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBLOCK_SETSELECT_OFFSET))(this, a1);
		}

		::System::Void LogicRotateTatumX(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBLOCK_LOGICROTATETATUMX_OFFSET))(this, a1);
		}

		::System::Void LogicRotateTatumY(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBLOCK_LOGICROTATETATUMY_OFFSET))(this, a1);
		}

		::System::Void LogicRotateTatumZ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLEBLOCK_LOGICROTATETATUMZ_OFFSET))(this, a1);
		}
	};
}
