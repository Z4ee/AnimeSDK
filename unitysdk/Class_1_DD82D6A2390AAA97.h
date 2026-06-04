#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LogicStateType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlayerModule; }

#define CLASS_1_DD82D6A2390AAA97_GET_ISENTERED_OFFSET UNITYSDK_OFFSET(0x13677A30)
#define CLASS_1_DD82D6A2390AAA97_METHOD_1_70C618A9A54396F2_OFFSET UNITYSDK_OFFSET(0x13677A20)
#define CLASS_1_DD82D6A2390AAA97_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x13677AF0)
#define CLASS_1_DD82D6A2390AAA97_METHOD_1_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x13677C20)
#define CLASS_1_DD82D6A2390AAA97_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x13677BE0)
#define CLASS_1_DD82D6A2390AAA97_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13677BA0)
#define CLASS_1_DD82D6A2390AAA97_METHOD_1_FA6CBD3094608463_OFFSET UNITYSDK_OFFSET(0x13677B50)
#define CLASS_1_DD82D6A2390AAA97_METHOD_1_FE60265F2E236E58_1_OFFSET UNITYSDK_OFFSET(0x13677AA0)
#define CLASS_1_DD82D6A2390AAA97_METHOD_1_FE60265F2E236E58_OFFSET UNITYSDK_OFFSET(0x13677A50)
#define CLASS_1_DD82D6A2390AAA97_SET_ISENTERED_OFFSET UNITYSDK_OFFSET(0x13677A40)
#define CLASS_1_DD82D6A2390AAA97__CTOR_OFFSET UNITYSDK_OFFSET(0x13677A10)

inline static constexpr unsigned int Class_1_DD82D6A2390AAA97_TypeDefinitionIndex = 62363;

class Class_1_DD82D6A2390AAA97 : public ::System::Object
{
public:
	::RPG::Client::PlayerModule* Field_1_0; // 0x10
	::System::Boolean _IsEntered_k__BackingField; // 0x18

	::System::Void _ctor(::RPG::Client::PlayerModule* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerModule*))((::PBYTE)hIl2Cpp + CLASS_1_DD82D6A2390AAA97__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::LogicStateType Method_1_70C618A9A54396F2()
	{
		return ((::RPG::Client::LogicStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD82D6A2390AAA97_METHOD_1_70C618A9A54396F2_OFFSET))(this);
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

	::System::Void Method_1_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD82D6A2390AAA97_METHOD_1_AAD864A9DF964170_OFFSET))(this);
	}
};
