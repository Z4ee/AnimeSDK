#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_SETAVATARGLOBALBUFFSTATE_METHOD_3_80EEA91EA1AC25F7_OFFSET UNITYSDK_OFFSET(0x1DB543D0)
#define RPG_GAMECORE_SETAVATARGLOBALBUFFSTATE_METHOD_3_AE7199800A5F3AC6_OFFSET UNITYSDK_OFFSET(0x1DB542D0)
#define RPG_GAMECORE_SETAVATARGLOBALBUFFSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB54360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAvatarGlobalBuffState_TypeDefinitionIndex = 22483;

	class SetAvatarGlobalBuffState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 BuffID; // 0x18
		::RPG::GameCore::BoolEx IsActive; // 0x1C
		::RPG::GameCore::DynamicFloat* LeftCount; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETAVATARGLOBALBUFFSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AE7199800A5F3AC6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAvatarGlobalBuffState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAvatarGlobalBuffState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETAVATARGLOBALBUFFSTATE_METHOD_3_AE7199800A5F3AC6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_80EEA91EA1AC25F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAvatarGlobalBuffState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAvatarGlobalBuffState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETAVATARGLOBALBUFFSTATE_METHOD_3_80EEA91EA1AC25F7_OFFSET))(a1, a2);
		}
	};
}
