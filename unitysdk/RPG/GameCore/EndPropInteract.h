#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ENDPROPINTERACT_METHOD_3_2687DC00D5DCBC0C_OFFSET UNITYSDK_OFFSET(0x1C04FAC0)
#define RPG_GAMECORE_ENDPROPINTERACT_METHOD_3_BB4711C081826949_OFFSET UNITYSDK_OFFSET(0x1C04FB90)
#define RPG_GAMECORE_ENDPROPINTERACT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C04FB80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EndPropInteract_TypeDefinitionIndex = 19605;

	class EndPropInteract : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDPROPINTERACT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2687DC00D5DCBC0C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EndPropInteract*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EndPropInteract*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDPROPINTERACT_METHOD_3_2687DC00D5DCBC0C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BB4711C081826949(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EndPropInteract* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EndPropInteract*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDPROPINTERACT_METHOD_3_BB4711C081826949_OFFSET))(a1, a2);
		}
	};
}
