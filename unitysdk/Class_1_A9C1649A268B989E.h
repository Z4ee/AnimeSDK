#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E3D6F8A293A67E6A.h"
#include "unitysdk/System/Object.h"

class Class_1_2F9BA8B56596A383;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class Class_1_7388EF5938F09645;

inline static constexpr unsigned int Class_1_A9C1649A268B989E_TypeDefinitionIndex = 62311;

template <typename TTree, typename TNode>
class Class_1_A9C1649A268B989E : public ::System::Object
{
public:
	TTree Field_1_3; // 0x0
	::System::Int32 Field_1_2; // 0x0
	::System::Collections::Generic::List_1<TNode>* Field_1_1; // 0x0
	::System::Collections::Generic::List_1<TNode>* Field_1_0; // 0x0
	::System::Int32 Field_1_7; // 0x0
	static ::System::Collections::Generic::IReadOnlyList_1<TNode>** StaticGet_Field_1_6()
	{
		return (::System::Collections::Generic::IReadOnlyList_1<TNode>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A9C1649A268B989E_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::Enum_3_E3D6F8A293A67E6A Field_1_5; // 0x0
	::System::Int32 Field_1_4; // 0x0
	::Enum_3_E3D6F8A293A67E6A Field_1_11; // 0x0
	::System::Int32 Field_1_10; // 0x0
	::Enum_3_E3D6F8A293A67E6A Field_1_9; // 0x0
	::System::Action_2<::Enum_3_E3D6F8A293A67E6A, ::Enum_3_E3D6F8A293A67E6A>* Field_1_8; // 0x0
	::System::Action_2<::System::Int32, ::System::Int32>* Field_1_15; // 0x0
};
