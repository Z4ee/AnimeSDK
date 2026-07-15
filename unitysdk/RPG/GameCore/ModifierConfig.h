#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ModifierStacking.h"

class Class_1_1C30CE192ABE4C54;
class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskListTemplate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MODIFIERCONFIG_METHOD_2_9C1AB945BD3BF1D2_OFFSET UNITYSDK_OFFSET(0x1AF70F90)
#define RPG_GAMECORE_MODIFIERCONFIG_METHOD_2_E8D2312C4DC70C83_OFFSET UNITYSDK_OFFSET(0x1AF70C30)
#define RPG_GAMECORE_MODIFIERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF70F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierConfig_TypeDefinitionIndex = 15040;

	class ModifierConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 Priority; // 0x10
		::System::Int32 Count; // 0x14
		::RPG::GameCore::ModifierStacking Stacking; // 0x18
		::Class_1_1C30CE192ABE4C54* DynamicValues; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* DynamicStrings; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskListTemplate*>* TaskListTemplate; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E8D2312C4DC70C83(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifierConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifierConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERCONFIG_METHOD_2_E8D2312C4DC70C83_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_9C1AB945BD3BF1D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifierConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifierConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERCONFIG_METHOD_2_9C1AB945BD3BF1D2_OFFSET))(a1, a2);
		}
	};
}
