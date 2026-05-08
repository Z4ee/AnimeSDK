#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9FBDB47166F97B2B.h"
#include "unitysdk/System/Object.h"

class Class_1_6D3ECB4C39924DFD;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_893417714B2AA846_METHOD_1_66F60B96100B8EE0_OFFSET UNITYSDK_OFFSET(0x137C9510)
#define CLASS_1_893417714B2AA846_METHOD_1_84F804B2B956D18D_OFFSET UNITYSDK_OFFSET(0x137C9660)
#define CLASS_1_893417714B2AA846__CTOR_OFFSET UNITYSDK_OFFSET(0x137C8E00)

inline static constexpr unsigned int Class_1_893417714B2AA846_TypeDefinitionIndex = 69660;

class Class_1_893417714B2AA846 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_6D3ECB4C39924DFD*>* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor(::System::Int32 a1, ::System::Collections::Generic::Dictionary_2<::Enum_3_9FBDB47166F97B2B, ::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::Enum_3_9FBDB47166F97B2B, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_893417714B2AA846__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_66F60B96100B8EE0(::Enum_3_9FBDB47166F97B2B a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_9FBDB47166F97B2B))((::PBYTE)hIl2Cpp + CLASS_1_893417714B2AA846_METHOD_1_66F60B96100B8EE0_OFFSET))(this, a1);
	}

	::Class_1_6D3ECB4C39924DFD* Method_1_84F804B2B956D18D(::Enum_3_9FBDB47166F97B2B a1)
	{
		return ((::Class_1_6D3ECB4C39924DFD*(*)(::PVOID, ::Enum_3_9FBDB47166F97B2B))((::PBYTE)hIl2Cpp + CLASS_1_893417714B2AA846_METHOD_1_84F804B2B956D18D_OFFSET))(this, a1);
	}
};
