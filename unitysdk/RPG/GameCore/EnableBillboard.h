#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ENABLEBILLBOARD_METHOD_3_749016EB8896BE68_OFFSET UNITYSDK_OFFSET(0x1D7BC6F0)
#define RPG_GAMECORE_ENABLEBILLBOARD_METHOD_3_F267538D9F3936CA_OFFSET UNITYSDK_OFFSET(0x1D7BC670)
#define RPG_GAMECORE_ENABLEBILLBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7BC6C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableBillboard_TypeDefinitionIndex = 20224;

	class EnableBillboard : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Enable; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEBILLBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F267538D9F3936CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableBillboard*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableBillboard*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEBILLBOARD_METHOD_3_F267538D9F3936CA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_749016EB8896BE68(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableBillboard* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableBillboard*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEBILLBOARD_METHOD_3_749016EB8896BE68_OFFSET))(a1, a2);
		}
	};
}
