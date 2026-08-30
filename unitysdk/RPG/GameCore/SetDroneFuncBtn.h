#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_SETDRONEFUNCBTN_METHOD_3_4B442DD64E95471D_OFFSET UNITYSDK_OFFSET(0x1D4EAE60)
#define RPG_GAMECORE_SETDRONEFUNCBTN_METHOD_3_6E2B8C54F14FC53E_OFFSET UNITYSDK_OFFSET(0x1D4EAE20)
#define RPG_GAMECORE_SETDRONEFUNCBTN__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4EAE50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDroneFuncBtn_TypeDefinitionIndex = 21887;

	class SetDroneFuncBtn : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 Value; // 0x18
		::RPG::GameCore::DynamicString* CustomValue; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDRONEFUNCBTN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6E2B8C54F14FC53E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDroneFuncBtn*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDroneFuncBtn*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDRONEFUNCBTN_METHOD_3_6E2B8C54F14FC53E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4B442DD64E95471D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDroneFuncBtn* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDroneFuncBtn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDRONEFUNCBTN_METHOD_3_4B442DD64E95471D_OFFSET))(a1, a2);
		}
	};
}
