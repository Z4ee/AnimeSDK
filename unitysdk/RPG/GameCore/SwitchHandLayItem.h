#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SWITCHHANDLAYITEM_METHOD_3_27B623279493809A_OFFSET UNITYSDK_OFFSET(0x177951C0)
#define RPG_GAMECORE_SWITCHHANDLAYITEM_METHOD_3_B46724EE08669C0C_OFFSET UNITYSDK_OFFSET(0x17795240)
#define RPG_GAMECORE_SWITCHHANDLAYITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x17795210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchHandLayItem_TypeDefinitionIndex = 19296;

	class SwitchHandLayItem : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Single WaitAnimTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDLAYITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_27B623279493809A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchHandLayItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchHandLayItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDLAYITEM_METHOD_3_27B623279493809A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B46724EE08669C0C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchHandLayItem* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchHandLayItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDLAYITEM_METHOD_3_B46724EE08669C0C_OFFSET))(a1, a2);
		}
	};
}
