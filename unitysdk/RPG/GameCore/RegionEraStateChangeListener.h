#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_REGIONERASTATECHANGELISTENER_METHOD_3_220F7E3F7E1FDBF2_OFFSET UNITYSDK_OFFSET(0x1D390BF0)
#define RPG_GAMECORE_REGIONERASTATECHANGELISTENER_METHOD_3_60ABFEB71BB6593B_OFFSET UNITYSDK_OFFSET(0x1D390BA0)
#define RPG_GAMECORE_REGIONERASTATECHANGELISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D390BE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RegionEraStateChangeListener_TypeDefinitionIndex = 22097;

	class RegionEraStateChangeListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSwitchToState1; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSwitchToState2; // 0x20
		::System::Boolean ListenCallbackLoop; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REGIONERASTATECHANGELISTENER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_60ABFEB71BB6593B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RegionEraStateChangeListener*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RegionEraStateChangeListener*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REGIONERASTATECHANGELISTENER_METHOD_3_60ABFEB71BB6593B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_220F7E3F7E1FDBF2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RegionEraStateChangeListener* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RegionEraStateChangeListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REGIONERASTATECHANGELISTENER_METHOD_3_220F7E3F7E1FDBF2_OFFSET))(a1, a2);
		}
	};
}
