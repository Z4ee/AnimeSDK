#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_INITGRIDFIGHTSTATISTICSBINDING_METHOD_3_6FE92D0E2E87AE17_OFFSET UNITYSDK_OFFSET(0x18A1E440)
#define RPG_GAMECORE_INITGRIDFIGHTSTATISTICSBINDING_METHOD_3_E4A8E46A56DA7D86_OFFSET UNITYSDK_OFFSET(0x18A1E4C0)
#define RPG_GAMECORE_INITGRIDFIGHTSTATISTICSBINDING__CTOR_OFFSET UNITYSDK_OFFSET(0x18A1E490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InitGridFightStatisticsBinding_TypeDefinitionIndex = 21426;

	class InitGridFightStatisticsBinding : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTopDamagerRoleChanged; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITGRIDFIGHTSTATISTICSBINDING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6FE92D0E2E87AE17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InitGridFightStatisticsBinding*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InitGridFightStatisticsBinding*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITGRIDFIGHTSTATISTICSBINDING_METHOD_3_6FE92D0E2E87AE17_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E4A8E46A56DA7D86(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InitGridFightStatisticsBinding* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InitGridFightStatisticsBinding*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITGRIDFIGHTSTATISTICSBINDING_METHOD_3_E4A8E46A56DA7D86_OFFSET))(a1, a2);
		}
	};
}
