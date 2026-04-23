#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_QTECATCHGHOSTREWINDLISTENER_METHOD_3_2ACFA36BBEE28794_OFFSET UNITYSDK_OFFSET(0x18C7FFC0)
#define RPG_GAMECORE_QTECATCHGHOSTREWINDLISTENER_METHOD_3_A2BB98A2E2FC709C_OFFSET UNITYSDK_OFFSET(0x18C80040)
#define RPG_GAMECORE_QTECATCHGHOSTREWINDLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x18C80010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int QteCatchGhostRewindListener_TypeDefinitionIndex = 20907;

	class QteCatchGhostRewindListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnStartDrag; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEnterInterval; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnReleaseInInterval; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPressInInterval; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFailInInterval; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFailOutInterval; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QTECATCHGHOSTREWINDLISTENER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2ACFA36BBEE28794(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::QteCatchGhostRewindListener*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::QteCatchGhostRewindListener*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QTECATCHGHOSTREWINDLISTENER_METHOD_3_2ACFA36BBEE28794_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A2BB98A2E2FC709C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::QteCatchGhostRewindListener* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::QteCatchGhostRewindListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QTECATCHGHOSTREWINDLISTENER_METHOD_3_A2BB98A2E2FC709C_OFFSET))(a1, a2);
		}
	};
}
