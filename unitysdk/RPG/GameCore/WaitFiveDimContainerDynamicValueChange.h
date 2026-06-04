#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_WAITFIVEDIMCONTAINERDYNAMICVALUECHANGE_METHOD_4_0237B88CDA9CC979_OFFSET UNITYSDK_OFFSET(0x19E551B0)
#define RPG_GAMECORE_WAITFIVEDIMCONTAINERDYNAMICVALUECHANGE_METHOD_4_95E5D7F7EC62C681_OFFSET UNITYSDK_OFFSET(0x19E55290)
#define RPG_GAMECORE_WAITFIVEDIMCONTAINERDYNAMICVALUECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E55230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitFiveDimContainerDynamicValueChange_TypeDefinitionIndex = 20246;

	class WaitFiveDimContainerDynamicValueChange : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::System::String* Name; // 0x20
		::RPG::GameCore::PredicateConfig* Condition; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFIVEDIMCONTAINERDYNAMICVALUECHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0237B88CDA9CC979(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitFiveDimContainerDynamicValueChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitFiveDimContainerDynamicValueChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFIVEDIMCONTAINERDYNAMICVALUECHANGE_METHOD_4_0237B88CDA9CC979_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_95E5D7F7EC62C681(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitFiveDimContainerDynamicValueChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitFiveDimContainerDynamicValueChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFIVEDIMCONTAINERDYNAMICVALUECHANGE_METHOD_4_95E5D7F7EC62C681_OFFSET))(a1, a2);
		}
	};
}
