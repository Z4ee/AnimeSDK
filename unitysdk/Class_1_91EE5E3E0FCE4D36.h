#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_176;
class Class_1_C4FD36003027AC99;
class Class_1_F9EBB5A401350F78;
class Class_1_F9FBCC956DFCF137_14;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_91EE5E3E0FCE4D36_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x10C19F90)
#define CLASS_1_91EE5E3E0FCE4D36_METHOD_1_2EEC0C9449DA01B6_OFFSET UNITYSDK_OFFSET(0x10C1A0A0)
#define CLASS_1_91EE5E3E0FCE4D36_METHOD_1_3B5096F0F108C9E1_OFFSET UNITYSDK_OFFSET(0x10C1A520)
#define CLASS_1_91EE5E3E0FCE4D36_METHOD_1_83F4CAB4E3B659AE_OFFSET UNITYSDK_OFFSET(0x10C1A260)
#define CLASS_1_91EE5E3E0FCE4D36_METHOD_1_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0x10C19FD0)
#define CLASS_1_91EE5E3E0FCE4D36__CTOR_OFFSET UNITYSDK_OFFSET(0x10C1A250)

inline static constexpr unsigned int Class_1_91EE5E3E0FCE4D36_TypeDefinitionIndex = 63203;

class Class_1_91EE5E3E0FCE4D36 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_176*>* Field_1_0; // 0x10
	::Class_1_F9EBB5A401350F78* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91EE5E3E0FCE4D36__CTOR_OFFSET))(this);
	}

	static ::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_91EE5E3E0FCE4D36_METHOD_1_128774387667156B_OFFSET))();
	}

	static ::System::Void Method_1_A27DC2C5A103933A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_91EE5E3E0FCE4D36_METHOD_1_A27DC2C5A103933A_OFFSET))();
	}

	static ::Class_1_91EE5E3E0FCE4D36* Method_1_2EEC0C9449DA01B6(::Class_1_C4FD36003027AC99* a1)
	{
		return ((::Class_1_91EE5E3E0FCE4D36*(*)(::Class_1_C4FD36003027AC99*))((::PBYTE)hIl2Cpp + CLASS_1_91EE5E3E0FCE4D36_METHOD_1_2EEC0C9449DA01B6_OFFSET))(a1);
	}

	::System::Void Method_1_83F4CAB4E3B659AE(::Class_1_F9FBCC956DFCF137_14* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_14*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_91EE5E3E0FCE4D36_METHOD_1_83F4CAB4E3B659AE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3B5096F0F108C9E1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_91EE5E3E0FCE4D36_METHOD_1_3B5096F0F108C9E1_OFFSET))(this, a1);
	}
};
