#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UniversalHotFixBaseTask.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_UNIVERSALHOTFIXTASKA_METHOD_4_86304ECEDF030924_OFFSET UNITYSDK_OFFSET(0x190E4C40)
#define RPG_GAMECORE_UNIVERSALHOTFIXTASKA_METHOD_4_AA02E339AFAD3865_OFFSET UNITYSDK_OFFSET(0x190E5210)
#define RPG_GAMECORE_UNIVERSALHOTFIXTASKA__CTOR_OFFSET UNITYSDK_OFFSET(0x190E4C10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UniversalHotFixTaskA_TypeDefinitionIndex = 22326;

	class UniversalHotFixTaskA : public ::RPG::GameCore::UniversalHotFixBaseTask
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXTASKA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_AA02E339AFAD3865(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UniversalHotFixTaskA*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UniversalHotFixTaskA*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXTASKA_METHOD_4_AA02E339AFAD3865_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_86304ECEDF030924(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UniversalHotFixTaskA* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UniversalHotFixTaskA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXTASKA_METHOD_4_86304ECEDF030924_OFFSET))(a1, a2);
		}
	};
}
