#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0F138252A5783001.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_061801F5C4991F1A;
class Class_1_236FD73ABC492E3F;
class Class_1_4ED21A115C97704D;
class Class_1_C836D00248E6EFFE;
class Class_2_167BB37617B940E3;
class Class_2_828B2711AF58BA0B;
class Class_2_EA995402651EF7A9;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_FAF3C21556FBE06B_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12773990)
#define CLASS_3_FAF3C21556FBE06B_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12774080)
#define CLASS_3_FAF3C21556FBE06B_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x12774B10)
#define CLASS_3_FAF3C21556FBE06B_METHOD_3_66A56A98FBC17877_OFFSET UNITYSDK_OFFSET(0x12773E50)
#define CLASS_3_FAF3C21556FBE06B_METHOD_3_8304FB9CA9BAE504_OFFSET UNITYSDK_OFFSET(0x12773760)
#define CLASS_3_FAF3C21556FBE06B_METHOD_3_8741A88D50268453_OFFSET UNITYSDK_OFFSET(0x12774100)
#define CLASS_3_FAF3C21556FBE06B_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x12774D70)
#define CLASS_3_FAF3C21556FBE06B_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x12773F10)
#define CLASS_3_FAF3C21556FBE06B_METHOD_3_BB2B154A9AA5F82B_OFFSET UNITYSDK_OFFSET(0x127736C0)
#define CLASS_3_FAF3C21556FBE06B_METHOD_3_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x12774010)
#define CLASS_3_FAF3C21556FBE06B_METHOD_3_E07D6AAA98B227A2_OFFSET UNITYSDK_OFFSET(0x127739F0)
#define CLASS_3_FAF3C21556FBE06B_METHOD_3_F15E7F69F5BAD374_OFFSET UNITYSDK_OFFSET(0x12774CC0)
#define CLASS_3_FAF3C21556FBE06B_METHOD_3_F59BC96F290BB1C3_OFFSET UNITYSDK_OFFSET(0x12774D60)
#define CLASS_3_FAF3C21556FBE06B__CTOR_OFFSET UNITYSDK_OFFSET(0x12774B00)

inline static constexpr unsigned int Class_3_FAF3C21556FBE06B_TypeDefinitionIndex = 41592;

class Class_3_FAF3C21556FBE06B : public ::Class_2_0F138252A5783001
{
public:
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_3_2; // 0x20
	::System::Collections::Generic::List_1<::Class_1_061801F5C4991F1A*>* Field_3_1; // 0x28
	::MoleMole::Config::DynamicFloat* Field_3_5; // 0x30
	::Class_1_4ED21A115C97704D* Field_3_3; // 0x38
	::MoleMole::Config::DynamicString* Field_3_0; // 0x40
	::MoleMole::Config::DynamicInt* Field_3_4; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FAF3C21556FBE06B__CTOR_OFFSET))(this);
	}

	::Class_1_C836D00248E6EFFE* Method_3_BB2B154A9AA5F82B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*))((::PBYTE)hIl2Cpp + CLASS_3_FAF3C21556FBE06B_METHOD_3_BB2B154A9AA5F82B_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>*>* Method_3_8304FB9CA9BAE504()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FAF3C21556FBE06B_METHOD_3_8304FB9CA9BAE504_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_FAF3C21556FBE06B_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_66A56A98FBC17877(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_FAF3C21556FBE06B_METHOD_3_66A56A98FBC17877_OFFSET))(this, a1);
	}

	::Class_2_0F138252A5783001* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_0F138252A5783001*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FAF3C21556FBE06B_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FAF3C21556FBE06B_METHOD_3_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_FAF3C21556FBE06B_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_3_FAF3C21556FBE06B* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_FAF3C21556FBE06B*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_FAF3C21556FBE06B_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_8741A88D50268453(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_FAF3C21556FBE06B_METHOD_3_8741A88D50268453_OFFSET))(this, a1);
	}

	::Class_1_C836D00248E6EFFE* Method_3_F15E7F69F5BAD374(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*))((::PBYTE)hIl2Cpp + CLASS_3_FAF3C21556FBE06B_METHOD_3_F15E7F69F5BAD374_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>*>* Method_3_F59BC96F290BB1C3()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FAF3C21556FBE06B_METHOD_3_F59BC96F290BB1C3_OFFSET))(this);
	}

	::System::Boolean Method_3_E07D6AAA98B227A2(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_FAF3C21556FBE06B_METHOD_3_E07D6AAA98B227A2_OFFSET))(this, a1, a2);
	}

	static ::Class_3_FAF3C21556FBE06B* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_FAF3C21556FBE06B*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_FAF3C21556FBE06B_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}
};
