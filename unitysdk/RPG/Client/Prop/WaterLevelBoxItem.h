#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BoxmanCoord.h"
#include "unitysdk/RPG/Client/Prop/BoxmanDir.h"
#include "unitysdk/RPG/Client/Prop/BoxmanItemType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Prop { class WaterLevelBoxman; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }

#define RPG_CLIENT_PROP_WATERLEVELBOXITEM_METHOD_5_8FA0679D147955F9_OFFSET UNITYSDK_OFFSET(0xAEF8500)
#define RPG_CLIENT_PROP_WATERLEVELBOXITEM_METHOD_5_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xAEF87E0)
#define RPG_CLIENT_PROP_WATERLEVELBOXITEM_METHOD_5_F9725EED05F07EC1_OFFSET UNITYSDK_OFFSET(0xAEF8690)
#define RPG_CLIENT_PROP_WATERLEVELBOXITEM_MOVE_OFFSET UNITYSDK_OFFSET(0xAEF8200)
#define RPG_CLIENT_PROP_WATERLEVELBOXITEM_REFERSHPOSITION_OFFSET UNITYSDK_OFFSET(0xAEF8910)
#define RPG_CLIENT_PROP_WATERLEVELBOXITEM_RESET_OFFSET UNITYSDK_OFFSET(0xAEF88C0)
#define RPG_CLIENT_PROP_WATERLEVELBOXITEM_SETBOXSELECT_OFFSET UNITYSDK_OFFSET(0xAEF8590)
#define RPG_CLIENT_PROP_WATERLEVELBOXITEM__CCTOR_OFFSET UNITYSDK_OFFSET(0xAEF8A70)
#define RPG_CLIENT_PROP_WATERLEVELBOXITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xAEF8A60)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WaterLevelBoxItem_TypeDefinitionIndex = 72408;

	class WaterLevelBoxItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_9()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterLevelBoxItem_TypeDefinitionIndex)->GetStaticField(0x4740);
		}
		::RPG::Client::Prop::WaterLevelBoxman* Board; // 0x18
		::RPG::Client::Prop::BoxmanCoord Coord; // 0x20
		::System::String* OptionTextmapID; // 0x28
		::RPG::Client::Prop::BoxmanItemType ItemType; // 0x30
		::System::Single YOffset; // 0x34
		::RPG::Client::Prop::BoxmanCoord ResetCoord; // 0x38
		::System::Boolean IsInActiveWaterLevelState; // 0x40
		::UnityEngine::Vector3 Field_5_7; // 0x44
		::System::Single Speed; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXITEM__CCTOR_OFFSET))();
		}

		::System::Void Move(::RPG::Client::Prop::BoxmanDir a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::BoxmanDir))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXITEM_MOVE_OFFSET))(this, a1);
		}

		::System::Void SetBoxSelect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXITEM_SETBOXSELECT_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_F9725EED05F07EC1(::RPG::Client::Prop::BoxmanDir a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::BoxmanDir))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXITEM_METHOD_5_F9725EED05F07EC1_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* Method_5_8FA0679D147955F9(::RPG::Client::Prop::BoxmanDir a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::RPG::Client::Prop::BoxmanDir))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXITEM_METHOD_5_8FA0679D147955F9_OFFSET))(this, a1);
		}

		::System::Void Method_5_A239DF324AF4215D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXITEM_METHOD_5_A239DF324AF4215D_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXITEM_RESET_OFFSET))(this);
		}

		::System::Void RefershPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXITEM_REFERSHPOSITION_OFFSET))(this);
		}
	};
}
