#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/BubbleSpeakerPair.h"
#include "unitysdk/Struct_2_B679E4D914A10080_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_076710115AC6DDA3_METHOD_1_3667E4134D20BD0B_OFFSET UNITYSDK_OFFSET(0x12EC6CD0)
#define CLASS_1_076710115AC6DDA3_METHOD_1_A6D78E60B0527DE7_OFFSET UNITYSDK_OFFSET(0x12EC6BA0)
#define CLASS_1_076710115AC6DDA3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x12EC69A0)
#define CLASS_1_076710115AC6DDA3__CTOR_OFFSET UNITYSDK_OFFSET(0x12EC67B0)

inline static constexpr unsigned int Class_1_076710115AC6DDA3_TypeDefinitionIndex = 80981;

class Class_1_076710115AC6DDA3 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_0; // 0x10

	::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_076710115AC6DDA3__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::System::Collections::Generic::List_1<::MoleMole::BubbleSpeakerPair>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::BubbleSpeakerPair>*))((::PBYTE)hIl2Cpp + CLASS_1_076710115AC6DDA3__CTOR_1_OFFSET))(this, a1);
	}

	::Struct_2_B679E4D914A10080_2 Method_1_A6D78E60B0527DE7(::System::String* a1)
	{
		return ((::Struct_2_B679E4D914A10080_2(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_076710115AC6DDA3_METHOD_1_A6D78E60B0527DE7_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Struct_2_B679E4D914A10080_2>* Method_1_3667E4134D20BD0B()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Struct_2_B679E4D914A10080_2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_076710115AC6DDA3_METHOD_1_3667E4134D20BD0B_OFFSET))(this);
	}
};
