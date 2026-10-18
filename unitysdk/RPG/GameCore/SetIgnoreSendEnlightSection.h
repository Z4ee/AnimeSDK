#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETIGNORESENDENLIGHTSECTION_METHOD_3_5AA69F2A9B692E1E_OFFSET UNITYSDK_OFFSET(0x1DA88D80)
#define RPG_GAMECORE_SETIGNORESENDENLIGHTSECTION_METHOD_3_80D52BC14506C6DD_OFFSET UNITYSDK_OFFSET(0x1DA88D40)
#define RPG_GAMECORE_SETIGNORESENDENLIGHTSECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA88D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetIgnoreSendEnlightSection_TypeDefinitionIndex = 21926;

	class SetIgnoreSendEnlightSection : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsReset; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETIGNORESENDENLIGHTSECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_80D52BC14506C6DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetIgnoreSendEnlightSection*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetIgnoreSendEnlightSection*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETIGNORESENDENLIGHTSECTION_METHOD_3_80D52BC14506C6DD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5AA69F2A9B692E1E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetIgnoreSendEnlightSection* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetIgnoreSendEnlightSection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETIGNORESENDENLIGHTSECTION_METHOD_3_5AA69F2A9B692E1E_OFFSET))(a1, a2);
		}
	};
}
