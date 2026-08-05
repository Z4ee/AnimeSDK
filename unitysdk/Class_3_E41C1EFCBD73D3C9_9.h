#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0F138252A5783001.h"
#include "unitysdk/Class_2_0F138252A5783001_Enum_3_FD724454F35FC126.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_C836D00248E6EFFE;
class Class_1_E795C5D5DDF30620;
class Class_2_14986121AA61AD99;
class Class_2_1C93660C39236995;
class Class_2_2A56CCCB20A346FA;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_E41C1EFCBD73D3C9_9_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11B35480)
#define CLASS_3_E41C1EFCBD73D3C9_9_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11B36120)
#define CLASS_3_E41C1EFCBD73D3C9_9_METHOD_3_10384271655D533B_OFFSET UNITYSDK_OFFSET(0x11B354E0)
#define CLASS_3_E41C1EFCBD73D3C9_9_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x11B37F10)
#define CLASS_3_E41C1EFCBD73D3C9_9_METHOD_3_40C5968D970A15A2_OFFSET UNITYSDK_OFFSET(0x11B35470)
#define CLASS_3_E41C1EFCBD73D3C9_9_METHOD_3_82A3EC7819F9DAA7_OFFSET UNITYSDK_OFFSET(0x11B361A0)
#define CLASS_3_E41C1EFCBD73D3C9_9_METHOD_3_924B48D8C397D634_OFFSET UNITYSDK_OFFSET(0x11B35EB0)
#define CLASS_3_E41C1EFCBD73D3C9_9_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x11B38160)
#define CLASS_3_E41C1EFCBD73D3C9_9_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x11B36010)
#define CLASS_3_E41C1EFCBD73D3C9_9_METHOD_3_BB2B154A9AA5F82B_OFFSET UNITYSDK_OFFSET(0x11B353D0)
#define CLASS_3_E41C1EFCBD73D3C9_9_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x11B36110)
#define CLASS_3_E41C1EFCBD73D3C9_9_METHOD_3_F15E7F69F5BAD374_OFFSET UNITYSDK_OFFSET(0x11B380C0)
#define CLASS_3_E41C1EFCBD73D3C9_9__CTOR_OFFSET UNITYSDK_OFFSET(0x11B37F00)

inline static constexpr unsigned int Class_3_E41C1EFCBD73D3C9_9_TypeDefinitionIndex = 78180;

class Class_3_E41C1EFCBD73D3C9_9 : public ::Class_2_0F138252A5783001
{
public:
	::MoleMole::Config::DynamicInt* Field_3_19; // 0x20
	::System::String* Field_3_12; // 0x28
	::MoleMole::Config::DynamicFloat* Field_3_3; // 0x30
	::System::String* Field_3_9; // 0x38
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_4; // 0x40
	::MoleMole::Config::ConfigPosRot* Field_3_1; // 0x48
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_5; // 0x50
	::Class_1_E795C5D5DDF30620* Field_3_2; // 0x58
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_0; // 0x60
	::System::String* Field_3_14; // 0x68
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_7; // 0x70
	::System::String* Field_3_8; // 0x78
	::System::String* Field_3_10; // 0x80
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_6; // 0x88
	::System::Boolean Field_3_13; // 0x90
	::System::Boolean Field_3_11; // 0x91
	::System::Boolean Field_3_15; // 0x92

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_9__CTOR_OFFSET))(this);
	}

	::Class_1_C836D00248E6EFFE* Method_3_BB2B154A9AA5F82B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_9_METHOD_3_BB2B154A9AA5F82B_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_0F138252A5783001_Enum_3_FD724454F35FC126 Method_3_40C5968D970A15A2()
	{
		return ((::Class_2_0F138252A5783001_Enum_3_FD724454F35FC126(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_9_METHOD_3_40C5968D970A15A2_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_9_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_924B48D8C397D634(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_9_METHOD_3_924B48D8C397D634_OFFSET))(this, a1);
	}

	::Class_2_0F138252A5783001* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_0F138252A5783001*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_9_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_9_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_9_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_3_E41C1EFCBD73D3C9_9* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_E41C1EFCBD73D3C9_9*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_9_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_82A3EC7819F9DAA7(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_9_METHOD_3_82A3EC7819F9DAA7_OFFSET))(this, a1);
	}

	::Class_1_C836D00248E6EFFE* Method_3_F15E7F69F5BAD374(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_9_METHOD_3_F15E7F69F5BAD374_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_3_E41C1EFCBD73D3C9_9* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_E41C1EFCBD73D3C9_9*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_9_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::System::Boolean Method_3_10384271655D533B(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_9_METHOD_3_10384271655D533B_OFFSET))(this, a1, a2);
	}
};
