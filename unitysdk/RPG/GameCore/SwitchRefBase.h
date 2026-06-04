#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWITCHREFBASE_METHOD_2_38696A2313BF856F_OFFSET UNITYSDK_OFFSET(0x19CDF990)
#define RPG_GAMECORE_SWITCHREFBASE_METHOD_2_5904CD377781D222_OFFSET UNITYSDK_OFFSET(0x19CDE7F0)
#define RPG_GAMECORE_SWITCHREFBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x19CDF9F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchRefBase_TypeDefinitionIndex = 22464;

	class SwitchRefBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5904CD377781D222(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchRefBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchRefBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFBASE_METHOD_2_5904CD377781D222_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_38696A2313BF856F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchRefBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchRefBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFBASE_METHOD_2_38696A2313BF856F_OFFSET))(a1, a2);
		}
	};
}
