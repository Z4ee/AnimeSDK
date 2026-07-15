#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHANGEANIMEVENTCONFIG_METHOD_3_743016DD3ABFFF3F_OFFSET UNITYSDK_OFFSET(0x1B717130)
#define RPG_GAMECORE_CHANGEANIMEVENTCONFIG_METHOD_3_8CD3AD66C7AB114B_OFFSET UNITYSDK_OFFSET(0x1B7171D0)
#define RPG_GAMECORE_CHANGEANIMEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B717190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeAnimEventConfig_TypeDefinitionIndex = 22057;

	class ChangeAnimEventConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::System::String*>* ConfigList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEANIMEVENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_743016DD3ABFFF3F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeAnimEventConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeAnimEventConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEANIMEVENTCONFIG_METHOD_3_743016DD3ABFFF3F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8CD3AD66C7AB114B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeAnimEventConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeAnimEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEANIMEVENTCONFIG_METHOD_3_8CD3AD66C7AB114B_OFFSET))(a1, a2);
		}
	};
}
