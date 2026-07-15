#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SETTARGETPOSNOTIFYCONFIG_METHOD_2_CCB0AB7FAE7E8A0F_OFFSET UNITYSDK_OFFSET(0x1C60C1A0)
#define RPG_GAMECORE_SETTARGETPOSNOTIFYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C60C270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTargetPosNotifyConfig_TypeDefinitionIndex = 16288;

	class SetTargetPosNotifyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* PointName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETPOSNOTIFYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CCB0AB7FAE7E8A0F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTargetPosNotifyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTargetPosNotifyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETPOSNOTIFYCONFIG_METHOD_2_CCB0AB7FAE7E8A0F_OFFSET))(a1, a2);
		}
	};
}
