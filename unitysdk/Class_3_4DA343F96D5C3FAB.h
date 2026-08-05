#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0F138252A5783001.h"
#include "unitysdk/Class_2_0F138252A5783001_Enum_3_FD724454F35FC126.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/MonsterStrengthType.h"

class Class_1_061801F5C4991F1A;
class Class_1_236FD73ABC492E3F;
class Class_1_C836D00248E6EFFE;
class Class_1_EF896E1D0FDF202A;
class Class_2_14986121AA61AD99;
class Class_2_1C93660C39236995;
class Class_2_2A56CCCB20A346FA;
class Class_3_F41D242A20F8FE06;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_4DA343F96D5C3FAB_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x10D357D0)
#define CLASS_3_4DA343F96D5C3FAB_FROMFLX_OFFSET UNITYSDK_OFFSET(0x10D361E0)
#define CLASS_3_4DA343F96D5C3FAB_METHOD_3_0578713EDB32B89E_OFFSET UNITYSDK_OFFSET(0x10D36260)
#define CLASS_3_4DA343F96D5C3FAB_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x10D37310)
#define CLASS_3_4DA343F96D5C3FAB_METHOD_3_40C5968D970A15A2_OFFSET UNITYSDK_OFFSET(0x10D35590)
#define CLASS_3_4DA343F96D5C3FAB_METHOD_3_622F9323D55114B2_OFFSET UNITYSDK_OFFSET(0x10D35830)
#define CLASS_3_4DA343F96D5C3FAB_METHOD_3_66A56A98FBC17877_OFFSET UNITYSDK_OFFSET(0x10D36010)
#define CLASS_3_4DA343F96D5C3FAB_METHOD_3_8304FB9CA9BAE504_OFFSET UNITYSDK_OFFSET(0x10D355A0)
#define CLASS_3_4DA343F96D5C3FAB_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x10D371A0)
#define CLASS_3_4DA343F96D5C3FAB_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x10D360D0)
#define CLASS_3_4DA343F96D5C3FAB_METHOD_3_BB2B154A9AA5F82B_OFFSET UNITYSDK_OFFSET(0x10D354F0)
#define CLASS_3_4DA343F96D5C3FAB_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x10D361D0)
#define CLASS_3_4DA343F96D5C3FAB_METHOD_3_F15E7F69F5BAD374_OFFSET UNITYSDK_OFFSET(0x10D37100)
#define CLASS_3_4DA343F96D5C3FAB_METHOD_3_F59BC96F290BB1C3_OFFSET UNITYSDK_OFFSET(0x10D37300)
#define CLASS_3_4DA343F96D5C3FAB__CTOR_OFFSET UNITYSDK_OFFSET(0x10D370F0)

inline static constexpr unsigned int Class_3_4DA343F96D5C3FAB_TypeDefinitionIndex = 41505;

class Class_3_4DA343F96D5C3FAB : public ::Class_2_0F138252A5783001
{
public:
	::System::Collections::Generic::List_1<::Class_1_061801F5C4991F1A*>* Field_3_0; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* Field_3_10; // 0x28
	::System::Collections::Generic::List_1<::MoleMole::Config::MonsterStrengthType>* Field_3_11; // 0x30
	::Il2CppArray<::Class_1_EF896E1D0FDF202A*>* Field_3_7; // 0x38
	::System::Collections::Generic::List_1<::System::String*>* Field_3_9; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_4; // 0x48
	::System::Boolean Field_3_6; // 0x50
	::System::Boolean Field_3_8; // 0x51
	::System::Boolean Field_3_5; // 0x52

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4DA343F96D5C3FAB__CTOR_OFFSET))(this);
	}

	::Class_1_C836D00248E6EFFE* Method_3_BB2B154A9AA5F82B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*))((::PBYTE)hIl2Cpp + CLASS_3_4DA343F96D5C3FAB_METHOD_3_BB2B154A9AA5F82B_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_0F138252A5783001_Enum_3_FD724454F35FC126 Method_3_40C5968D970A15A2()
	{
		return ((::Class_2_0F138252A5783001_Enum_3_FD724454F35FC126(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4DA343F96D5C3FAB_METHOD_3_40C5968D970A15A2_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>*>* Method_3_8304FB9CA9BAE504()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4DA343F96D5C3FAB_METHOD_3_8304FB9CA9BAE504_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_4DA343F96D5C3FAB_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_66A56A98FBC17877(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_4DA343F96D5C3FAB_METHOD_3_66A56A98FBC17877_OFFSET))(this, a1);
	}

	::Class_2_0F138252A5783001* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_0F138252A5783001*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4DA343F96D5C3FAB_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4DA343F96D5C3FAB_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_4DA343F96D5C3FAB_FROMFLX_OFFSET))(this, a1);
	}

	::Class_1_C836D00248E6EFFE* Method_3_F15E7F69F5BAD374(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*))((::PBYTE)hIl2Cpp + CLASS_3_4DA343F96D5C3FAB_METHOD_3_F15E7F69F5BAD374_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_3_4DA343F96D5C3FAB* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_4DA343F96D5C3FAB*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_4DA343F96D5C3FAB_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::System::Boolean Method_3_0578713EDB32B89E(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_4DA343F96D5C3FAB_METHOD_3_0578713EDB32B89E_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>*>* Method_3_F59BC96F290BB1C3()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4DA343F96D5C3FAB_METHOD_3_F59BC96F290BB1C3_OFFSET))(this);
	}

	::System::Boolean Method_3_622F9323D55114B2(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_4DA343F96D5C3FAB_METHOD_3_622F9323D55114B2_OFFSET))(this, a1, a2);
	}

	static ::Class_3_4DA343F96D5C3FAB* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_4DA343F96D5C3FAB*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_4DA343F96D5C3FAB_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}
};
