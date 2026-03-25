#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Tween/Ease.h"
#include "unitysdk/System/Object.h"

class Class_3_BF30DCF14906C0B9;
class Class_3_F946D4081774B88D_1;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_860906FF846546DC_METHOD_1_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x8A271A0)
#define CLASS_1_860906FF846546DC_METHOD_1_6A7DC03C8E15C19C_OFFSET UNITYSDK_OFFSET(0x8A27CF0)
#define CLASS_1_860906FF846546DC_METHOD_1_7BB9DD2257AC6870_OFFSET UNITYSDK_OFFSET(0x8A27EC0)
#define CLASS_1_860906FF846546DC_METHOD_1_93AB9C64F4AA92F1_OFFSET UNITYSDK_OFFSET(0x8A27D70)
#define CLASS_1_860906FF846546DC_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8A27E80)
#define CLASS_1_860906FF846546DC__CTOR_OFFSET UNITYSDK_OFFSET(0x8A27190)

inline static constexpr unsigned int Class_1_860906FF846546DC_TypeDefinitionIndex = 60202;

class Class_1_860906FF846546DC : public ::System::Object
{
public:
	::Class_3_F946D4081774B88D_1* Field_1_1; // 0x10
	::Class_3_BF30DCF14906C0B9* Field_1_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::Tween::Ease>* Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_860906FF846546DC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_860906FF846546DC_METHOD_1_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_860906FF846546DC_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::Class_3_BF30DCF14906C0B9* Method_1_6A7DC03C8E15C19C(::System::String* a1)
	{
		return ((::Class_3_BF30DCF14906C0B9*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_860906FF846546DC_METHOD_1_6A7DC03C8E15C19C_OFFSET))(this, a1);
	}

	::Class_3_F946D4081774B88D_1* Method_1_93AB9C64F4AA92F1(::System::String* a1)
	{
		return ((::Class_3_F946D4081774B88D_1*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_860906FF846546DC_METHOD_1_93AB9C64F4AA92F1_OFFSET))(this, a1);
	}

	::Class_3_BF30DCF14906C0B9* Method_1_7BB9DD2257AC6870(::System::String* a1)
	{
		return ((::Class_3_BF30DCF14906C0B9*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_860906FF846546DC_METHOD_1_7BB9DD2257AC6870_OFFSET))(this, a1);
	}
};
