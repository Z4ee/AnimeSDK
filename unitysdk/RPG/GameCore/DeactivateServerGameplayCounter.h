#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DEACTIVATESERVERGAMEPLAYCOUNTER_METHOD_3_31F41DB3EA297774_OFFSET UNITYSDK_OFFSET(0x1714C280)
#define RPG_GAMECORE_DEACTIVATESERVERGAMEPLAYCOUNTER_METHOD_3_80E90434EBD47234_OFFSET UNITYSDK_OFFSET(0x1714C310)
#define RPG_GAMECORE_DEACTIVATESERVERGAMEPLAYCOUNTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1714C2E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeactivateServerGameplayCounter_TypeDefinitionIndex = 18861;

	class DeactivateServerGameplayCounter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEACTIVATESERVERGAMEPLAYCOUNTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_31F41DB3EA297774(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeactivateServerGameplayCounter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeactivateServerGameplayCounter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEACTIVATESERVERGAMEPLAYCOUNTER_METHOD_3_31F41DB3EA297774_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_80E90434EBD47234(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeactivateServerGameplayCounter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeactivateServerGameplayCounter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEACTIVATESERVERGAMEPLAYCOUNTER_METHOD_3_80E90434EBD47234_OFFSET))(a1, a2);
		}
	};
}
