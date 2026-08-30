#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Tween/Ease.h"
#include "unitysdk/System/Object.h"

class Class_3_BF30DCF14906C0B9;
class Class_3_F946D4081774B88D_1;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F11BD9383D17B528_METHOD_1_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x1B449EC0)
#define CLASS_1_F11BD9383D17B528_METHOD_1_53FEACD12FAEEA35_OFFSET UNITYSDK_OFFSET(0x1B44AA90)
#define CLASS_1_F11BD9383D17B528_METHOD_1_6A7DC03C8E15C19C_OFFSET UNITYSDK_OFFSET(0x1B44AA10)
#define CLASS_1_F11BD9383D17B528_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1B44AC00)
#define CLASS_1_F11BD9383D17B528_METHOD_1_E89EA968602D8714_OFFSET UNITYSDK_OFFSET(0x1B44AC40)
#define CLASS_1_F11BD9383D17B528__CTOR_OFFSET UNITYSDK_OFFSET(0x1B449EB0)

inline static constexpr unsigned int Class_1_F11BD9383D17B528_TypeDefinitionIndex = 73374;

class Class_1_F11BD9383D17B528 : public ::System::Object
{
public:
	::Class_3_BF30DCF14906C0B9* KEFLIEMLGJM; // 0x10
	::Class_3_F946D4081774B88D_1* PLBDKMBLAEE; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::Tween::Ease>* KJECEFGALAC; // 0x20
	::System::Boolean GBKLKFDBLDH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F11BD9383D17B528__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F11BD9383D17B528_METHOD_1_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F11BD9383D17B528_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::Class_3_BF30DCF14906C0B9* Method_1_6A7DC03C8E15C19C(::System::String* a1)
	{
		return ((::Class_3_BF30DCF14906C0B9*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F11BD9383D17B528_METHOD_1_6A7DC03C8E15C19C_OFFSET))(this, a1);
	}

	::Class_3_F946D4081774B88D_1* Method_1_53FEACD12FAEEA35(::System::String* a1)
	{
		return ((::Class_3_F946D4081774B88D_1*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F11BD9383D17B528_METHOD_1_53FEACD12FAEEA35_OFFSET))(this, a1);
	}

	::Class_3_BF30DCF14906C0B9* Method_1_E89EA968602D8714(::System::String* a1)
	{
		return ((::Class_3_BF30DCF14906C0B9*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F11BD9383D17B528_METHOD_1_E89EA968602D8714_OFFSET))(this, a1);
	}
};
