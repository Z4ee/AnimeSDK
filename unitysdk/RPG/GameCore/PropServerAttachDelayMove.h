#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PROPSERVERATTACHDELAYMOVE_METHOD_3_21F22EA09030F2F8_OFFSET UNITYSDK_OFFSET(0x1D181B90)
#define RPG_GAMECORE_PROPSERVERATTACHDELAYMOVE_METHOD_3_A2E59E324D6B15BC_OFFSET UNITYSDK_OFFSET(0x1D181B40)
#define RPG_GAMECORE_PROPSERVERATTACHDELAYMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D181B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropServerAttachDelayMove_TypeDefinitionIndex = 20115;

	class PropServerAttachDelayMove : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSERVERATTACHDELAYMOVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A2E59E324D6B15BC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropServerAttachDelayMove*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropServerAttachDelayMove*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSERVERATTACHDELAYMOVE_METHOD_3_A2E59E324D6B15BC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_21F22EA09030F2F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropServerAttachDelayMove* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropServerAttachDelayMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSERVERATTACHDELAYMOVE_METHOD_3_21F22EA09030F2F8_OFFSET))(a1, a2);
		}
	};
}
