#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1B9BBF1B9A8CC806;
class Class_1_B6E7D41F9A5F8DB4;
namespace RPG::Client { template <typename T> class ScopeUser_1; }
namespace System { class String; }
namespace System::IO { class BinaryWriter; }

#define CLASS_1_1EE581A5CD6CAB86_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18890F90)
#define CLASS_1_1EE581A5CD6CAB86_METHOD_1_51E2051F9A44A10F_OFFSET UNITYSDK_OFFSET(0x188BBB10)
#define CLASS_1_1EE581A5CD6CAB86_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x188BD850)
#define CLASS_1_1EE581A5CD6CAB86_METHOD_1_9F9809DF5AED58E5_OFFSET UNITYSDK_OFFSET(0x188BD910)
#define CLASS_1_1EE581A5CD6CAB86_METHOD_1_C3B16D8A3C1F9B56_OFFSET UNITYSDK_OFFSET(0x188BD9D0)
#define CLASS_1_1EE581A5CD6CAB86_METHOD_1_CB8E229BDF290D41_OFFSET UNITYSDK_OFFSET(0x188BDD30)
#define CLASS_1_1EE581A5CD6CAB86_METHOD_1_DC8AA765E2AFD1B6_OFFSET UNITYSDK_OFFSET(0x188BD8A0)
#define CLASS_1_1EE581A5CD6CAB86_METHOD_1_FC778E0226EE5B79_OFFSET UNITYSDK_OFFSET(0x18890C00)
#define CLASS_1_1EE581A5CD6CAB86__CTOR_OFFSET UNITYSDK_OFFSET(0x188907B0)

inline static constexpr unsigned int Class_1_1EE581A5CD6CAB86_TypeDefinitionIndex = 38583;

class Class_1_1EE581A5CD6CAB86 : public ::System::Object
{
public:
	// static const ::System::UInt32 Field_1_0 = 0x10; // 0x0
	// static const ::System::UInt32 Field_1_1 = 0xC; // 0x0
	::Class_1_B6E7D41F9A5F8DB4* Field_1_2; // 0x10
	::System::String* Field_1_3; // 0x18
	::Il2CppArray<::Class_1_B6E7D41F9A5F8DB4*>* Field_1_4; // 0x20
	::Il2CppArray<::System::Byte>* Field_1_5; // 0x28
	::Class_1_1B9BBF1B9A8CC806* Field_1_6; // 0x30
	::System::Boolean Field_1_7; // 0x38

	::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::UInt16 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_1EE581A5CD6CAB86__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EE581A5CD6CAB86_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::Class_1_B6E7D41F9A5F8DB4* Method_1_DC8AA765E2AFD1B6(::System::Int32 a1)
	{
		return ((::Class_1_B6E7D41F9A5F8DB4*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1EE581A5CD6CAB86_METHOD_1_DC8AA765E2AFD1B6_OFFSET))(this, a1);
	}

	::RPG::Client::ScopeUser_1<::Class_1_B6E7D41F9A5F8DB4*>* Method_1_51E2051F9A44A10F()
	{
		return ((::RPG::Client::ScopeUser_1<::Class_1_B6E7D41F9A5F8DB4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EE581A5CD6CAB86_METHOD_1_51E2051F9A44A10F_OFFSET))(this);
	}

	::RPG::Client::ScopeUser_1<::Class_1_B6E7D41F9A5F8DB4*>* Method_1_FC778E0226EE5B79(::System::Int32 a1)
	{
		return ((::RPG::Client::ScopeUser_1<::Class_1_B6E7D41F9A5F8DB4*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1EE581A5CD6CAB86_METHOD_1_FC778E0226EE5B79_OFFSET))(this, a1);
	}

	::System::Void Method_1_9F9809DF5AED58E5(::System::IO::BinaryWriter* a1, ::System::UInt16 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_1EE581A5CD6CAB86_METHOD_1_9F9809DF5AED58E5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C3B16D8A3C1F9B56(::System::IO::BinaryWriter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + CLASS_1_1EE581A5CD6CAB86_METHOD_1_C3B16D8A3C1F9B56_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB8E229BDF290D41()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EE581A5CD6CAB86_METHOD_1_CB8E229BDF290D41_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EE581A5CD6CAB86_DISPOSE_OFFSET))(this);
	}
};
