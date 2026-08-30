#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/SnowballPuzzleBlockType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBLOCKITEM_GET_ISDESTINATION_OFFSET UNITYSDK_OFFSET(0x17B08580)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBLOCKITEM_GET_ISSNOWBALL_OFFSET UNITYSDK_OFFSET(0x17B08590)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBLOCKITEM_METHOD_5_DB0FB84728E17575_OFFSET UNITYSDK_OFFSET(0x17B08140)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBLOCKITEM_RESETDESTINATIONSTATE_OFFSET UNITYSDK_OFFSET(0x17B084D0)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBLOCKITEM_SETDESTINATIONSTATE_OFFSET UNITYSDK_OFFSET(0x17B08410)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBLOCKITEM_SETDYNAMICGRIDUSE_OFFSET UNITYSDK_OFFSET(0x17B08350)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBLOCKITEM_SNOWBALLSETSIZE_OFFSET UNITYSDK_OFFSET(0x17B082A0)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBLOCKITEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B085B0)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBLOCKITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x17B085A0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int SnowballPuzzleBlockItem_TypeDefinitionIndex = 78392;

	class SnowballPuzzleBlockItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_JPEGMAOLGHL()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SnowballPuzzleBlockItem_TypeDefinitionIndex)->GetStaticField(0x14DF0);
		}
		::UnityEngine::Vector2Int Position; // 0x18
		::RPG::Client::Prop::SnowballPuzzleBlockType BlockType; // 0x20
		::UnityEngine::GameObject* AnimObject; // 0x28
		::System::Int32 DestinationSizeRequire; // 0x30
		::System::Int32 SnowballInitSize; // 0x34
		::UnityEngine::Animator* APPGGMLEPLN; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBLOCKITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBLOCKITEM__CCTOR_OFFSET))();
		}

		::UnityEngine::Animator* Method_5_DB0FB84728E17575()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBLOCKITEM_METHOD_5_DB0FB84728E17575_OFFSET))(this);
		}

		::System::Void SnowballSetSize(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBLOCKITEM_SNOWBALLSETSIZE_OFFSET))(this, a1);
		}

		::System::Void SetDynamicGridUse(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBLOCKITEM_SETDYNAMICGRIDUSE_OFFSET))(this, a1);
		}

		::System::Void SetDestinationState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBLOCKITEM_SETDESTINATIONSTATE_OFFSET))(this, a1);
		}

		::System::Void ResetDestinationState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBLOCKITEM_RESETDESTINATIONSTATE_OFFSET))(this);
		}

		::System::Boolean get_IsDestination()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBLOCKITEM_GET_ISDESTINATION_OFFSET))(this);
		}

		::System::Boolean get_IsSnowball()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBLOCKITEM_GET_ISSNOWBALL_OFFSET))(this);
		}
	};
}
