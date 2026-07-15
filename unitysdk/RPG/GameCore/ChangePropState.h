#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHANGEPROPSTATE_METHOD_3_8969AF821CA7D9D5_OFFSET UNITYSDK_OFFSET(0x1B71B0C0)
#define RPG_GAMECORE_CHANGEPROPSTATE_METHOD_3_E4DC3D22F01B1288_OFFSET UNITYSDK_OFFSET(0x1B71B080)
#define RPG_GAMECORE_CHANGEPROPSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B71B0B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangePropState_TypeDefinitionIndex = 19672;

	class ChangePropState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEPROPSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E4DC3D22F01B1288(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangePropState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangePropState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEPROPSTATE_METHOD_3_E4DC3D22F01B1288_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8969AF821CA7D9D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangePropState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangePropState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEPROPSTATE_METHOD_3_8969AF821CA7D9D5_OFFSET))(a1, a2);
		}
	};
}
