#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TARGETFETCHUNIQUENAMEENTITY_METHOD_4_B2F009FEB93A24E1_OFFSET UNITYSDK_OFFSET(0x18EE6210)
#define RPG_GAMECORE_TARGETFETCHUNIQUENAMEENTITY_METHOD_4_CAECCF00305CA616_OFFSET UNITYSDK_OFFSET(0x18EE0DE0)
#define RPG_GAMECORE_TARGETFETCHUNIQUENAMEENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x18EE0D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchUniqueNameEntity_TypeDefinitionIndex = 22924;

	class TargetFetchUniqueNameEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::String* UniqueName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHUNIQUENAMEENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B2F009FEB93A24E1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchUniqueNameEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchUniqueNameEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHUNIQUENAMEENTITY_METHOD_4_B2F009FEB93A24E1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CAECCF00305CA616(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchUniqueNameEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchUniqueNameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHUNIQUENAMEENTITY_METHOD_4_CAECCF00305CA616_OFFSET))(a1, a2);
		}
	};
}
