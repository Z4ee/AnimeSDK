#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_82;
class Class_1_1B9BBF1B9A8CC806;
class Class_1_378A705F2302A8CA;
class Class_1_B6E7D41F9A5F8DB4;
class Class_1_E61B6BD5F01F8A04;
namespace RPG::Client { template <typename T> class ScopeUser_1; }
namespace System { class String; }
namespace System::IO { class BinaryWriter; }

#define CLASS_1_8DE1CF98E4451201_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17AFADA0)
#define CLASS_1_8DE1CF98E4451201_METHOD_1_146E6E50FAF07D8F_OFFSET UNITYSDK_OFFSET(0x17AF9750)
#define CLASS_1_8DE1CF98E4451201_METHOD_1_51E2051F9A44A10F_OFFSET UNITYSDK_OFFSET(0x17AF86D0)
#define CLASS_1_8DE1CF98E4451201_METHOD_1_70745CD7CB17843F_OFFSET UNITYSDK_OFFSET(0x17AF9340)
#define CLASS_1_8DE1CF98E4451201_METHOD_1_7A182A87EA62E459_OFFSET UNITYSDK_OFFSET(0x17AF87D0)
#define CLASS_1_8DE1CF98E4451201_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x17AF8380)
#define CLASS_1_8DE1CF98E4451201_METHOD_1_9F9809DF5AED58E5_OFFSET UNITYSDK_OFFSET(0x17AF9100)
#define CLASS_1_8DE1CF98E4451201_METHOD_1_B325FC876562A5C3_OFFSET UNITYSDK_OFFSET(0x17AF8E90)
#define CLASS_1_8DE1CF98E4451201_METHOD_1_CB183F6576A61610_OFFSET UNITYSDK_OFFSET(0x17AF8B30)
#define CLASS_1_8DE1CF98E4451201__CTOR_OFFSET UNITYSDK_OFFSET(0x17AF83D0)

inline static constexpr unsigned int Class_1_8DE1CF98E4451201_TypeDefinitionIndex = 37847;

class Class_1_8DE1CF98E4451201 : public ::System::Object
{
public:
	// static const ::System::UInt32 Field_1_5 = 0x10; // 0x0
	// static const ::System::UInt32 Field_1_6 = 0x10; // 0x0
	::Il2CppArray<::Class_0_16E4307DCC419505_82*>* Field_1_2; // 0x10
	::Il2CppArray<::System::Byte>* Field_1_7; // 0x18
	::System::String* Field_1_0; // 0x20
	::Class_1_1B9BBF1B9A8CC806* Field_1_3; // 0x28
	::Class_1_B6E7D41F9A5F8DB4* Field_1_4; // 0x30
	::System::Boolean Field_1_1; // 0x38

	::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::UInt16 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_8DE1CF98E4451201__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DE1CF98E4451201_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::RPG::Client::ScopeUser_1<::Class_1_B6E7D41F9A5F8DB4*>* Method_1_51E2051F9A44A10F()
	{
		return ((::RPG::Client::ScopeUser_1<::Class_1_B6E7D41F9A5F8DB4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DE1CF98E4451201_METHOD_1_51E2051F9A44A10F_OFFSET))(this);
	}

	::RPG::Client::ScopeUser_1<::Class_1_B6E7D41F9A5F8DB4*>* Method_1_7A182A87EA62E459(::System::Int32 a1)
	{
		return ((::RPG::Client::ScopeUser_1<::Class_1_B6E7D41F9A5F8DB4*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8DE1CF98E4451201_METHOD_1_7A182A87EA62E459_OFFSET))(this, a1);
	}

	::RPG::Client::ScopeUser_1<::Class_1_E61B6BD5F01F8A04*>* Method_1_CB183F6576A61610(::System::Int32 a1)
	{
		return ((::RPG::Client::ScopeUser_1<::Class_1_E61B6BD5F01F8A04*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8DE1CF98E4451201_METHOD_1_CB183F6576A61610_OFFSET))(this, a1);
	}

	::RPG::Client::ScopeUser_1<::Class_1_378A705F2302A8CA*>* Method_1_B325FC876562A5C3(::System::Int32 a1)
	{
		return ((::RPG::Client::ScopeUser_1<::Class_1_378A705F2302A8CA*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8DE1CF98E4451201_METHOD_1_B325FC876562A5C3_OFFSET))(this, a1);
	}

	::System::Void Method_1_9F9809DF5AED58E5(::System::IO::BinaryWriter* a1, ::System::UInt16 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_8DE1CF98E4451201_METHOD_1_9F9809DF5AED58E5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_70745CD7CB17843F(::System::IO::BinaryWriter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + CLASS_1_8DE1CF98E4451201_METHOD_1_70745CD7CB17843F_OFFSET))(this, a1);
	}

	::System::Void Method_1_146E6E50FAF07D8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DE1CF98E4451201_METHOD_1_146E6E50FAF07D8F_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DE1CF98E4451201_DISPOSE_OFFSET))(this);
	}
};
