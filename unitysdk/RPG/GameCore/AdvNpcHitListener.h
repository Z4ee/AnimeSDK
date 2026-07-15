#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVNPCHITLISTENER_METHOD_3_35524E5E72E0C04D_OFFSET UNITYSDK_OFFSET(0x1BE25450)
#define RPG_GAMECORE_ADVNPCHITLISTENER_METHOD_3_C627DB71950689F7_OFFSET UNITYSDK_OFFSET(0x1BE254D0)
#define RPG_GAMECORE_ADVNPCHITLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE254A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNpcHitListener_TypeDefinitionIndex = 21214;

	class AdvNpcHitListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnHit; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCHITLISTENER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_35524E5E72E0C04D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNpcHitListener*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNpcHitListener*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCHITLISTENER_METHOD_3_35524E5E72E0C04D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C627DB71950689F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNpcHitListener* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNpcHitListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCHITLISTENER_METHOD_3_C627DB71950689F7_OFFSET))(a1, a2);
		}
	};
}
