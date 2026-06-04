#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLESIMULATELISTENER_METHOD_3_1CEFC8557629D735_OFFSET UNITYSDK_OFFSET(0x198DB1C0)
#define RPG_GAMECORE_MARBLESIMULATELISTENER_METHOD_3_AEE7E88706006484_OFFSET UNITYSDK_OFFSET(0x198DB240)
#define RPG_GAMECORE_MARBLESIMULATELISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x198DB210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleSimulateListener_TypeDefinitionIndex = 22971;

	class MarbleSimulateListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSimulateEnd; // 0x18
		::System::UInt32 Round; // 0x20
		::System::UInt32 InstanceId; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESIMULATELISTENER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1CEFC8557629D735(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleSimulateListener*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleSimulateListener*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESIMULATELISTENER_METHOD_3_1CEFC8557629D735_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AEE7E88706006484(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleSimulateListener* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleSimulateListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESIMULATELISTENER_METHOD_3_AEE7E88706006484_OFFSET))(a1, a2);
		}
	};
}
