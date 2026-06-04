#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_WAVEMONSTERMAXCOUNT_METHOD_3_1BC18D5B53A0FCCB_OFFSET UNITYSDK_OFFSET(0x19E65870)
#define RPG_GAMECORE_WAVEMONSTERMAXCOUNT_METHOD_3_2F1449CEDDC82F30_OFFSET UNITYSDK_OFFSET(0x19E658F0)
#define RPG_GAMECORE_WAVEMONSTERMAXCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x19E658C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaveMonsterMaxCount_TypeDefinitionIndex = 22119;

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

		static ::System::Void Method_3_1BC18D5B53A0FCCB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaveMonsterMaxCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaveMonsterMaxCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAVEMONSTERMAXCOUNT_METHOD_3_1BC18D5B53A0FCCB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2F1449CEDDC82F30(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaveMonsterMaxCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaveMonsterMaxCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAVEMONSTERMAXCOUNT_METHOD_3_2F1449CEDDC82F30_OFFSET))(a1, a2);
		}
	};
}
