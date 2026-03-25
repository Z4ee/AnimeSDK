#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WHITELISTINTERACTREPORTITEM_METHOD_2_5653EEC451F9F990_OFFSET UNITYSDK_OFFSET(0x1790AEA0)
#define RPG_GAMECORE_WHITELISTINTERACTREPORTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1790B010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WhiteListInteractReportItem_TypeDefinitionIndex = 16226;

	class WhiteListInteractReportItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 FloorID; // 0x10
		::System::UInt32 GroupID; // 0x14
		::System::UInt32 InstanceID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WHITELISTINTERACTREPORTITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5653EEC451F9F990(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WhiteListInteractReportItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WhiteListInteractReportItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WHITELISTINTERACTREPORTITEM_METHOD_2_5653EEC451F9F990_OFFSET))(a1, a2);
		}
	};
}
