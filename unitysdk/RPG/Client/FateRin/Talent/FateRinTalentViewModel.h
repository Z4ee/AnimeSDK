#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/Client/TextID.h"

class Class_1_6770BC9DDC5C458C_1;
namespace System { class String; }

#define RPG_CLIENT_FATERIN_TALENT_FATERINTALENTVIEWMODEL_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1A397DC0)
#define RPG_CLIENT_FATERIN_TALENT_FATERINTALENTVIEWMODEL_GET_ICONSTATE_OFFSET UNITYSDK_OFFSET(0x1A397E20)
#define RPG_CLIENT_FATERIN_TALENT_FATERINTALENTVIEWMODEL_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1A397D10)
#define RPG_CLIENT_FATERIN_TALENT_FATERINTALENTVIEWMODEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A397D60)
#define RPG_CLIENT_FATERIN_TALENT_FATERINTALENTVIEWMODEL_SET_ICONSTATE_OFFSET UNITYSDK_OFFSET(0x1A397E30)
#define RPG_CLIENT_FATERIN_TALENT_FATERINTALENTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A397C10)

namespace RPG::Client::FateRin::Talent
{
	inline static constexpr unsigned int FateRinTalentViewModel_TypeDefinitionIndex = 75769;

	class FateRinTalentViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::Class_1_6770BC9DDC5C458C_1* _Model; // 0x20
		::System::String* _IconState_k__BackingField; // 0x28

		::System::Void _ctor(::Class_1_6770BC9DDC5C458C_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6770BC9DDC5C458C_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_TALENT_FATERINTALENTVIEWMODEL__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_TALENT_FATERINTALENTVIEWMODEL_GET_LEVEL_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_TALENT_FATERINTALENTVIEWMODEL_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_TALENT_FATERINTALENTVIEWMODEL_GET_DESC_OFFSET))(this);
		}

		::System::String* get_IconState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_TALENT_FATERINTALENTVIEWMODEL_GET_ICONSTATE_OFFSET))(this);
		}

		::System::Void set_IconState(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_TALENT_FATERINTALENTVIEWMODEL_SET_ICONSTATE_OFFSET))(this, a1);
		}
	};
}
