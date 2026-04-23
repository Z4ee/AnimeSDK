#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMPAREPROPSTATE_METHOD_3_244AF7C281CD090C_OFFSET UNITYSDK_OFFSET(0x18827EE0)
#define RPG_GAMECORE_COMPAREPROPSTATE_METHOD_3_D4710D65282ACD8C_OFFSET UNITYSDK_OFFSET(0x18827F70)
#define RPG_GAMECORE_COMPAREPROPSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18827F40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComparePropState_TypeDefinitionIndex = 20461;

	class ComparePropState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPAREPROPSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_244AF7C281CD090C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComparePropState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComparePropState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPAREPROPSTATE_METHOD_3_244AF7C281CD090C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D4710D65282ACD8C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComparePropState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComparePropState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPAREPROPSTATE_METHOD_3_D4710D65282ACD8C_OFFSET))(a1, a2);
		}
	};
}
