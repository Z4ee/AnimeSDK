#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVNPCSEARCHPROP_METHOD_3_6CA52367EF33A472_OFFSET UNITYSDK_OFFSET(0x1BE26A20)
#define RPG_GAMECORE_ADVNPCSEARCHPROP_METHOD_3_7728DAE28861F5EF_OFFSET UNITYSDK_OFFSET(0x1BE26950)
#define RPG_GAMECORE_ADVNPCSEARCHPROP__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE26A10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNpcSearchProp_TypeDefinitionIndex = 19221;

	class AdvNpcSearchProp : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCSEARCHPROP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7728DAE28861F5EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNpcSearchProp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNpcSearchProp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCSEARCHPROP_METHOD_3_7728DAE28861F5EF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6CA52367EF33A472(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNpcSearchProp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNpcSearchProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCSEARCHPROP_METHOD_3_6CA52367EF33A472_OFFSET))(a1, a2);
		}
	};
}
