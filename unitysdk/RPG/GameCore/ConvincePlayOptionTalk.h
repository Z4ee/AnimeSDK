#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class OptionTalkInfo; }

#define RPG_GAMECORE_CONVINCEPLAYOPTIONTALK_METHOD_3_001DFCA637B39CC1_OFFSET UNITYSDK_OFFSET(0x1967E130)
#define RPG_GAMECORE_CONVINCEPLAYOPTIONTALK_METHOD_3_FC55B99B9CE8BF17_OFFSET UNITYSDK_OFFSET(0x1967E1B0)
#define RPG_GAMECORE_CONVINCEPLAYOPTIONTALK__CTOR_OFFSET UNITYSDK_OFFSET(0x1967E180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConvincePlayOptionTalk_TypeDefinitionIndex = 20624;

	class ConvincePlayOptionTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::OptionTalkInfo*>* OptionList; // 0x18
		::Il2CppArray<::System::UInt32>* CorrectOptionIndex; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEPLAYOPTIONTALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_001DFCA637B39CC1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConvincePlayOptionTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConvincePlayOptionTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEPLAYOPTIONTALK_METHOD_3_001DFCA637B39CC1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FC55B99B9CE8BF17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConvincePlayOptionTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConvincePlayOptionTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEPLAYOPTIONTALK_METHOD_3_FC55B99B9CE8BF17_OFFSET))(a1, a2);
		}
	};
}
