#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_WAITMATCHTHREEBIRDLOCATIONCHANGE_METHOD_4_79C23954B52C2212_OFFSET UNITYSDK_OFFSET(0x1DEBB940)
#define RPG_GAMECORE_WAITMATCHTHREEBIRDLOCATIONCHANGE_METHOD_4_F85C79CEA2C06003_OFFSET UNITYSDK_OFFSET(0x1DEBB8F0)
#define RPG_GAMECORE_WAITMATCHTHREEBIRDLOCATIONCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEBB930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitMatchThreeBirdLocationChange_TypeDefinitionIndex = 20744;

	class WaitMatchThreeBirdLocationChange : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::RPG::GameCore::DynamicFloat* LocationID; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMATCHTHREEBIRDLOCATIONCHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F85C79CEA2C06003(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitMatchThreeBirdLocationChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitMatchThreeBirdLocationChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMATCHTHREEBIRDLOCATIONCHANGE_METHOD_4_F85C79CEA2C06003_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_79C23954B52C2212(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitMatchThreeBirdLocationChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitMatchThreeBirdLocationChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMATCHTHREEBIRDLOCATIONCHANGE_METHOD_4_79C23954B52C2212_OFFSET))(a1, a2);
		}
	};
}
