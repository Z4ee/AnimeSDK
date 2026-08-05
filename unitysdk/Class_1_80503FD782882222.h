#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505;
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_1_80503FD782882222_METHOD_1_7646FFE662147970_1_OFFSET UNITYSDK_OFFSET(0x1E9C3900)
#define CLASS_1_80503FD782882222_METHOD_1_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x1E9C3500)
#define CLASS_1_80503FD782882222_METHOD_1_AC96313FF120BAE7_OFFSET UNITYSDK_OFFSET(0x1E9C36F0)
#define CLASS_1_80503FD782882222_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x1E9C3AE0)
#define CLASS_1_80503FD782882222__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9C3390)

inline static constexpr unsigned int Class_1_80503FD782882222_TypeDefinitionIndex = 8027;

class Class_1_80503FD782882222 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Action_1<::UnityEngine::MonoBehaviour*>*>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505*>* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Action_1<::UnityEngine::MonoBehaviour*>*>* Field_1_0; // 0x20
	::System::Boolean Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80503FD782882222__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80503FD782882222_METHOD_1_7646FFE662147970_OFFSET))(this);
	}

	::System::Void Method_1_AC96313FF120BAE7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80503FD782882222_METHOD_1_AC96313FF120BAE7_OFFSET))(this);
	}

	::System::Void Method_1_7646FFE662147970_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80503FD782882222_METHOD_1_7646FFE662147970_1_OFFSET))(this);
	}

	::System::Void Method_1_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80503FD782882222_METHOD_1_EDFD49C942C75D6C_OFFSET))(this);
	}
};
