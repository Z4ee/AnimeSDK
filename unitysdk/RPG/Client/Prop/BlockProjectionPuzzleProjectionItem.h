#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BlockProjectionItemState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONITEM_SETPREVIEWSTATE_OFFSET UNITYSDK_OFFSET(0xDBE0250)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONITEM_SETSTATE_OFFSET UNITYSDK_OFFSET(0xDBE0DD0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xDBE0FF0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int BlockProjectionPuzzleProjectionItem_TypeDefinitionIndex = 77745;

	class BlockProjectionPuzzleProjectionItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::Prop::BlockProjectionItemState ItemState; // 0x18
		::System::Int32 x; // 0x1C
		::System::Int32 y; // 0x20
		::UnityEngine::Transform* _NormalItem; // 0x28
		::UnityEngine::Transform* _SuccessItem; // 0x30
		::Il2CppArray<::UnityEngine::Transform*>* _PointerItems; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONITEM__CTOR_OFFSET))(this);
		}

		::System::Void SetPreviewState(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONITEM_SETPREVIEWSTATE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetState(::RPG::Client::Prop::BlockProjectionItemState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::BlockProjectionItemState))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONITEM_SETSTATE_OFFSET))(this, a1);
		}
	};
}
