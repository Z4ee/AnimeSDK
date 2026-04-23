#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6AA9F3620D178FAF;
class Class_1_FF03248024BAA97A;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D4C1FF8F0F0862AF__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17BD3D40)
#define CLASS_1_D4C1FF8F0F0862AF__CTOR_2_OFFSET UNITYSDK_OFFSET(0x17BD42D0)
#define CLASS_1_D4C1FF8F0F0862AF__CTOR_3_OFFSET UNITYSDK_OFFSET(0x17BD4390)
#define CLASS_1_D4C1FF8F0F0862AF__CTOR_OFFSET UNITYSDK_OFFSET(0x17BD3D30)

inline static constexpr unsigned int Class_1_D4C1FF8F0F0862AF_TypeDefinitionIndex = 34068;

class Class_1_D4C1FF8F0F0862AF : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::System::String* Field_1_11; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_5; // 0x20
	::System::String* Field_1_1; // 0x28
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_7; // 0x30
	::System::UInt32 Field_1_8; // 0x38
	::System::Int32 Field_1_10; // 0x3C
	::System::UInt32 Field_1_4; // 0x40
	::System::UInt32 Field_1_6; // 0x44
	::System::Boolean Field_1_3; // 0x48
	::System::Boolean Field_1_9; // 0x49
	::System::UInt32 Field_1_0; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4C1FF8F0F0862AF__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FF03248024BAA97A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FF03248024BAA97A*))((::PBYTE)hIl2Cpp + CLASS_1_D4C1FF8F0F0862AF__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void _ctor_2(::Class_1_D4C1FF8F0F0862AF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D4C1FF8F0F0862AF*))((::PBYTE)hIl2Cpp + CLASS_1_D4C1FF8F0F0862AF__CTOR_2_OFFSET))(this, a1);
	}

	::System::Void _ctor_3(::Class_1_6AA9F3620D178FAF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6AA9F3620D178FAF*))((::PBYTE)hIl2Cpp + CLASS_1_D4C1FF8F0F0862AF__CTOR_3_OFFSET))(this, a1);
	}
};
