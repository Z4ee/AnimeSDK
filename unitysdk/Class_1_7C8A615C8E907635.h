#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FF115791B3A1D76D;
class Class_2_BF47C01E9CFEA39C;
namespace RPG::Client { template <typename T> class MLinkedLockFreeQueue_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Threading { class Thread; }

#define CLASS_1_7C8A615C8E907635_METHOD_1_457717A0CF438A7C_OFFSET UNITYSDK_OFFSET(0x14154730)
#define CLASS_1_7C8A615C8E907635_METHOD_1_6A6A065F9530B8FD_OFFSET UNITYSDK_OFFSET(0x14154780)
#define CLASS_1_7C8A615C8E907635_METHOD_1_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0x141547F0)
#define CLASS_1_7C8A615C8E907635_METHOD_1_ECA33935490AF2E4_OFFSET UNITYSDK_OFFSET(0x14154950)
#define CLASS_1_7C8A615C8E907635__CTOR_OFFSET UNITYSDK_OFFSET(0x14154BC0)

inline static constexpr unsigned int Class_1_7C8A615C8E907635_TypeDefinitionIndex = 55690;

class Class_1_7C8A615C8E907635 : public ::System::Object
{
public:
	::Class_2_BF47C01E9CFEA39C* Field_1_0; // 0x10
	::Class_1_FF115791B3A1D76D* Field_1_1; // 0x18
	::RPG::Client::MLinkedLockFreeQueue_1<::System::Action*>* Field_1_2; // 0x20
	::Il2CppArray<::System::Threading::Thread*>* Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C8A615C8E907635__CTOR_OFFSET))(this);
	}

	::Class_2_BF47C01E9CFEA39C* Method_1_457717A0CF438A7C()
	{
		return ((::Class_2_BF47C01E9CFEA39C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C8A615C8E907635_METHOD_1_457717A0CF438A7C_OFFSET))(this);
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
