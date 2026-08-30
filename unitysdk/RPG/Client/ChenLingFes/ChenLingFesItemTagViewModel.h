#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

namespace RPG::GameCore { class ChenLingFesTagRow; }
namespace System { class String; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMTAGVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0x1B729870)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMTAGVIEWMODEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1B754F80)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMTAGVIEWMODEL_GET_TAGUISTATE_OFFSET UNITYSDK_OFFSET(0x1B755060)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMTAGVIEWMODEL_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1B754FD0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMTAGVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B755630)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesItemTagViewModel_TypeDefinitionIndex = 80048;

	class ChenLingFesItemTagViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::RPG::GameCore::ChenLingFesTagRow* _Row; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMTAGVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChenLingFes::ChenLingFesItemTagViewModel* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesItemTagViewModel*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMTAGVIEWMODEL_CREATE_OFFSET))(a1);
		}

		::System::String* get_Text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMTAGVIEWMODEL_GET_TEXT_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMTAGVIEWMODEL_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_TagUIState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMTAGVIEWMODEL_GET_TAGUISTATE_OFFSET))(this);
		}
	};
}
