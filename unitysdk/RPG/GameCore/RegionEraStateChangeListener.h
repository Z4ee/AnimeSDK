#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_REGIONERASTATECHANGELISTENER_METHOD_3_9FA85A74C45250A5_OFFSET UNITYSDK_OFFSET(0x18C95D90)
#define RPG_GAMECORE_REGIONERASTATECHANGELISTENER_METHOD_3_E811E9A10293FB74_OFFSET UNITYSDK_OFFSET(0x18C95E10)
#define RPG_GAMECORE_REGIONERASTATECHANGELISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x18C95DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RegionEraStateChangeListener_TypeDefinitionIndex = 21224;

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

		static ::System::Void Method_3_9FA85A74C45250A5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RegionEraStateChangeListener*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RegionEraStateChangeListener*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REGIONERASTATECHANGELISTENER_METHOD_3_9FA85A74C45250A5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E811E9A10293FB74(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RegionEraStateChangeListener* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RegionEraStateChangeListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REGIONERASTATECHANGELISTENER_METHOD_3_E811E9A10293FB74_OFFSET))(a1, a2);
		}
	};
}
