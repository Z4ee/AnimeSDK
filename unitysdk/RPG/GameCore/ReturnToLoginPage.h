#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RETURNTOLOGINPAGE_METHOD_3_4DFD58737D6CA75E_OFFSET UNITYSDK_OFFSET(0x1D3B2BF0)
#define RPG_GAMECORE_RETURNTOLOGINPAGE_METHOD_3_D2C7DF650B8A4C5D_OFFSET UNITYSDK_OFFSET(0x1D3B2C30)
#define RPG_GAMECORE_RETURNTOLOGINPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B2C20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ReturnToLoginPage_TypeDefinitionIndex = 20845;

	class ReturnToLoginPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* WaitTalkMissionKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETURNTOLOGINPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4DFD58737D6CA75E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReturnToLoginPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReturnToLoginPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETURNTOLOGINPAGE_METHOD_3_4DFD58737D6CA75E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D2C7DF650B8A4C5D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReturnToLoginPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReturnToLoginPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETURNTOLOGINPAGE_METHOD_3_D2C7DF650B8A4C5D_OFFSET))(a1, a2);
		}
	};
}
