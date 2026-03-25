#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_OBSOLETE_METHOD_3_601E5534EC2E5D75_OFFSET UNITYSDK_OFFSET(0x17479830)
#define RPG_GAMECORE_OBSOLETE_METHOD_3_FFB7270A603CA904_OFFSET UNITYSDK_OFFSET(0x174797B0)
#define RPG_GAMECORE_OBSOLETE__CTOR_OFFSET UNITYSDK_OFFSET(0x17479800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int Obsolete_TypeDefinitionIndex = 22039;

	class Obsolete : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* Message; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OBSOLETE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FFB7270A603CA904(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Obsolete*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Obsolete*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OBSOLETE_METHOD_3_FFB7270A603CA904_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_601E5534EC2E5D75(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Obsolete* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Obsolete*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OBSOLETE_METHOD_3_601E5534EC2E5D75_OFFSET))(a1, a2);
		}
	};
}
