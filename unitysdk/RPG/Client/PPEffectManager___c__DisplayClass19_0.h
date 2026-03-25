#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8C01F4196D770BEF;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PPEFFECTMANAGER___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9EBC7D0)
#define RPG_CLIENT_PPEFFECTMANAGER___C__DISPLAYCLASS19_0__REFRESHAVATARINTENSITY_B__0_OFFSET UNITYSDK_OFFSET(0x9EC0C00)

namespace RPG::Client
{
	inline static constexpr unsigned int PPEffectManager___c__DisplayClass19_0_TypeDefinitionIndex = 57057;

	class PPEffectManager___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* pTargetList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshAvatarIntensity_b__0(::Class_1_8C01F4196D770BEF* info)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_8C01F4196D770BEF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER___C__DISPLAYCLASS19_0__REFRESHAVATARINTENSITY_B__0_OFFSET))(this, info);
		}
	};
}
