#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVNPCSEARCHPROP_METHOD_3_6CA52367EF33A472_OFFSET UNITYSDK_OFFSET(0x1865BCC0)
#define RPG_GAMECORE_ADVNPCSEARCHPROP_METHOD_3_F9BFA0B410AECB06_OFFSET UNITYSDK_OFFSET(0x1865BBB0)
#define RPG_GAMECORE_ADVNPCSEARCHPROP__CTOR_OFFSET UNITYSDK_OFFSET(0x1865BC90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNpcSearchProp_TypeDefinitionIndex = 18915;

	class AdvNpcSearchProp : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCSEARCHPROP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F9BFA0B410AECB06(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNpcSearchProp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNpcSearchProp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCSEARCHPROP_METHOD_3_F9BFA0B410AECB06_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6CA52367EF33A472(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNpcSearchProp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNpcSearchProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCSEARCHPROP_METHOD_3_6CA52367EF33A472_OFFSET))(a1, a2);
		}
	};
}
