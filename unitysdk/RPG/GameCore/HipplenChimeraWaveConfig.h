#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_HIPPLENCHIMERAWAVECONFIG_METHOD_2_49AE45C14CF0DFA0_OFFSET UNITYSDK_OFFSET(0x1D3E1C00)
#define RPG_GAMECORE_HIPPLENCHIMERAWAVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3E1CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenChimeraWaveConfig_TypeDefinitionIndex = 16618;

	class HipplenChimeraWaveConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* TrackNameList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENCHIMERAWAVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_49AE45C14CF0DFA0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenChimeraWaveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenChimeraWaveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENCHIMERAWAVECONFIG_METHOD_2_49AE45C14CF0DFA0_OFFSET))(a1, a2);
		}
	};
}
