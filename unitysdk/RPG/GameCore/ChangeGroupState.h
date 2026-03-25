#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHANGEGROUPSTATE_METHOD_3_59CD469E94EF4843_OFFSET UNITYSDK_OFFSET(0x17063040)
#define RPG_GAMECORE_CHANGEGROUPSTATE_METHOD_3_EC340CE77CFCDAB3_OFFSET UNITYSDK_OFFSET(0x170630D0)
#define RPG_GAMECORE_CHANGEGROUPSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x170630A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeGroupState_TypeDefinitionIndex = 19476;

	class ChangeGroupState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEGROUPSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_59CD469E94EF4843(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeGroupState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeGroupState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEGROUPSTATE_METHOD_3_59CD469E94EF4843_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EC340CE77CFCDAB3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeGroupState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeGroupState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEGROUPSTATE_METHOD_3_EC340CE77CFCDAB3_OFFSET))(a1, a2);
		}
	};
}
