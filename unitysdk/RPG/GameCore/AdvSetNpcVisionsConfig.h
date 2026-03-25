#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class VisionBaseConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ADVSETNPCVISIONSCONFIG_METHOD_3_78B86363FD76C534_OFFSET UNITYSDK_OFFSET(0x16F42320)
#define RPG_GAMECORE_ADVSETNPCVISIONSCONFIG_METHOD_3_8D1F41B409F17CC4_OFFSET UNITYSDK_OFFSET(0x16F423A0)
#define RPG_GAMECORE_ADVSETNPCVISIONSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16F42370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetNpcVisionsConfig_TypeDefinitionIndex = 18270;

	class AdvSetNpcVisionsConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* VisionsByName; // 0x18
		::Il2CppArray<::RPG::GameCore::VisionBaseConfig*>* Visions; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETNPCVISIONSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_78B86363FD76C534(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetNpcVisionsConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetNpcVisionsConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETNPCVISIONSCONFIG_METHOD_3_78B86363FD76C534_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8D1F41B409F17CC4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetNpcVisionsConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetNpcVisionsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETNPCVISIONSCONFIG_METHOD_3_8D1F41B409F17CC4_OFFSET))(a1, a2);
		}
	};
}
