#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMCREATEPHANTOMPLAYERACTION_METHOD_3_A3E99A16AB256A74_OFFSET UNITYSDK_OFFSET(0x1D0A7890)
#define RPG_GAMECORE_FIVEDIMCREATEPHANTOMPLAYERACTION_METHOD_3_DE6DC1C401B13C61_OFFSET UNITYSDK_OFFSET(0x1D0A7850)
#define RPG_GAMECORE_FIVEDIMCREATEPHANTOMPLAYERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0A7880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimCreatePhantomPlayerAction_TypeDefinitionIndex = 18458;

	class FiveDimCreatePhantomPlayerAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* Path; // 0x10
		::System::Boolean Loop; // 0x18
		::System::String* Name; // 0x20
		::System::Boolean InterruptSameName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCREATEPHANTOMPLAYERACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DE6DC1C401B13C61(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimCreatePhantomPlayerAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimCreatePhantomPlayerAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCREATEPHANTOMPLAYERACTION_METHOD_3_DE6DC1C401B13C61_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A3E99A16AB256A74(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimCreatePhantomPlayerAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimCreatePhantomPlayerAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCREATEPHANTOMPLAYERACTION_METHOD_3_A3E99A16AB256A74_OFFSET))(a1, a2);
		}
	};
}
