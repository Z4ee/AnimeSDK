#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ConvinceToastType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CONVINCESHOWTOAST_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D9BAC30)
#define RPG_GAMECORE_CONVINCESHOWTOAST_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9BABF0)
#define RPG_GAMECORE_CONVINCESHOWTOAST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9BAC20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConvinceShowToast_TypeDefinitionIndex = 21598;

	class ConvinceShowToast : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ConvinceToastType ToastType; // 0x18
		::RPG::Client::TextID TitleText; // 0x20
		::System::Boolean ShowHint; // 0x30
		::RPG::Client::TextID HintText; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCESHOWTOAST__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConvinceShowToast*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConvinceShowToast*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCESHOWTOAST_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConvinceShowToast* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConvinceShowToast*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCESHOWTOAST_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
