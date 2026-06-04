#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChimeraGalleryActRow; }
namespace System { class String; }

#define RPG_CLIENT_CHIMERAGALLERYACTDATA_GET_ICON_OFFSET UNITYSDK_OFFSET(0xB6A6BA0)
#define RPG_CLIENT_CHIMERAGALLERYACTDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xB6A6AB0)
#define RPG_CLIENT_CHIMERAGALLERYACTDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB6A6B20)
#define RPG_CLIENT_CHIMERAGALLERYACTDATA_GET_SORT_OFFSET UNITYSDK_OFFSET(0xB6A6C10)
#define RPG_CLIENT_CHIMERAGALLERYACTDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xB6A6AC0)
#define RPG_CLIENT_CHIMERAGALLERYACTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB6A6C80)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraGalleryActData_TypeDefinitionIndex = 59361;

	class ChimeraGalleryActData : public ::System::Object
	{
	public:
		::System::UInt32 _ID_k__BackingField; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGALLERYACTDATA__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGALLERYACTDATA_GET_ID_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraGalleryActRow* get__Row()
		{
			return ((::RPG::GameCore::ChimeraGalleryActRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGALLERYACTDATA_GET__ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGALLERYACTDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Icon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGALLERYACTDATA_GET_ICON_OFFSET))(this);
		}

		::System::Single get_Sort()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGALLERYACTDATA_GET_SORT_OFFSET))(this);
		}
	};
}
