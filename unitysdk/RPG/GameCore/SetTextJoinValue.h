#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SETTEXTJOINVALUE_METHOD_3_0B50AEAE101E53EA_OFFSET UNITYSDK_OFFSET(0x1C60D990)
#define RPG_GAMECORE_SETTEXTJOINVALUE_METHOD_3_D35CB075C8E7E801_OFFSET UNITYSDK_OFFSET(0x1C60D9D0)
#define RPG_GAMECORE_SETTEXTJOINVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C60D9C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTextJoinValue_TypeDefinitionIndex = 20094;

	class SetTextJoinValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 TextJoinID; // 0x18
		::System::String* Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTEXTJOINVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0B50AEAE101E53EA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTextJoinValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTextJoinValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTEXTJOINVALUE_METHOD_3_0B50AEAE101E53EA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D35CB075C8E7E801(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTextJoinValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTextJoinValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTEXTJOINVALUE_METHOD_3_D35CB075C8E7E801_OFFSET))(a1, a2);
		}
	};
}
