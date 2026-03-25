#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WOLFBROPUZZLEFUNCBTNLISTENER_METHOD_3_01063A3E33BC0536_OFFSET UNITYSDK_OFFSET(0x1790C620)
#define RPG_GAMECORE_WOLFBROPUZZLEFUNCBTNLISTENER_METHOD_3_FD05752A64A80DE7_OFFSET UNITYSDK_OFFSET(0x1790C6A0)
#define RPG_GAMECORE_WOLFBROPUZZLEFUNCBTNLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1790C670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WolfBroPuzzleFuncBtnListener_TypeDefinitionIndex = 19466;

	class WolfBroPuzzleFuncBtnListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* CallbackSequence; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROPUZZLEFUNCBTNLISTENER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_01063A3E33BC0536(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroPuzzleFuncBtnListener*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroPuzzleFuncBtnListener*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROPUZZLEFUNCBTNLISTENER_METHOD_3_01063A3E33BC0536_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FD05752A64A80DE7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroPuzzleFuncBtnListener* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroPuzzleFuncBtnListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROPUZZLEFUNCBTNLISTENER_METHOD_3_FD05752A64A80DE7_OFFSET))(a1, a2);
		}
	};
}
