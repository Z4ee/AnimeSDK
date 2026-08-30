#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWMAINPAGEHINT_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D097080)
#define RPG_GAMECORE_SHOWMAINPAGEHINT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D097040)
#define RPG_GAMECORE_SHOWMAINPAGEHINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D097070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowMainPageHint_TypeDefinitionIndex = 20890;

	class ShowMainPageHint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::Client::TextID TextContent; // 0x18
		::System::Boolean Visible; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMAINPAGEHINT__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowMainPageHint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowMainPageHint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMAINPAGEHINT_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowMainPageHint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowMainPageHint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMAINPAGEHINT_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
