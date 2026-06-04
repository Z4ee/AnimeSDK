#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MunicipalChatActionBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MUNICIPALCHATACTIONFREESTYLE_METHOD_3_3D7C04C5FC0F398E_OFFSET UNITYSDK_OFFSET(0x199B7D70)
#define RPG_GAMECORE_MUNICIPALCHATACTIONFREESTYLE_METHOD_3_DE19F4B39C6373EB_OFFSET UNITYSDK_OFFSET(0x199B7490)
#define RPG_GAMECORE_MUNICIPALCHATACTIONFREESTYLE__CTOR_OFFSET UNITYSDK_OFFSET(0x199B7480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MunicipalChatActionFreeStyle_TypeDefinitionIndex = 16066;

	class MunicipalChatActionFreeStyle : public ::RPG::GameCore::MunicipalChatActionBase
	{
	public:
		::System::UInt32 MotionID; // 0x20
		::System::String* AvatarID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATACTIONFREESTYLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3D7C04C5FC0F398E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MunicipalChatActionFreeStyle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MunicipalChatActionFreeStyle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATACTIONFREESTYLE_METHOD_3_3D7C04C5FC0F398E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DE19F4B39C6373EB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MunicipalChatActionFreeStyle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MunicipalChatActionFreeStyle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATACTIONFREESTYLE_METHOD_3_DE19F4B39C6373EB_OFFSET))(a1, a2);
		}
	};
}
