#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_WAITGRAPHDYNAMICVALUECHANGE_METHOD_4_1839A79FFB1125EC_OFFSET UNITYSDK_OFFSET(0x190FF230)
#define RPG_GAMECORE_WAITGRAPHDYNAMICVALUECHANGE_METHOD_4_B704497C12159B08_OFFSET UNITYSDK_OFFSET(0x190FF150)
#define RPG_GAMECORE_WAITGRAPHDYNAMICVALUECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x190FF1D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitGraphDynamicValueChange_TypeDefinitionIndex = 19691;

	class WaitGraphDynamicValueChange : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::System::String* Name; // 0x20
		::RPG::GameCore::PredicateConfig* Condition; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITGRAPHDYNAMICVALUECHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B704497C12159B08(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitGraphDynamicValueChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitGraphDynamicValueChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITGRAPHDYNAMICVALUECHANGE_METHOD_4_B704497C12159B08_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1839A79FFB1125EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitGraphDynamicValueChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitGraphDynamicValueChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITGRAPHDYNAMICVALUECHANGE_METHOD_4_1839A79FFB1125EC_OFFSET))(a1, a2);
		}
	};
}
