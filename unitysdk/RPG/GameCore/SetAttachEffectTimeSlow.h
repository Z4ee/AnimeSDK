#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SETATTACHEFFECTTIMESLOW_METHOD_3_88803EEF9AD05800_OFFSET UNITYSDK_OFFSET(0x176A6910)
#define RPG_GAMECORE_SETATTACHEFFECTTIMESLOW_METHOD_3_ED48E6976B9B61A2_OFFSET UNITYSDK_OFFSET(0x176A6990)
#define RPG_GAMECORE_SETATTACHEFFECTTIMESLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x176A6960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAttachEffectTimeSlow_TypeDefinitionIndex = 21082;

	class SetAttachEffectTimeSlow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AttachPoint; // 0x18
		::System::Single TimeSlow; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETATTACHEFFECTTIMESLOW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_88803EEF9AD05800(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAttachEffectTimeSlow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAttachEffectTimeSlow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETATTACHEFFECTTIMESLOW_METHOD_3_88803EEF9AD05800_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ED48E6976B9B61A2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAttachEffectTimeSlow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAttachEffectTimeSlow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETATTACHEFFECTTIMESLOW_METHOD_3_ED48E6976B9B61A2_OFFSET))(a1, a2);
		}
	};
}
