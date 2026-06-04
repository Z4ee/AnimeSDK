#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameFlowType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ENTERGAMEFLOW_METHOD_3_A306605762AA5A6A_OFFSET UNITYSDK_OFFSET(0x196E9CA0)
#define RPG_GAMECORE_ENTERGAMEFLOW_METHOD_3_D47FCF29810D6ADB_OFFSET UNITYSDK_OFFSET(0x196E9D20)
#define RPG_GAMECORE_ENTERGAMEFLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x196E9CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnterGameFlow_TypeDefinitionIndex = 22739;

	class EnterGameFlow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::GameFlowType Type; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicString*>* Parameters; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERGAMEFLOW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A306605762AA5A6A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnterGameFlow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnterGameFlow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERGAMEFLOW_METHOD_3_A306605762AA5A6A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D47FCF29810D6ADB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnterGameFlow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnterGameFlow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERGAMEFLOW_METHOD_3_D47FCF29810D6ADB_OFFSET))(a1, a2);
		}
	};
}
