#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SETTEXTJOINVALUE_METHOD_3_BE4C70C796BD237F_OFFSET UNITYSDK_OFFSET(0x18E47830)
#define RPG_GAMECORE_SETTEXTJOINVALUE_METHOD_3_D35CB075C8E7E801_OFFSET UNITYSDK_OFFSET(0x18E478B0)
#define RPG_GAMECORE_SETTEXTJOINVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E47880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTextJoinValue_TypeDefinitionIndex = 19866;

	class SetTextJoinValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 TextJoinID; // 0x18
		::System::String* Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTEXTJOINVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BE4C70C796BD237F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTextJoinValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTextJoinValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTEXTJOINVALUE_METHOD_3_BE4C70C796BD237F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D35CB075C8E7E801(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTextJoinValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTextJoinValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTEXTJOINVALUE_METHOD_3_D35CB075C8E7E801_OFFSET))(a1, a2);
		}
	};
}
