#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class VisionBaseConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ADVSETNPCVISIONSCONFIG_METHOD_3_6840311B5A35FD89_OFFSET UNITYSDK_OFFSET(0x1CBA20C0)
#define RPG_GAMECORE_ADVSETNPCVISIONSCONFIG_METHOD_3_8A07A59B8B3EAABE_OFFSET UNITYSDK_OFFSET(0x1CBA2100)
#define RPG_GAMECORE_ADVSETNPCVISIONSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA20F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetNpcVisionsConfig_TypeDefinitionIndex = 19764;

	class AdvSetNpcVisionsConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* VisionsByName; // 0x18
		::Il2CppArray<::RPG::GameCore::VisionBaseConfig*>* Visions; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETNPCVISIONSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6840311B5A35FD89(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetNpcVisionsConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetNpcVisionsConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETNPCVISIONSCONFIG_METHOD_3_6840311B5A35FD89_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8A07A59B8B3EAABE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetNpcVisionsConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetNpcVisionsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETNPCVISIONSCONFIG_METHOD_3_8A07A59B8B3EAABE_OFFSET))(a1, a2);
		}
	};
}
