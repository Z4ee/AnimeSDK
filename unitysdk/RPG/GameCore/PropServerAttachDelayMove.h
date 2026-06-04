#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PROPSERVERATTACHDELAYMOVE_METHOD_3_21F22EA09030F2F8_OFFSET UNITYSDK_OFFSET(0x19A96520)
#define RPG_GAMECORE_PROPSERVERATTACHDELAYMOVE_METHOD_3_35FF9EADC298B8F8_OFFSET UNITYSDK_OFFSET(0x19A96490)
#define RPG_GAMECORE_PROPSERVERATTACHDELAYMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x19A964F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropServerAttachDelayMove_TypeDefinitionIndex = 19213;

	class PropServerAttachDelayMove : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSERVERATTACHDELAYMOVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_35FF9EADC298B8F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropServerAttachDelayMove*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropServerAttachDelayMove*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSERVERATTACHDELAYMOVE_METHOD_3_35FF9EADC298B8F8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_21F22EA09030F2F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropServerAttachDelayMove* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropServerAttachDelayMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSERVERATTACHDELAYMOVE_METHOD_3_21F22EA09030F2F8_OFFSET))(a1, a2);
		}
	};
}
