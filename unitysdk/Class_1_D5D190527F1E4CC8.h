#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class NotifyHandler; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D5D190527F1E4CC8_METHOD_1_7FDCFCBC97551FA2_OFFSET UNITYSDK_OFFSET(0xD393930)
#define CLASS_1_D5D190527F1E4CC8_METHOD_1_D02A943E69A5767C_OFFSET UNITYSDK_OFFSET(0xD393750)
#define CLASS_1_D5D190527F1E4CC8_METHOD_1_E14457E32A550619_OFFSET UNITYSDK_OFFSET(0xD393820)
#define CLASS_1_D5D190527F1E4CC8__CCTOR_OFFSET UNITYSDK_OFFSET(0xD393A70)
#define CLASS_1_D5D190527F1E4CC8__CTOR_OFFSET UNITYSDK_OFFSET(0xD3939F0)

inline static constexpr unsigned int Class_1_D5D190527F1E4CC8_TypeDefinitionIndex = 60483;

class Class_1_D5D190527F1E4CC8 : public ::System::Object
{
public:
	static ::Class_1_D5D190527F1E4CC8** StaticGet_Field_1_0()
	{
		return (::Class_1_D5D190527F1E4CC8**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D5D190527F1E4CC8_TypeDefinitionIndex)->GetStaticField(0x5F170);
	}
	::System::Collections::Generic::Dictionary_2<::System::Action*, ::RPG::Client::NotifyHandler*>* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5D190527F1E4CC8__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D5D190527F1E4CC8__CCTOR_OFFSET))();
	}

	::System::UInt32 Method_1_D02A943E69A5767C(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D5D190527F1E4CC8_METHOD_1_D02A943E69A5767C_OFFSET))(this, a1);
	}

	::System::Void Method_1_E14457E32A550619(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D5D190527F1E4CC8_METHOD_1_E14457E32A550619_OFFSET))(this, a1);
	}

	::System::Void Method_1_7FDCFCBC97551FA2(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D5D190527F1E4CC8_METHOD_1_7FDCFCBC97551FA2_OFFSET))(this, a1);
	}
};
