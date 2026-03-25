#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEEVENTLISTENER_METHOD_3_5F25FA9C230F8774_OFFSET UNITYSDK_OFFSET(0x1738DB20)
#define RPG_GAMECORE_MARBLEEVENTLISTENER_METHOD_3_CD497E838E3127DB_OFFSET UNITYSDK_OFFSET(0x1738DBA0)
#define RPG_GAMECORE_MARBLEEVENTLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1738DB70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleEventListener_TypeDefinitionIndex = 20219;

	class MarbleEventListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* Finish; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* SealDie; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* SealDieFinish; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* LastHit; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEEVENTLISTENER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5F25FA9C230F8774(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleEventListener*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleEventListener*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEEVENTLISTENER_METHOD_3_5F25FA9C230F8774_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CD497E838E3127DB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleEventListener* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleEventListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEEVENTLISTENER_METHOD_3_CD497E838E3127DB_OFFSET))(a1, a2);
		}
	};
}
