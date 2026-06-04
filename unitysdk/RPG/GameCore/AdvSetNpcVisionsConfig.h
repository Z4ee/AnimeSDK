#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class VisionBaseConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ADVSETNPCVISIONSCONFIG_METHOD_3_8A07A59B8B3EAABE_OFFSET UNITYSDK_OFFSET(0x19437EA0)
#define RPG_GAMECORE_ADVSETNPCVISIONSCONFIG_METHOD_3_F8B7911C5DDE4CFA_OFFSET UNITYSDK_OFFSET(0x19437E20)
#define RPG_GAMECORE_ADVSETNPCVISIONSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19437E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetNpcVisionsConfig_TypeDefinitionIndex = 18873;

	class AdvSetNpcVisionsConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* VisionsByName; // 0x18
		::Il2CppArray<::RPG::GameCore::VisionBaseConfig*>* Visions; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETNPCVISIONSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F8B7911C5DDE4CFA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetNpcVisionsConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetNpcVisionsConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETNPCVISIONSCONFIG_METHOD_3_F8B7911C5DDE4CFA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8A07A59B8B3EAABE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetNpcVisionsConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetNpcVisionsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETNPCVISIONSCONFIG_METHOD_3_8A07A59B8B3EAABE_OFFSET))(a1, a2);
		}
	};
}
