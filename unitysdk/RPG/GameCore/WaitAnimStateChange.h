#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_WAITANIMSTATECHANGE_METHOD_3_33863A4E2CAA459A_OFFSET UNITYSDK_OFFSET(0x1DEB3BE0)
#define RPG_GAMECORE_WAITANIMSTATECHANGE_METHOD_3_5FC36A85F9B4623B_OFFSET UNITYSDK_OFFSET(0x1DEB3BA0)
#define RPG_GAMECORE_WAITANIMSTATECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB3BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitAnimStateChange_TypeDefinitionIndex = 22047;

	class WaitAnimStateChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* StateName; // 0x18
		::System::Boolean IsEnter; // 0x20
		::System::Boolean IsListenAllLayer; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITANIMSTATECHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5FC36A85F9B4623B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitAnimStateChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitAnimStateChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITANIMSTATECHANGE_METHOD_3_5FC36A85F9B4623B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_33863A4E2CAA459A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitAnimStateChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitAnimStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITANIMSTATECHANGE_METHOD_3_33863A4E2CAA459A_OFFSET))(a1, a2);
		}
	};
}
