#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/Client/TextID.h"

class Class_1_3E8412A97A3D0DF7;
namespace System { class String; }

#define RPG_CLIENT_FATERIN_FATERINEXTRAEFFECTVIEWMODEL_GET_DESC_OFFSET UNITYSDK_OFFSET(0xD002690)
#define RPG_CLIENT_FATERIN_FATERINEXTRAEFFECTVIEWMODEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xD002630)
#define RPG_CLIENT_FATERIN_FATERINEXTRAEFFECTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xD0025B0)

namespace RPG::Client::FateRin
{
	inline static constexpr unsigned int FateRinExtraEffectViewModel_TypeDefinitionIndex = 79303;

	class FateRinExtraEffectViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::Class_1_3E8412A97A3D0DF7* _Model; // 0x20

		::System::Void _ctor(::Class_1_3E8412A97A3D0DF7* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3E8412A97A3D0DF7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINEXTRAEFFECTVIEWMODEL__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINEXTRAEFFECTVIEWMODEL_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINEXTRAEFFECTVIEWMODEL_GET_DESC_OFFSET))(this);
		}
	};
}
