#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMDESTROYPHANTOMPLAYERACTION_METHOD_4_C1F50893AF7FA42E_OFFSET UNITYSDK_OFFSET(0x1D6B8BC0)
#define RPG_GAMECORE_FIVEDIMDESTROYPHANTOMPLAYERACTION_METHOD_4_C92C4B8DB287BF21_OFFSET UNITYSDK_OFFSET(0x1D6B8C00)
#define RPG_GAMECORE_FIVEDIMDESTROYPHANTOMPLAYERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B8BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimDestroyPhantomPlayerAction_TypeDefinitionIndex = 18668;

	class FiveDimDestroyPhantomPlayerAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* Name; // 0x10
		::System::Boolean IsImmediately; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDESTROYPHANTOMPLAYERACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C1F50893AF7FA42E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDestroyPhantomPlayerAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDestroyPhantomPlayerAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDESTROYPHANTOMPLAYERACTION_METHOD_4_C1F50893AF7FA42E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C92C4B8DB287BF21(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDestroyPhantomPlayerAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDestroyPhantomPlayerAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDESTROYPHANTOMPLAYERACTION_METHOD_4_C92C4B8DB287BF21_OFFSET))(a1, a2);
		}
	};
}
