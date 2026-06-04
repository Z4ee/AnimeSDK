#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DYNAMICVALUEROUNDTOINT_METHOD_3_3005453B53689E1E_OFFSET UNITYSDK_OFFSET(0x196D2350)
#define RPG_GAMECORE_DYNAMICVALUEROUNDTOINT_METHOD_3_F8109180F15459EF_OFFSET UNITYSDK_OFFSET(0x196D22D0)
#define RPG_GAMECORE_DYNAMICVALUEROUNDTOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x196D2320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DynamicValueRoundToInt_TypeDefinitionIndex = 21702;

	class DynamicValueRoundToInt : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* DynamicKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUEROUNDTOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F8109180F15459EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DynamicValueRoundToInt*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DynamicValueRoundToInt*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUEROUNDTOINT_METHOD_3_F8109180F15459EF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3005453B53689E1E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DynamicValueRoundToInt* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DynamicValueRoundToInt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUEROUNDTOINT_METHOD_3_3005453B53689E1E_OFFSET))(a1, a2);
		}
	};
}
