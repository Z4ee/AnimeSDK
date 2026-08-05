#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/System/Object.h"

class Class_1_3002D7CF5FEE9D3A;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D675521B14CA6BEF_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x13B98B10)
#define CLASS_1_D675521B14CA6BEF__CTOR_OFFSET UNITYSDK_OFFSET(0x13B7C000)

inline static constexpr unsigned int Class_1_D675521B14CA6BEF_TypeDefinitionIndex = 79628;

class Class_1_D675521B14CA6BEF : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_4; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_5; // 0x18
	::Class_1_3002D7CF5FEE9D3A* Field_1_10; // 0x20
	::System::Int32 Field_1_7; // 0x28
	::Foundation::ViewObject::GroupMemberIdentifier Field_1_6; // 0x2C
	::System::UInt32 Field_1_11; // 0x34
	::System::Int32 Field_1_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D675521B14CA6BEF__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D675521B14CA6BEF_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}
};
