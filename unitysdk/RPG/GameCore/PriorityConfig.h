#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PRIORITYCONFIG_METHOD_2_26B4D0CE3176D42E_OFFSET UNITYSDK_OFFSET(0x1D35B710)
#define RPG_GAMECORE_PRIORITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D35B7F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PriorityConfig_TypeDefinitionIndex = 16930;

	class PriorityConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* PriorityKeys; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRIORITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_26B4D0CE3176D42E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PriorityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PriorityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRIORITYCONFIG_METHOD_2_26B4D0CE3176D42E_OFFSET))(a1, a2);
		}
	};
}
