#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_NOTIFYSETBATTLEENTITYVIEWACTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x18269A10)

namespace RPG::Client
{
	inline static constexpr unsigned int NotifySetBattleEntityViewActive_TypeDefinitionIndex = 68127;

	class NotifySetBattleEntityViewActive : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RuntimeIDs; // 0x10
		::System::Boolean IsTask; // 0x18
		::System::Boolean Active; // 0x19
		::System::Boolean IsIndependent; // 0x1A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYSETBATTLEENTITYVIEWACTIVE__CTOR_OFFSET))(this);
		}
	};
}
