#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_DYNAMICTRAILMODULE_CLASS_1_7EE1B066A3FF5E80_METHOD_1_5F5CB296827BD99A_OFFSET UNITYSDK_OFFSET(0xCDB6360)
#define RPG_CLIENT_DYNAMICTRAILMODULE_CLASS_1_7EE1B066A3FF5E80_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xCDB6510)
#define RPG_CLIENT_DYNAMICTRAILMODULE_CLASS_1_7EE1B066A3FF5E80__CTOR_OFFSET UNITYSDK_OFFSET(0xCDB6350)

namespace RPG::Client
{
	inline static constexpr unsigned int DynamicTrailModule_Class_1_7EE1B066A3FF5E80_TypeDefinitionIndex = 70408;

	class DynamicTrailModule_Class_1_7EE1B066A3FF5E80 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* HLMJFIOJLNF; // 0x10
		::Il2CppArray<::System::Single>* KIBPKPGDECO; // 0x18
		::Il2CppArray<::System::Single>* PICLIGEAJFN; // 0x20
		::Il2CppArray<::System::Single>* KCBPBMOJOKJ; // 0x28
		::Il2CppArray<::System::Single>* OGDIJEEIOCG; // 0x30
		::Il2CppArray<::System::Single>* BPAJHNDPGKG; // 0x38
		::Il2CppArray<::System::Single>* OGPNODHENKN; // 0x40
		::Il2CppArray<::System::Single>* JPDBDLEEHGK; // 0x48
		::Il2CppArray<::System::Single>* EIBGEGPABFK; // 0x50
		::Il2CppArray<::System::Single>* IMBNIMPKJHE; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICTRAILMODULE_CLASS_1_7EE1B066A3FF5E80__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_5F5CB296827BD99A(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICTRAILMODULE_CLASS_1_7EE1B066A3FF5E80_METHOD_1_5F5CB296827BD99A_OFFSET))(this, a1);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICTRAILMODULE_CLASS_1_7EE1B066A3FF5E80_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
