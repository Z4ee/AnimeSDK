#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TARGETFETCHPARTNER_METHOD_4_446F09681B0C4E48_OFFSET UNITYSDK_OFFSET(0x18EE5590)
#define RPG_GAMECORE_TARGETFETCHPARTNER_METHOD_4_A22D8A1262A37AFC_OFFSET UNITYSDK_OFFSET(0x18EDF260)
#define RPG_GAMECORE_TARGETFETCHPARTNER__CTOR_OFFSET UNITYSDK_OFFSET(0x18EDF210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchPartner_TypeDefinitionIndex = 22925;

	class TargetFetchPartner : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x10
		::System::String* Name; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARTNER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_446F09681B0C4E48(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchPartner*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchPartner*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARTNER_METHOD_4_446F09681B0C4E48_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A22D8A1262A37AFC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchPartner* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchPartner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARTNER_METHOD_4_A22D8A1262A37AFC_OFFSET))(a1, a2);
		}
	};
}
