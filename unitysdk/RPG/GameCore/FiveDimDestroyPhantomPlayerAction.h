#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMDESTROYPHANTOMPLAYERACTION_METHOD_3_56434138D9DEA3F8_OFFSET UNITYSDK_OFFSET(0x171E6DE0)
#define RPG_GAMECORE_FIVEDIMDESTROYPHANTOMPLAYERACTION_METHOD_3_675673FCDDA7FFDD_OFFSET UNITYSDK_OFFSET(0x171EEF00)
#define RPG_GAMECORE_FIVEDIMDESTROYPHANTOMPLAYERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x171E6DC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimDestroyPhantomPlayerAction_TypeDefinitionIndex = 17134;

	class FiveDimDestroyPhantomPlayerAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* Name; // 0x10
		::System::Boolean IsImmediately; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDESTROYPHANTOMPLAYERACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_675673FCDDA7FFDD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDestroyPhantomPlayerAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDestroyPhantomPlayerAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDESTROYPHANTOMPLAYERACTION_METHOD_3_675673FCDDA7FFDD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_56434138D9DEA3F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDestroyPhantomPlayerAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDestroyPhantomPlayerAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDESTROYPHANTOMPLAYERACTION_METHOD_3_56434138D9DEA3F8_OFFSET))(a1, a2);
		}
	};
}
