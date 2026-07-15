#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ADDITIONALDISPLAYDATA_METHOD_2_640887368B77091F_OFFSET UNITYSDK_OFFSET(0x1BE0BD80)
#define RPG_GAMECORE_ADDITIONALDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE0BF50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdditionalDisplayData_TypeDefinitionIndex = 21761;

	class AdditionalDisplayData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* UIMessageHeight; // 0x10
		::RPG::GameCore::DynamicFloat* DitherRangeX; // 0x18
		::RPG::GameCore::DynamicFloat* DitherRangeY; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDITIONALDISPLAYDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_640887368B77091F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdditionalDisplayData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdditionalDisplayData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDITIONALDISPLAYDATA_METHOD_2_640887368B77091F_OFFSET))(a1, a2);
		}
	};
}
