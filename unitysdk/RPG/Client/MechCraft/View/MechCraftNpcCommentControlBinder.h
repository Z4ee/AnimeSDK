#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client { class LocalizedText; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNPCCOMMENTCONTROLBINDER_GET_IMGAVATAR_OFFSET UNITYSDK_OFFSET(0xD641A90)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNPCCOMMENTCONTROLBINDER_GET_TEXTDESC_OFFSET UNITYSDK_OFFSET(0xD641BF0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNPCCOMMENTCONTROLBINDER_GET_TEXTNAME_OFFSET UNITYSDK_OFFSET(0xD641B40)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNPCCOMMENTCONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD641CB0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftNpcCommentControlBinder_TypeDefinitionIndex = 80038;

	class MechCraftNpcCommentControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNPCCOMMENTCONTROLBINDER__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Image* get_ImgAvatar()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNPCCOMMENTCONTROLBINDER_GET_IMGAVATAR_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* get_TextName()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNPCCOMMENTCONTROLBINDER_GET_TEXTNAME_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* get_TextDesc()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNPCCOMMENTCONTROLBINDER_GET_TEXTDESC_OFFSET))(this);
		}
	};
}
