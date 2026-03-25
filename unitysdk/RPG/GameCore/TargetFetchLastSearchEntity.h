#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY_METHOD_4_07C1FA8E468E80F1_OFFSET UNITYSDK_OFFSET(0x177B5EE0)
#define RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY_METHOD_4_90B9C8A918CA3D0F_OFFSET UNITYSDK_OFFSET(0x177BEEE0)
#define RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x177B5E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchLastSearchEntity_TypeDefinitionIndex = 22152;

	class TargetFetchLastSearchEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_90B9C8A918CA3D0F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchLastSearchEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchLastSearchEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY_METHOD_4_90B9C8A918CA3D0F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_07C1FA8E468E80F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchLastSearchEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchLastSearchEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY_METHOD_4_07C1FA8E468E80F1_OFFSET))(a1, a2);
		}
	};
}
