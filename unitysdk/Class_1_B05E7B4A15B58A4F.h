#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

class Class_3_06B506F3349584D7;
class Class_3_898F909148BCCF95;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B05E7B4A15B58A4F__CTOR_OFFSET UNITYSDK_OFFSET(0x13079FC0)

inline static constexpr unsigned int Class_1_B05E7B4A15B58A4F_TypeDefinitionIndex = 61414;

class Class_1_B05E7B4A15B58A4F : public ::System::Object
{
public:
	::Class_3_898F909148BCCF95* Field_1_2; // 0x10
	::Foundation::ViewObject::ViewObjectHandle Field_1_3; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_06B506F3349584D7*>* Field_1_4; // 0x28
	::System::UInt32 Field_1_0; // 0x30
	::System::Boolean Field_1_1; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B05E7B4A15B58A4F__CTOR_OFFSET))(this);
	}
};
