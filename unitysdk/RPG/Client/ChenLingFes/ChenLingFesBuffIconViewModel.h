#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

namespace System { class String; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFICONVIEWMODEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1AFFDFF0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFICONVIEWMODEL_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1AFFDD20)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFICONVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFFE060)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesBuffIconViewModel_TypeDefinitionIndex = 76407;

	class ChenLingFesBuffIconViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::System::String* _IconPath; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFICONVIEWMODEL__CTOR_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFICONVIEWMODEL_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFICONVIEWMODEL_SET_ICONPATH_OFFSET))(this, a1);
		}
	};
}
