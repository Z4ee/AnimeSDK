#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E3D6F8A293A67E6A.h"
#include "unitysdk/System/Object.h"

class Class_1_2F9BA8B56596A383;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2_ValueCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int Class_1_7388EF5938F09645_TypeDefinitionIndex = 48548;

template <typename TTree, typename TNode>
class Class_1_7388EF5938F09645 : public ::System::Object
{
public:
	::System::Int32 Field_1_1; // 0x0
	::System::Int32 Field_1_0; // 0x0
	::System::Int32 Field_1_7; // 0x0
	::System::Int32 Field_1_6; // 0x0
	::System::Int32 Field_1_5; // 0x0
	::System::Boolean Field_1_4; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, TNode>* Field_1_11; // 0x0
	::System::Collections::Generic::List_1<TNode>* Field_1_10; // 0x0
	::System::Boolean Field_1_9; // 0x0
	::System::Boolean Field_1_8; // 0x0
	::System::Action_3<TNode, ::System::Int32, ::System::Int32>* Field_1_15; // 0x0
	::System::Action_3<TNode, ::Enum_3_E3D6F8A293A67E6A, ::Enum_3_E3D6F8A293A67E6A>* Field_1_14; // 0x0
};
