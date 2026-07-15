#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SETATTACHEFFECTTIMESLOW_METHOD_3_54D3A3A4CA5E781D_OFFSET UNITYSDK_OFFSET(0x1C2D1F90)
#define RPG_GAMECORE_SETATTACHEFFECTTIMESLOW_METHOD_3_ED48E6976B9B61A2_OFFSET UNITYSDK_OFFSET(0x1C2D1FD0)
#define RPG_GAMECORE_SETATTACHEFFECTTIMESLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2D1FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAttachEffectTimeSlow_TypeDefinitionIndex = 22059;

	class SetAttachEffectTimeSlow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AttachPoint; // 0x18
		::System::Single TimeSlow; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETATTACHEFFECTTIMESLOW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_54D3A3A4CA5E781D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAttachEffectTimeSlow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAttachEffectTimeSlow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETATTACHEFFECTTIMESLOW_METHOD_3_54D3A3A4CA5E781D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ED48E6976B9B61A2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAttachEffectTimeSlow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAttachEffectTimeSlow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETATTACHEFFECTTIMESLOW_METHOD_3_ED48E6976B9B61A2_OFFSET))(a1, a2);
		}
	};
}
