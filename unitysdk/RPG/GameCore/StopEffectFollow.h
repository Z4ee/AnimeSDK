#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_STOPEFFECTFOLLOW_METHOD_3_98118667B7EF3CBB_OFFSET UNITYSDK_OFFSET(0x1777D280)
#define RPG_GAMECORE_STOPEFFECTFOLLOW_METHOD_3_99413F10DB734F8C_OFFSET UNITYSDK_OFFSET(0x1777D300)
#define RPG_GAMECORE_STOPEFFECTFOLLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1777D2D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StopEffectFollow_TypeDefinitionIndex = 20569;

	class StopEffectFollow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* EffectList; // 0x18
		::System::String* UniqueEffectName; // 0x20
		::System::Boolean IsStop; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPEFFECTFOLLOW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_98118667B7EF3CBB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StopEffectFollow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StopEffectFollow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPEFFECTFOLLOW_METHOD_3_98118667B7EF3CBB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_99413F10DB734F8C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StopEffectFollow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StopEffectFollow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPEFFECTFOLLOW_METHOD_3_99413F10DB734F8C_OFFSET))(a1, a2);
		}
	};
}
