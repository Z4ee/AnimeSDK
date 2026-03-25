#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PROPFASTDELIVERSETSIMPLIFIEDMODE_METHOD_3_5F1B5BEED7231AA3_OFFSET UNITYSDK_OFFSET(0x1751E250)
#define RPG_GAMECORE_PROPFASTDELIVERSETSIMPLIFIEDMODE_METHOD_3_A1DA2F61216B049A_OFFSET UNITYSDK_OFFSET(0x1751E1D0)
#define RPG_GAMECORE_PROPFASTDELIVERSETSIMPLIFIEDMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1751E220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropFastDeliverSetSimplifiedMode_TypeDefinitionIndex = 20336;

	class PropFastDeliverSetSimplifiedMode : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsSimplifiedMode; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPFASTDELIVERSETSIMPLIFIEDMODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A1DA2F61216B049A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropFastDeliverSetSimplifiedMode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropFastDeliverSetSimplifiedMode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPFASTDELIVERSETSIMPLIFIEDMODE_METHOD_3_A1DA2F61216B049A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5F1B5BEED7231AA3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropFastDeliverSetSimplifiedMode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropFastDeliverSetSimplifiedMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPFASTDELIVERSETSIMPLIFIEDMODE_METHOD_3_5F1B5BEED7231AA3_OFFSET))(a1, a2);
		}
	};
}
