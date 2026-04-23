#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVADDAIHANGUPINFO_METHOD_3_1CCE777D8897F41F_OFFSET UNITYSDK_OFFSET(0x18645B10)
#define RPG_GAMECORE_ADVADDAIHANGUPINFO_METHOD_3_7BA5A4A3B3AA7622_OFFSET UNITYSDK_OFFSET(0x18645B90)
#define RPG_GAMECORE_ADVADDAIHANGUPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18645B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvAddAIHangUpInfo_TypeDefinitionIndex = 19171;

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

		static ::System::Void Method_3_1CCE777D8897F41F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvAddAIHangUpInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvAddAIHangUpInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVADDAIHANGUPINFO_METHOD_3_1CCE777D8897F41F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7BA5A4A3B3AA7622(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvAddAIHangUpInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvAddAIHangUpInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVADDAIHANGUPINFO_METHOD_3_7BA5A4A3B3AA7622_OFFSET))(a1, a2);
		}
	};
}
