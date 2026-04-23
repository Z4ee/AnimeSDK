#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTarget.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_LOCKTARGETCONFIGLIST_METHOD_2_DAC4E6F6716DDA3B_OFFSET UNITYSDK_OFFSET(0x185EB1E0)
#define RPG_CLIENT_LOCKTARGETCONFIGLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x185EB2F0)

namespace RPG::Client
{
	inline static constexpr unsigned int LockTargetConfigList_TypeDefinitionIndex = 10063;

	class LockTargetConfigList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::Client::GamePlayLockTarget>* LockTargetList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCKTARGETCONFIGLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_DAC4E6F6716DDA3B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LockTargetConfigList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LockTargetConfigList*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCKTARGETCONFIGLIST_METHOD_2_DAC4E6F6716DDA3B_OFFSET))(a1, a2);
		}
	};
}
