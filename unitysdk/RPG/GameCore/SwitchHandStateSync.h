#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWITCHHANDSTATESYNC_METHOD_3_93E6C3F2727BAE7E_OFFSET UNITYSDK_OFFSET(0x18EBBD40)
#define RPG_GAMECORE_SWITCHHANDSTATESYNC_METHOD_3_9D2D1C0AE705B36A_OFFSET UNITYSDK_OFFSET(0x18EBBE50)
#define RPG_GAMECORE_SWITCHHANDSTATESYNC__CTOR_OFFSET UNITYSDK_OFFSET(0x18EBBE20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchHandStateSync_TypeDefinitionIndex = 19946;

	class SwitchHandStateSync : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDSTATESYNC__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_93E6C3F2727BAE7E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchHandStateSync*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchHandStateSync*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDSTATESYNC_METHOD_3_93E6C3F2727BAE7E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9D2D1C0AE705B36A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchHandStateSync* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchHandStateSync*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDSTATESYNC_METHOD_3_9D2D1C0AE705B36A_OFFSET))(a1, a2);
		}
	};
}
