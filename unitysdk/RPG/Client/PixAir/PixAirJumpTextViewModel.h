#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PixAir/PixAirJumpTextSize.h"
#include "unitysdk/RPG/Client/PixAir/PixAirJumpTextType.h"
#include "unitysdk/Sofa/BaseViewModel.h"

#define RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xC3D6240)
#define RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTVIEWMODEL_GET_SIZE_OFFSET UNITYSDK_OFFSET(0xC3D6330)
#define RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTVIEWMODEL_GET_TEXTTYPE_OFFSET UNITYSDK_OFFSET(0xC3D6310)
#define RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTVIEWMODEL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xC3D6350)
#define RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTVIEWMODEL_SET_SIZE_OFFSET UNITYSDK_OFFSET(0xC3D6340)
#define RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTVIEWMODEL_SET_TEXTTYPE_OFFSET UNITYSDK_OFFSET(0xC3D6320)
#define RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTVIEWMODEL_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xC3D6360)
#define RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC3D62F0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirJumpTextViewModel_TypeDefinitionIndex = 73589;

	class PixAirJumpTextViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::RPG::Client::PixAir::PixAirJumpTextSize _Size_k__BackingField; // 0x20
		::System::Int32 _Value_k__BackingField; // 0x24
		::RPG::Client::PixAir::PixAirJumpTextType _TextType_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PixAir::PixAirJumpTextViewModel* Create(::RPG::Client::PixAir::PixAirJumpTextType a1, ::RPG::Client::PixAir::PixAirJumpTextSize a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::PixAir::PixAirJumpTextViewModel*(*)(::RPG::Client::PixAir::PixAirJumpTextType, ::RPG::Client::PixAir::PixAirJumpTextSize, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTVIEWMODEL_CREATE_OFFSET))(a1, a2, a3);
		}

		::RPG::Client::PixAir::PixAirJumpTextType get_TextType()
		{
			return ((::RPG::Client::PixAir::PixAirJumpTextType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTVIEWMODEL_GET_TEXTTYPE_OFFSET))(this);
		}

		::System::Void set_TextType(::RPG::Client::PixAir::PixAirJumpTextType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirJumpTextType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTVIEWMODEL_SET_TEXTTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirJumpTextSize get_Size()
		{
			return ((::RPG::Client::PixAir::PixAirJumpTextSize(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTVIEWMODEL_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_Size(::RPG::Client::PixAir::PixAirJumpTextSize a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirJumpTextSize))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTVIEWMODEL_SET_SIZE_OFFSET))(this, a1);
		}

		::System::Int32 get_Value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTVIEWMODEL_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRJUMPTEXTVIEWMODEL_SET_VALUE_OFFSET))(this, a1);
		}
	};
}
