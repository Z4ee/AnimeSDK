#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSETBILLBOARDINFO_METHOD_2_4A4299D423155B80_OFFSET UNITYSDK_OFFSET(0x1D0FF710)
#define RPG_GAMECORE_FIVEDIMSETBILLBOARDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0FF940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetBillboardInfo_TypeDefinitionIndex = 21233;

	class FiveDimSetBillboardInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::Client::TextID Name; // 0x10
		::System::UInt32 MapIconID; // 0x20
		::System::Boolean IsOverrideShowDistance; // 0x24
		::System::Single OverrideShowDistance; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETBILLBOARDINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4A4299D423155B80(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetBillboardInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetBillboardInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETBILLBOARDINFO_METHOD_2_4A4299D423155B80_OFFSET))(a1, a2);
		}
	};
}
