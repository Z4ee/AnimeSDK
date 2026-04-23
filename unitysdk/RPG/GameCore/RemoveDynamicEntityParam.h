#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_REMOVEDYNAMICENTITYPARAM_METHOD_3_6367A5F106734EE5_OFFSET UNITYSDK_OFFSET(0x18CA3450)
#define RPG_GAMECORE_REMOVEDYNAMICENTITYPARAM_METHOD_3_8274B42B3CC46CA6_OFFSET UNITYSDK_OFFSET(0x18CA33D0)
#define RPG_GAMECORE_REMOVEDYNAMICENTITYPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x18CA3420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveDynamicEntityParam_TypeDefinitionIndex = 21565;

	class RemoveDynamicEntityParam : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x20
		::RPG::GameCore::TargetEvaluator* ParamTargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEDYNAMICENTITYPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8274B42B3CC46CA6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveDynamicEntityParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveDynamicEntityParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEDYNAMICENTITYPARAM_METHOD_3_8274B42B3CC46CA6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6367A5F106734EE5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveDynamicEntityParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveDynamicEntityParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEDYNAMICENTITYPARAM_METHOD_3_6367A5F106734EE5_OFFSET))(a1, a2);
		}
	};
}
