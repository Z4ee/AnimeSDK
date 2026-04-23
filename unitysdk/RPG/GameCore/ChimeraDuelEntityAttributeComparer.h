#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelAttributeSelectorType.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelEntityComparerBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELENTITYATTRIBUTECOMPARER_METHOD_4_A5742A1A2BBF4D41_OFFSET UNITYSDK_OFFSET(0x187F7F90)
#define RPG_GAMECORE_CHIMERADUELENTITYATTRIBUTECOMPARER_METHOD_4_B86C096D33D94DE1_OFFSET UNITYSDK_OFFSET(0x187F9F40)
#define RPG_GAMECORE_CHIMERADUELENTITYATTRIBUTECOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x187F7F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelEntityAttributeComparer_TypeDefinitionIndex = 15095;

	class ChimeraDuelEntityAttributeComparer : public ::RPG::GameCore::ChimeraDuelEntityComparerBase
	{
	public:
		::RPG::GameCore::ChimeraDuelAttributeSelectorType Attribute; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYATTRIBUTECOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B86C096D33D94DE1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEntityAttributeComparer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEntityAttributeComparer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYATTRIBUTECOMPARER_METHOD_4_B86C096D33D94DE1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A5742A1A2BBF4D41(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEntityAttributeComparer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEntityAttributeComparer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYATTRIBUTECOMPARER_METHOD_4_A5742A1A2BBF4D41_OFFSET))(a1, a2);
		}
	};
}
