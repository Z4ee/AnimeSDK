#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_DD82D6A2390AAA97.h"
#include "unitysdk/RPG/Client/LogicStateType.h"

namespace RPG::Client { class PlayerModule; }
namespace System { class Object; }

#define CLASS_2_797B24C69F8F87D5_METHOD_2_2CC41C57DAEDE64E_OFFSET UNITYSDK_OFFSET(0x1843F630)
#define CLASS_2_797B24C69F8F87D5_METHOD_2_8B48A20015332116_OFFSET UNITYSDK_OFFSET(0x1843F4E0)
#define CLASS_2_797B24C69F8F87D5_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x1843F580)
#define CLASS_2_797B24C69F8F87D5_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1843FFF0)
#define CLASS_2_797B24C69F8F87D5_METHOD_2_FE60265F2E236E58_1_OFFSET UNITYSDK_OFFSET(0x1843F5E0)
#define CLASS_2_797B24C69F8F87D5_METHOD_2_FE60265F2E236E58_OFFSET UNITYSDK_OFFSET(0x1843F530)
#define CLASS_2_797B24C69F8F87D5__CTOR_OFFSET UNITYSDK_OFFSET(0x1843F4D0)

inline static constexpr unsigned int Class_2_797B24C69F8F87D5_TypeDefinitionIndex = 63717;

class Class_2_797B24C69F8F87D5 : public ::Class_1_DD82D6A2390AAA97
{
public:
	::System::Void _ctor(::RPG::Client::PlayerModule* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerModule*))((::PBYTE)hIl2Cpp + CLASS_2_797B24C69F8F87D5__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::LogicStateType Method_2_8B48A20015332116()
	{
		return ((::RPG::Client::LogicStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_797B24C69F8F87D5_METHOD_2_8B48A20015332116_OFFSET))(this);
	}

	::System::Boolean Method_2_FE60265F2E236E58(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_797B24C69F8F87D5_METHOD_2_FE60265F2E236E58_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_797B24C69F8F87D5_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Boolean Method_2_FE60265F2E236E58_1(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_797B24C69F8F87D5_METHOD_2_FE60265F2E236E58_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_2CC41C57DAEDE64E(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_797B24C69F8F87D5_METHOD_2_2CC41C57DAEDE64E_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_797B24C69F8F87D5_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
