#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SingleTimeRewindEntityAnimEventBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMSTATEEVENTCONFIG_METHOD_3_AADDCB4F9DF79B1A_OFFSET UNITYSDK_OFFSET(0x1BE4E550)
#define RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMSTATEEVENTCONFIG_METHOD_3_ED53A75E5E808C5F_OFFSET UNITYSDK_OFFSET(0x1BE4E260)
#define RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMSTATEEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE4E250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SingleTimeRewindEntityAnimStateEventConfig_TypeDefinitionIndex = 15947;

	class SingleTimeRewindEntityAnimStateEventConfig : public ::RPG::GameCore::SingleTimeRewindEntityAnimEventBaseConfig
	{
	public:
		::System::String* AnimStateName; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMSTATEEVENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AADDCB4F9DF79B1A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SingleTimeRewindEntityAnimStateEventConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SingleTimeRewindEntityAnimStateEventConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMSTATEEVENTCONFIG_METHOD_3_AADDCB4F9DF79B1A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ED53A75E5E808C5F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SingleTimeRewindEntityAnimStateEventConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SingleTimeRewindEntityAnimStateEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMSTATEEVENTCONFIG_METHOD_3_ED53A75E5E808C5F_OFFSET))(a1, a2);
		}
	};
}
