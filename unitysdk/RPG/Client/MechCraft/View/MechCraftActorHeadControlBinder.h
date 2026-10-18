#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client { class LocalizedText; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTACTORHEADCONTROLBINDER_GET_IMGHEAD_OFFSET UNITYSDK_OFFSET(0xD5E81F0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTACTORHEADCONTROLBINDER_GET_TEXTNAME_OFFSET UNITYSDK_OFFSET(0xD5E82A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTACTORHEADCONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD5E8360)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftActorHeadControlBinder_TypeDefinitionIndex = 80012;

	class MechCraftActorHeadControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTACTORHEADCONTROLBINDER__CTOR_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* get_TextName()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTACTORHEADCONTROLBINDER_GET_TEXTNAME_OFFSET))(this);
		}

		::UnityEngine::UI::Image* get_ImgHead()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTACTORHEADCONTROLBINDER_GET_IMGHEAD_OFFSET))(this);
		}
	};
}
