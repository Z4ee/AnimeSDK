#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4F1F8ABDC2B55312.h"
#include "unitysdk/System/Object.h"

class Class_1_47F523CB5C537A8A_2;
class Class_1_D69A5F7574A01DAB;
class Class_1_E593D09458ED939D;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_06076BF6FF6AD16D__CTOR_OFFSET UNITYSDK_OFFSET(0x155F4370)

inline static constexpr unsigned int Class_1_06076BF6FF6AD16D_TypeDefinitionIndex = 42807;

class Class_1_06076BF6FF6AD16D : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Enum_3_4F1F8ABDC2B55312, ::System::Collections::Generic::HashSet_1<::System::String*>*>* Field_1_5; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::Enum_3_4F1F8ABDC2B55312, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_47F523CB5C537A8A_2*>*>* Field_1_0; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_E593D09458ED939D*>* Field_1_1; // 0x28
	::System::Collections::Generic::Dictionary_2<::Enum_3_4F1F8ABDC2B55312, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_D69A5F7574A01DAB*>*>* Field_1_6; // 0x30
	::System::Collections::Generic::Dictionary_2<::Enum_3_4F1F8ABDC2B55312, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_D69A5F7574A01DAB*>*>* Field_1_7; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06076BF6FF6AD16D__CTOR_OFFSET))(this);
	}
};
