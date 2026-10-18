#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPREVIEWCHIPPIECECONTROLBINDER_GET_IMAGE_OFFSET UNITYSDK_OFFSET(0xD620FF0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPREVIEWCHIPPIECECONTROLBINDER_GET_NODEBOUNDINGBOX_OFFSET UNITYSDK_OFFSET(0xD6210A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPREVIEWCHIPPIECECONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD6212F0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftPreviewChipPieceControlBinder_TypeDefinitionIndex = 79896;

	class MechCraftCraftPreviewChipPieceControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPREVIEWCHIPPIECECONTROLBINDER__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Image* get_Image()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPREVIEWCHIPPIECECONTROLBINDER_GET_IMAGE_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_NodeBoundingBox()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPREVIEWCHIPPIECECONTROLBINDER_GET_NODEBOUNDINGBOX_OFFSET))(this);
		}
	};
}
