#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_SETCOUNTDOWNWARNING_METHOD_3_4082AF11AD67161B_OFFSET UNITYSDK_OFFSET(0x1E815CB0)
#define RPG_GAMECORE_SETCOUNTDOWNWARNING_METHOD_3_7FCAA7189A4AB7A8_OFFSET UNITYSDK_OFFSET(0x1E815CF0)
#define RPG_GAMECORE_SETCOUNTDOWNWARNING__CTOR_OFFSET UNITYSDK_OFFSET(0x1E815CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCountDownWarning_TypeDefinitionIndex = 22676;

	class SetCountDownWarning : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* CountDownTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCOUNTDOWNWARNING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4082AF11AD67161B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCountDownWarning*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCountDownWarning*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCOUNTDOWNWARNING_METHOD_3_4082AF11AD67161B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7FCAA7189A4AB7A8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCountDownWarning* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCountDownWarning*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCOUNTDOWNWARNING_METHOD_3_7FCAA7189A4AB7A8_OFFSET))(a1, a2);
		}
	};
}
