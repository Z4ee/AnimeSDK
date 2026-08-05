#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0F138252A5783001.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/EtherEyesObjectConfig.h"
#include "unitysdk/MoleMole/Config/EtherEyesObjectSize.h"

class Class_1_236FD73ABC492E3F;
class Class_1_C836D00248E6EFFE;
class Class_2_14986121AA61AD99;
class Class_2_1C93660C39236995;
class Class_2_2A56CCCB20A346FA;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_E41C1EFCBD73D3C9_8_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x133C8DE0)
#define CLASS_3_E41C1EFCBD73D3C9_8_FROMFLX_OFFSET UNITYSDK_OFFSET(0x133C9B20)
#define CLASS_3_E41C1EFCBD73D3C9_8_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x133CBBD0)
#define CLASS_3_E41C1EFCBD73D3C9_8_METHOD_3_1A060A6D17E487E5_OFFSET UNITYSDK_OFFSET(0x133C9BA0)
#define CLASS_3_E41C1EFCBD73D3C9_8_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x133CBF60)
#define CLASS_3_E41C1EFCBD73D3C9_8_METHOD_3_9E676667B518C656_OFFSET UNITYSDK_OFFSET(0x133C9900)
#define CLASS_3_E41C1EFCBD73D3C9_8_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x133C9A10)
#define CLASS_3_E41C1EFCBD73D3C9_8_METHOD_3_BB2B154A9AA5F82B_OFFSET UNITYSDK_OFFSET(0x133C8D40)
#define CLASS_3_E41C1EFCBD73D3C9_8_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x133C9B10)
#define CLASS_3_E41C1EFCBD73D3C9_8_METHOD_3_CFB8F2E56E6F02E9_OFFSET UNITYSDK_OFFSET(0x133C8E40)
#define CLASS_3_E41C1EFCBD73D3C9_8_METHOD_3_F15E7F69F5BAD374_OFFSET UNITYSDK_OFFSET(0x133CC0C0)
#define CLASS_3_E41C1EFCBD73D3C9_8__CTOR_OFFSET UNITYSDK_OFFSET(0x133CBB40)

inline static constexpr unsigned int Class_3_E41C1EFCBD73D3C9_8_TypeDefinitionIndex = 50386;

class Class_3_E41C1EFCBD73D3C9_8 : public ::Class_2_0F138252A5783001
{
public:
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_22; // 0x20
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_16; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* Field_3_5; // 0x30
	::System::String* Field_3_9; // 0x38
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_21; // 0x40
	::MoleMole::Config::ConfigPosRot* Field_3_6; // 0x48
	::MoleMole::Config::DynamicFloat* Field_3_4; // 0x50
	::System::String* Field_3_7; // 0x58
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_23; // 0x60
	::System::Boolean Field_3_19; // 0x68
	::System::Boolean Field_3_14; // 0x69
	::System::Boolean Field_3_8; // 0x6A
	::System::Boolean Field_3_13; // 0x6B
	::System::Int32 Field_3_0; // 0x6C
	::System::Boolean Field_3_12; // 0x70
	::System::Boolean Field_3_17; // 0x71
	::System::Boolean Field_3_18; // 0x72
	::MoleMole::Config::EtherEyesObjectConfig Field_3_11; // 0x74
	::MoleMole::Config::EtherEyesObjectSize Field_3_10; // 0x8C
	::System::Single Field_3_15; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_8__CTOR_OFFSET))(this);
	}

	::Class_1_C836D00248E6EFFE* Method_3_BB2B154A9AA5F82B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_8_METHOD_3_BB2B154A9AA5F82B_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_8_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_9E676667B518C656(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_8_METHOD_3_9E676667B518C656_OFFSET))(this, a1);
	}

	::Class_2_0F138252A5783001* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_0F138252A5783001*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_8_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_8_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_8_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_3_E41C1EFCBD73D3C9_8* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_E41C1EFCBD73D3C9_8*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_8_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_CFB8F2E56E6F02E9(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_8_METHOD_3_CFB8F2E56E6F02E9_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_1A060A6D17E487E5(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_8_METHOD_3_1A060A6D17E487E5_OFFSET))(this, a1);
	}

	static ::Class_3_E41C1EFCBD73D3C9_8* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_E41C1EFCBD73D3C9_8*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_8_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::Class_1_C836D00248E6EFFE* Method_3_F15E7F69F5BAD374(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_8_METHOD_3_F15E7F69F5BAD374_OFFSET))(this, a1, a2, a3);
	}
};
