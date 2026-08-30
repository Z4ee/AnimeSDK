#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_WAVEMONSTERMAXCOUNT_METHOD_3_2F1449CEDDC82F30_OFFSET UNITYSDK_OFFSET(0x1DEC59D0)
#define RPG_GAMECORE_WAVEMONSTERMAXCOUNT_METHOD_3_A104541D7E651DC1_OFFSET UNITYSDK_OFFSET(0x1DEC5990)
#define RPG_GAMECORE_WAVEMONSTERMAXCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC59C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaveMonsterMaxCount_TypeDefinitionIndex = 23133;

	class WaveMonsterMaxCount : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 Count; // 0x18
		::System::Boolean ReadFromTable; // 0x1C
		::System::String* DynamicKey; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAVEMONSTERMAXCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A104541D7E651DC1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaveMonsterMaxCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaveMonsterMaxCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAVEMONSTERMAXCOUNT_METHOD_3_A104541D7E651DC1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2F1449CEDDC82F30(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaveMonsterMaxCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaveMonsterMaxCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAVEMONSTERMAXCOUNT_METHOD_3_2F1449CEDDC82F30_OFFSET))(a1, a2);
		}
	};
}
