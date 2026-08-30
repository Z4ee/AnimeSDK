#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LogicStateType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlayerModule; }

#define CLASS_1_DD82D6A2390AAA97_GET_ISENTERED_OFFSET UNITYSDK_OFFSET(0x130A6F50)
#define CLASS_1_DD82D6A2390AAA97_METHOD_1_8B48A20015332116_OFFSET UNITYSDK_OFFSET(0x130A6F10)
#define CLASS_1_DD82D6A2390AAA97_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x130A7010)
#define CLASS_1_DD82D6A2390AAA97_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x130A7100)
#define CLASS_1_DD82D6A2390AAA97_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x130A70C0)
#define CLASS_1_DD82D6A2390AAA97_METHOD_1_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x130A7140)
#define CLASS_1_DD82D6A2390AAA97_METHOD_1_FA6CBD3094608463_OFFSET UNITYSDK_OFFSET(0x130A7070)
#define CLASS_1_DD82D6A2390AAA97_METHOD_1_FE60265F2E236E58_1_OFFSET UNITYSDK_OFFSET(0x130A6FC0)
#define CLASS_1_DD82D6A2390AAA97_METHOD_1_FE60265F2E236E58_OFFSET UNITYSDK_OFFSET(0x130A6F70)
#define CLASS_1_DD82D6A2390AAA97_SET_ISENTERED_OFFSET UNITYSDK_OFFSET(0x130A6F60)
#define CLASS_1_DD82D6A2390AAA97__CTOR_OFFSET UNITYSDK_OFFSET(0x130A6F00)

inline static constexpr unsigned int Class_1_DD82D6A2390AAA97_TypeDefinitionIndex = 66714;

class Class_1_DD82D6A2390AAA97 : public ::System::Object
{
public:
	::RPG::Client::PlayerModule* EOBLJJBOBIN; // 0x10
	::System::Boolean _IsEntered_k__BackingField; // 0x18

	::System::Void _ctor(::RPG::Client::PlayerModule* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerModule*))((::PBYTE)hIl2Cpp + CLASS_1_DD82D6A2390AAA97__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::LogicStateType Method_1_8B48A20015332116()
	{
		return ((::RPG::Client::LogicStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD82D6A2390AAA97_METHOD_1_8B48A20015332116_OFFSET))(this);
	}

	::System::Boolean get_IsEntered()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD82D6A2390AAA97_GET_ISENTERED_OFFSET))(this);
	}

	::System::Void set_IsEntered(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DD82D6A2390AAA97_SET_ISENTERED_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_FE60265F2E236E58(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_DD82D6A2390AAA97_METHOD_1_FE60265F2E236E58_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_FE60265F2E236E58_1(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_DD82D6A2390AAA97_METHOD_1_FE60265F2E236E58_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD82D6A2390AAA97_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_1_FA6CBD3094608463(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_DD82D6A2390AAA97_METHOD_1_FA6CBD3094608463_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD82D6A2390AAA97_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD82D6A2390AAA97_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD82D6A2390AAA97_METHOD_1_EAD10B3E55E2C4C5_OFFSET))(this);
	}
};
