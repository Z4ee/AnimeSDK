#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0F138252A5783001.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_C836D00248E6EFFE;
class Class_2_14986121AA61AD99;
class Class_2_1C93660C39236995;
class Class_2_2A56CCCB20A346FA;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_E41C1EFCBD73D3C9_17_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x171EA700)
#define CLASS_3_E41C1EFCBD73D3C9_17_FROMFLX_OFFSET UNITYSDK_OFFSET(0x171EB470)
#define CLASS_3_E41C1EFCBD73D3C9_17_METHOD_3_10384271655D533B_OFFSET UNITYSDK_OFFSET(0x171EA760)
#define CLASS_3_E41C1EFCBD73D3C9_17_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x171ED030)
#define CLASS_3_E41C1EFCBD73D3C9_17_METHOD_3_82A3EC7819F9DAA7_OFFSET UNITYSDK_OFFSET(0x171EB4F0)
#define CLASS_3_E41C1EFCBD73D3C9_17_METHOD_3_924B48D8C397D634_OFFSET UNITYSDK_OFFSET(0x171EB200)
#define CLASS_3_E41C1EFCBD73D3C9_17_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x171ED1E0)
#define CLASS_3_E41C1EFCBD73D3C9_17_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x171EB360)
#define CLASS_3_E41C1EFCBD73D3C9_17_METHOD_3_BB2B154A9AA5F82B_OFFSET UNITYSDK_OFFSET(0x171EA660)
#define CLASS_3_E41C1EFCBD73D3C9_17_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x171EB460)
#define CLASS_3_E41C1EFCBD73D3C9_17_METHOD_3_F15E7F69F5BAD374_OFFSET UNITYSDK_OFFSET(0x171ED340)
#define CLASS_3_E41C1EFCBD73D3C9_17__CTOR_OFFSET UNITYSDK_OFFSET(0x171ED020)

inline static constexpr unsigned int Class_3_E41C1EFCBD73D3C9_17_TypeDefinitionIndex = 80082;

class Class_3_E41C1EFCBD73D3C9_17 : public ::Class_2_0F138252A5783001
{
public:
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_7; // 0x20
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_5; // 0x28
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_8; // 0x30
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_10; // 0x38
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_13; // 0x40
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_6; // 0x48
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_15; // 0x50
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_14; // 0x58
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_9; // 0x60
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_12; // 0x68
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_0; // 0x70
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_4; // 0x78
	::MoleMole::Config::DynamicString* Field_3_16; // 0x80
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_11; // 0x88
	::System::Boolean Field_3_18; // 0x90
	::System::Boolean Field_3_17; // 0x91
	::System::Boolean Field_3_19; // 0x92

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_17__CTOR_OFFSET))(this);
	}

	::Class_1_C836D00248E6EFFE* Method_3_BB2B154A9AA5F82B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_17_METHOD_3_BB2B154A9AA5F82B_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_17_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_924B48D8C397D634(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_17_METHOD_3_924B48D8C397D634_OFFSET))(this, a1);
	}

	::Class_2_0F138252A5783001* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_0F138252A5783001*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_17_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_17_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_17_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_10384271655D533B(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_17_METHOD_3_10384271655D533B_OFFSET))(this, a1, a2);
	}

	static ::Class_3_E41C1EFCBD73D3C9_17* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_E41C1EFCBD73D3C9_17*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_17_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	static ::Class_3_E41C1EFCBD73D3C9_17* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_E41C1EFCBD73D3C9_17*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_17_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::Class_1_C836D00248E6EFFE* Method_3_F15E7F69F5BAD374(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_17_METHOD_3_F15E7F69F5BAD374_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_82A3EC7819F9DAA7(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_17_METHOD_3_82A3EC7819F9DAA7_OFFSET))(this, a1);
	}
};
