#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ResidentPossessionInfo; }
namespace System { class String; }

#define RPG_GAMECORE_RESIDENTPOSSESSIONCONFIGITEM_METHOD_2_5768D85EF6A6C533_OFFSET UNITYSDK_OFFSET(0x1DB94E80)
#define RPG_GAMECORE_RESIDENTPOSSESSIONCONFIGITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB94FB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResidentPossessionConfigItem_TypeDefinitionIndex = 16365;

	class ResidentPossessionConfigItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* ConfigKeys; // 0x10
		::Il2CppArray<::RPG::GameCore::ResidentPossessionInfo*>* Possessions; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESIDENTPOSSESSIONCONFIGITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5768D85EF6A6C533(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResidentPossessionConfigItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResidentPossessionConfigItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESIDENTPOSSESSIONCONFIGITEM_METHOD_2_5768D85EF6A6C533_OFFSET))(a1, a2);
		}
	};
}
