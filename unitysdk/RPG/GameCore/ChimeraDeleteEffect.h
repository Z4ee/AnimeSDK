#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADELETEEFFECT_METHOD_3_61DACDDBFDA1BFA7_OFFSET UNITYSDK_OFFSET(0x19634D60)
#define RPG_GAMECORE_CHIMERADELETEEFFECT_METHOD_3_78077D5D8AB0B6BD_OFFSET UNITYSDK_OFFSET(0x19636150)
#define RPG_GAMECORE_CHIMERADELETEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x19634D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDeleteEffect_TypeDefinitionIndex = 15091;

	class ChimeraDeleteEffect : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::System::String* UniqueName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADELETEEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_78077D5D8AB0B6BD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDeleteEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDeleteEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADELETEEFFECT_METHOD_3_78077D5D8AB0B6BD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_61DACDDBFDA1BFA7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDeleteEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDeleteEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADELETEEFFECT_METHOD_3_61DACDDBFDA1BFA7_OFFSET))(a1, a2);
		}
	};
}
