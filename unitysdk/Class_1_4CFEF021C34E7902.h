#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4CFEF021C34E7902_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xC40A150)
#define CLASS_1_4CFEF021C34E7902_METHOD_1_E34F36916897D48C_OFFSET UNITYSDK_OFFSET(0xC40A060)
#define CLASS_1_4CFEF021C34E7902_METHOD_1_EFE1741A2B77BCF8_OFFSET UNITYSDK_OFFSET(0xC409E90)
#define CLASS_1_4CFEF021C34E7902_RECEIVEMESSAGE_OFFSET UNITYSDK_OFFSET(0xC409D50)
#define CLASS_1_4CFEF021C34E7902__CTOR_OFFSET UNITYSDK_OFFSET(0xC40A1E0)

inline static constexpr unsigned int Class_1_4CFEF021C34E7902_TypeDefinitionIndex = 64397;

class Class_1_4CFEF021C34E7902 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Action_1<::System::Object*>*>*>* ENGBCOGDBFH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CFEF021C34E7902__CTOR_OFFSET))(this);
	}

	::System::Void ReceiveMessage(::System::Int32 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4CFEF021C34E7902_RECEIVEMESSAGE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EFE1741A2B77BCF8(::System::Int32 a1, ::System::Action_1<::System::Object*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_4CFEF021C34E7902_METHOD_1_EFE1741A2B77BCF8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E34F36916897D48C(::System::Int32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_4CFEF021C34E7902_METHOD_1_E34F36916897D48C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CFEF021C34E7902_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}
};
