#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0F138252A5783001.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/TeamRelationship.h"

class Class_1_236FD73ABC492E3F;
class Class_1_C836D00248E6EFFE;
class Class_2_14986121AA61AD99;
class Class_2_1C93660C39236995;
class Class_3_F41D242A20F8FE06;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_99E72933CBAC5D34_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12848070)
#define CLASS_3_99E72933CBAC5D34_FROMFLX_OFFSET UNITYSDK_OFFSET(0x128486E0)
#define CLASS_3_99E72933CBAC5D34_METHOD_3_00531776927FE5B6_OFFSET UNITYSDK_OFFSET(0x12848760)
#define CLASS_3_99E72933CBAC5D34_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x12848FC0)
#define CLASS_3_99E72933CBAC5D34_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x12848E60)
#define CLASS_3_99E72933CBAC5D34_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x128485D0)
#define CLASS_3_99E72933CBAC5D34_METHOD_3_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0x12848580)
#define CLASS_3_99E72933CBAC5D34_METHOD_3_BB2B154A9AA5F82B_OFFSET UNITYSDK_OFFSET(0x12847FD0)
#define CLASS_3_99E72933CBAC5D34_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x128486D0)
#define CLASS_3_99E72933CBAC5D34_METHOD_3_F15E7F69F5BAD374_OFFSET UNITYSDK_OFFSET(0x12849170)
#define CLASS_3_99E72933CBAC5D34_METHOD_3_F6A22BB1267B474D_OFFSET UNITYSDK_OFFSET(0x128480D0)
#define CLASS_3_99E72933CBAC5D34__CTOR_OFFSET UNITYSDK_OFFSET(0x12848E50)

inline static constexpr unsigned int Class_3_99E72933CBAC5D34_TypeDefinitionIndex = 63191;

class Class_3_99E72933CBAC5D34 : public ::Class_2_0F138252A5783001
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_3_6; // 0x20
	::System::Boolean Field_3_5; // 0x28
	::System::Boolean Field_3_4; // 0x29
	::MoleMole::Config::TeamRelationship Field_3_7; // 0x2C
	::MoleMole::Config::TeamRelationship Field_3_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_99E72933CBAC5D34__CTOR_OFFSET))(this);
	}

	::Class_1_C836D00248E6EFFE* Method_3_BB2B154A9AA5F82B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*))((::PBYTE)hIl2Cpp + CLASS_3_99E72933CBAC5D34_METHOD_3_BB2B154A9AA5F82B_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_99E72933CBAC5D34_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_99E72933CBAC5D34_METHOD_3_B73F62522113F21F_OFFSET))(this, a1);
	}

	::Class_2_0F138252A5783001* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_0F138252A5783001*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_99E72933CBAC5D34_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_99E72933CBAC5D34_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_99E72933CBAC5D34_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_3_99E72933CBAC5D34* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_99E72933CBAC5D34*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_99E72933CBAC5D34_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	static ::Class_3_99E72933CBAC5D34* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_99E72933CBAC5D34*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_99E72933CBAC5D34_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_00531776927FE5B6(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_99E72933CBAC5D34_METHOD_3_00531776927FE5B6_OFFSET))(this, a1);
	}

	::Class_1_C836D00248E6EFFE* Method_3_F15E7F69F5BAD374(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*))((::PBYTE)hIl2Cpp + CLASS_3_99E72933CBAC5D34_METHOD_3_F15E7F69F5BAD374_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_F6A22BB1267B474D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_99E72933CBAC5D34_METHOD_3_F6A22BB1267B474D_OFFSET))(this, a1, a2);
	}
};
