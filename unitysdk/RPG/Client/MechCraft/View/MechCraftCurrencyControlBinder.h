#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client { class LocalizedText; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCURRENCYCONTROLBINDER_GET_IMGCURRENCY_OFFSET UNITYSDK_OFFSET(0xD631B60)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCURRENCYCONTROLBINDER_GET_TEXTNUM_OFFSET UNITYSDK_OFFSET(0xD631C10)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCURRENCYCONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD631CD0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCurrencyControlBinder_TypeDefinitionIndex = 79815;

	class MechCraftCurrencyControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCURRENCYCONTROLBINDER__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Image* get_ImgCurrency()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCURRENCYCONTROLBINDER_GET_IMGCURRENCY_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* get_TextNum()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCURRENCYCONTROLBINDER_GET_TEXTNUM_OFFSET))(this);
		}
	};
}
