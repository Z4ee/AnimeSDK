#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ENDPROPINTERACT_METHOD_3_2276A1DBDB0C37D5_OFFSET UNITYSDK_OFFSET(0x188A8490)
#define RPG_GAMECORE_ENDPROPINTERACT_METHOD_3_BB4711C081826949_OFFSET UNITYSDK_OFFSET(0x188A85A0)
#define RPG_GAMECORE_ENDPROPINTERACT__CTOR_OFFSET UNITYSDK_OFFSET(0x188A8570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EndPropInteract_TypeDefinitionIndex = 19339;

	class EndPropInteract : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDPROPINTERACT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2276A1DBDB0C37D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EndPropInteract*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EndPropInteract*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDPROPINTERACT_METHOD_3_2276A1DBDB0C37D5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BB4711C081826949(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EndPropInteract* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EndPropInteract*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDPROPINTERACT_METHOD_3_BB4711C081826949_OFFSET))(a1, a2);
		}
	};
}
