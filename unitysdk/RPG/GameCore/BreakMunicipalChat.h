#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BREAKMUNICIPALCHAT_METHOD_3_184DF2C147AC1120_OFFSET UNITYSDK_OFFSET(0x1C2EDFD0)
#define RPG_GAMECORE_BREAKMUNICIPALCHAT_METHOD_3_19F6C3B54B3D814D_OFFSET UNITYSDK_OFFSET(0x1C2EDF80)
#define RPG_GAMECORE_BREAKMUNICIPALCHAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2EDFC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BreakMunicipalChat_TypeDefinitionIndex = 20844;

	class BreakMunicipalChat : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsBreak; // 0x18
		::System::String* MunicipalChatName; // 0x20
		::Il2CppArray<::System::String*>* BreakNpcUniqueNames; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BREAKMUNICIPALCHAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_19F6C3B54B3D814D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BreakMunicipalChat*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BreakMunicipalChat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BREAKMUNICIPALCHAT_METHOD_3_19F6C3B54B3D814D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_184DF2C147AC1120(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BreakMunicipalChat* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BreakMunicipalChat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BREAKMUNICIPALCHAT_METHOD_3_184DF2C147AC1120_OFFSET))(a1, a2);
		}
	};
}
