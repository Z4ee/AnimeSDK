#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_WAITGROUPPROPERTYCHANGE_METHOD_4_A63275ED416AC6EA_OFFSET UNITYSDK_OFFSET(0x1DEB9E20)
#define RPG_GAMECORE_WAITGROUPPROPERTYCHANGE_METHOD_4_BADF5D3D377D9797_OFFSET UNITYSDK_OFFSET(0x1DEB9DD0)
#define RPG_GAMECORE_WAITGROUPPROPERTYCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB9E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitGroupPropertyChange_TypeDefinitionIndex = 20495;

	class WaitGroupPropertyChange : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::System::UInt32 GroupID; // 0x20
		::RPG::GameCore::DynamicString* Name; // 0x28
		::RPG::GameCore::PredicateConfig* Condition; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITGROUPPROPERTYCHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BADF5D3D377D9797(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitGroupPropertyChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitGroupPropertyChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITGROUPPROPERTYCHANGE_METHOD_4_BADF5D3D377D9797_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A63275ED416AC6EA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitGroupPropertyChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitGroupPropertyChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITGROUPPROPERTYCHANGE_METHOD_4_A63275ED416AC6EA_OFFSET))(a1, a2);
		}
	};
}
