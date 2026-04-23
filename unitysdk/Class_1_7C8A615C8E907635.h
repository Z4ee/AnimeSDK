#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FF115791B3A1D76D;
class Class_2_2690241A4D35989E;
namespace RPG::Client { template <typename T> class MLinkedLockFreeQueue_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Threading { class Thread; }

#define CLASS_1_7C8A615C8E907635_METHOD_1_457717A0CF438A7C_OFFSET UNITYSDK_OFFSET(0x124F0380)
#define CLASS_1_7C8A615C8E907635_METHOD_1_6A6A065F9530B8FD_OFFSET UNITYSDK_OFFSET(0x124F03D0)
#define CLASS_1_7C8A615C8E907635_METHOD_1_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0x124F0440)
#define CLASS_1_7C8A615C8E907635_METHOD_1_ECA33935490AF2E4_OFFSET UNITYSDK_OFFSET(0x124F0590)
#define CLASS_1_7C8A615C8E907635__CTOR_OFFSET UNITYSDK_OFFSET(0x124F0800)

inline static constexpr unsigned int Class_1_7C8A615C8E907635_TypeDefinitionIndex = 54956;

class Class_1_7C8A615C8E907635 : public ::System::Object
{
public:
	::Class_1_FF115791B3A1D76D* Field_1_2; // 0x10
	::RPG::Client::MLinkedLockFreeQueue_1<::System::Action*>* Field_1_0; // 0x18
	::Il2CppArray<::System::Threading::Thread*>* Field_1_3; // 0x20
	::Class_2_2690241A4D35989E* Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C8A615C8E907635__CTOR_OFFSET))(this);
	}

	::Class_2_2690241A4D35989E* Method_1_457717A0CF438A7C()
	{
		return ((::Class_2_2690241A4D35989E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C8A615C8E907635_METHOD_1_457717A0CF438A7C_OFFSET))(this);
	}

	::System::Void Method_1_6A6A065F9530B8FD(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_7C8A615C8E907635_METHOD_1_6A6A065F9530B8FD_OFFSET))(this, a1);
	}

	::System::Void Method_1_BB881F05E41D3A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C8A615C8E907635_METHOD_1_BB881F05E41D3A04_OFFSET))(this);
	}

	::System::Void Method_1_ECA33935490AF2E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C8A615C8E907635_METHOD_1_ECA33935490AF2E4_OFFSET))(this);
	}
};
