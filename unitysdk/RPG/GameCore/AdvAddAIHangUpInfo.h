#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVADDAIHANGUPINFO_METHOD_3_7BA5A4A3B3AA7622_OFFSET UNITYSDK_OFFSET(0x1BE0C520)
#define RPG_GAMECORE_ADVADDAIHANGUPINFO_METHOD_3_8408FB33CA4ACE97_OFFSET UNITYSDK_OFFSET(0x1BE0C4E0)
#define RPG_GAMECORE_ADVADDAIHANGUPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE0C510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvAddAIHangUpInfo_TypeDefinitionIndex = 19453;

	class AdvAddAIHangUpInfo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* EntityInstanceID; // 0x20
		::RPG::GameCore::DynamicString* HangUpKey; // 0x28
		::System::Boolean AITickImmediately; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVADDAIHANGUPINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8408FB33CA4ACE97(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvAddAIHangUpInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvAddAIHangUpInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVADDAIHANGUPINFO_METHOD_3_8408FB33CA4ACE97_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7BA5A4A3B3AA7622(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvAddAIHangUpInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvAddAIHangUpInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVADDAIHANGUPINFO_METHOD_3_7BA5A4A3B3AA7622_OFFSET))(a1, a2);
		}
	};
}
