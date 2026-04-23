#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/WaveMonsterTiming.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAVEMONSTERPERFORM_METHOD_3_324CB5C3A101F54D_OFFSET UNITYSDK_OFFSET(0x1910D300)
#define RPG_GAMECORE_WAVEMONSTERPERFORM_METHOD_3_B6855378A61782EB_OFFSET UNITYSDK_OFFSET(0x1910D380)
#define RPG_GAMECORE_WAVEMONSTERPERFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1910D350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaveMonsterPerform_TypeDefinitionIndex = 22372;

	class WaveMonsterPerform : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFindPerformMonsterFailed; // 0x18
		::RPG::GameCore::WaveMonsterTiming CreateTiming; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAVEMONSTERPERFORM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_324CB5C3A101F54D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaveMonsterPerform*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaveMonsterPerform*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAVEMONSTERPERFORM_METHOD_3_324CB5C3A101F54D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B6855378A61782EB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaveMonsterPerform* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaveMonsterPerform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAVEMONSTERPERFORM_METHOD_3_B6855378A61782EB_OFFSET))(a1, a2);
		}
	};
}
