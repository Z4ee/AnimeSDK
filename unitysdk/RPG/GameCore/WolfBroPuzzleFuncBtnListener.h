#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WOLFBROPUZZLEFUNCBTNLISTENER_METHOD_3_7FB4B5D89ACDECAC_OFFSET UNITYSDK_OFFSET(0x1D6B3800)
#define RPG_GAMECORE_WOLFBROPUZZLEFUNCBTNLISTENER_METHOD_3_FD05752A64A80DE7_OFFSET UNITYSDK_OFFSET(0x1D6B3840)
#define RPG_GAMECORE_WOLFBROPUZZLEFUNCBTNLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B3830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WolfBroPuzzleFuncBtnListener_TypeDefinitionIndex = 20922;

	class WolfBroPuzzleFuncBtnListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* CallbackSequence; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROPUZZLEFUNCBTNLISTENER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7FB4B5D89ACDECAC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroPuzzleFuncBtnListener*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroPuzzleFuncBtnListener*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROPUZZLEFUNCBTNLISTENER_METHOD_3_7FB4B5D89ACDECAC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FD05752A64A80DE7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroPuzzleFuncBtnListener* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroPuzzleFuncBtnListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROPUZZLEFUNCBTNLISTENER_METHOD_3_FD05752A64A80DE7_OFFSET))(a1, a2);
		}
	};
}
