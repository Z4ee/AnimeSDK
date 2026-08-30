#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FORCESHOWACTIONDELAY_METHOD_3_4F295EE26F810D12_OFFSET UNITYSDK_OFFSET(0x1D110380)
#define RPG_GAMECORE_FORCESHOWACTIONDELAY_METHOD_3_52E8F19B95D25619_OFFSET UNITYSDK_OFFSET(0x1D1103C0)
#define RPG_GAMECORE_FORCESHOWACTIONDELAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1103B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ForceShowActionDelay_TypeDefinitionIndex = 24040;

	class ForceShowActionDelay : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsShow; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCESHOWACTIONDELAY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4F295EE26F810D12(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ForceShowActionDelay*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ForceShowActionDelay*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCESHOWACTIONDELAY_METHOD_3_4F295EE26F810D12_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_52E8F19B95D25619(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ForceShowActionDelay* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ForceShowActionDelay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCESHOWACTIONDELAY_METHOD_3_52E8F19B95D25619_OFFSET))(a1, a2);
		}
	};
}
