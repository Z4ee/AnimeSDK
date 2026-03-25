#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class OptionTalkInfo; }

#define RPG_GAMECORE_CONVINCEPLAYOPTIONTALK_METHOD_3_CFB1CB6499F30335_OFFSET UNITYSDK_OFFSET(0x17137B60)
#define RPG_GAMECORE_CONVINCEPLAYOPTIONTALK_METHOD_3_ED771F327B9729F3_OFFSET UNITYSDK_OFFSET(0x17137AE0)
#define RPG_GAMECORE_CONVINCEPLAYOPTIONTALK__CTOR_OFFSET UNITYSDK_OFFSET(0x17137B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConvincePlayOptionTalk_TypeDefinitionIndex = 20015;

	class ConvincePlayOptionTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::OptionTalkInfo*>* OptionList; // 0x18
		::Il2CppArray<::System::UInt32>* CorrectOptionIndex; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEPLAYOPTIONTALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_ED771F327B9729F3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConvincePlayOptionTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConvincePlayOptionTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEPLAYOPTIONTALK_METHOD_3_ED771F327B9729F3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CFB1CB6499F30335(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConvincePlayOptionTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConvincePlayOptionTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEPLAYOPTIONTALK_METHOD_3_CFB1CB6499F30335_OFFSET))(a1, a2);
		}
	};
}
