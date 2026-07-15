#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADDDYNAMICENTITYPARAM_METHOD_3_149836B19B5DF3C0_OFFSET UNITYSDK_OFFSET(0x1BE05000)
#define RPG_GAMECORE_ADDDYNAMICENTITYPARAM_METHOD_3_582262F7444F92DD_OFFSET UNITYSDK_OFFSET(0x1BE04FC0)
#define RPG_GAMECORE_ADDDYNAMICENTITYPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE04FF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddDynamicEntityParam_TypeDefinitionIndex = 21854;

	class AddDynamicEntityParam : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x20
		::RPG::GameCore::TargetEvaluator* ParamTargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDDYNAMICENTITYPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_582262F7444F92DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddDynamicEntityParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddDynamicEntityParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDDYNAMICENTITYPARAM_METHOD_3_582262F7444F92DD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_149836B19B5DF3C0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddDynamicEntityParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddDynamicEntityParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDDYNAMICENTITYPARAM_METHOD_3_149836B19B5DF3C0_OFFSET))(a1, a2);
		}
	};
}
