#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0F138252A5783001.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"

class Class_1_236FD73ABC492E3F;
class Class_1_C836D00248E6EFFE;
class Class_2_14986121AA61AD99;
class Class_2_1C93660C39236995;
class Class_2_2A56CCCB20A346FA;
class Class_3_F41D242A20F8FE06;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_82FA05638F7D3FE3_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1259A460)
#define CLASS_3_82FA05638F7D3FE3_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1259AA70)
#define CLASS_3_82FA05638F7D3FE3_METHOD_3_00531776927FE5B6_OFFSET UNITYSDK_OFFSET(0x1259AAF0)
#define CLASS_3_82FA05638F7D3FE3_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x1259B4F0)
#define CLASS_3_82FA05638F7D3FE3_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x1259B2F0)
#define CLASS_3_82FA05638F7D3FE3_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x1259A960)
#define CLASS_3_82FA05638F7D3FE3_METHOD_3_BB2B154A9AA5F82B_OFFSET UNITYSDK_OFFSET(0x1259A3C0)
#define CLASS_3_82FA05638F7D3FE3_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1259AA60)
#define CLASS_3_82FA05638F7D3FE3_METHOD_3_D48F6ED8C47DDD04_OFFSET UNITYSDK_OFFSET(0x1259A8D0)
#define CLASS_3_82FA05638F7D3FE3_METHOD_3_E07D6AAA98B227A2_OFFSET UNITYSDK_OFFSET(0x1259A4C0)
#define CLASS_3_82FA05638F7D3FE3_METHOD_3_F15E7F69F5BAD374_OFFSET UNITYSDK_OFFSET(0x1259B450)
#define CLASS_3_82FA05638F7D3FE3__CTOR_OFFSET UNITYSDK_OFFSET(0x1259B2E0)

inline static constexpr unsigned int Class_3_82FA05638F7D3FE3_TypeDefinitionIndex = 53205;

class Class_3_82FA05638F7D3FE3 : public ::Class_2_0F138252A5783001
{
public:
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_5; // 0x20
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_4; // 0x28
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_6; // 0x30
	::System::String* Field_3_7; // 0x38
	::MoleMole::Config::AbilityTargetting Field_3_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_82FA05638F7D3FE3__CTOR_OFFSET))(this);
	}

	::Class_1_C836D00248E6EFFE* Method_3_BB2B154A9AA5F82B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*))((::PBYTE)hIl2Cpp + CLASS_3_82FA05638F7D3FE3_METHOD_3_BB2B154A9AA5F82B_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_82FA05638F7D3FE3_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D48F6ED8C47DDD04(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_82FA05638F7D3FE3_METHOD_3_D48F6ED8C47DDD04_OFFSET))(this, a1);
	}

	::Class_2_0F138252A5783001* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_0F138252A5783001*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_82FA05638F7D3FE3_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_82FA05638F7D3FE3_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_82FA05638F7D3FE3_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_E07D6AAA98B227A2(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_82FA05638F7D3FE3_METHOD_3_E07D6AAA98B227A2_OFFSET))(this, a1, a2);
	}

	static ::Class_3_82FA05638F7D3FE3* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_82FA05638F7D3FE3*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_82FA05638F7D3FE3_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::System::Boolean Method_3_00531776927FE5B6(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_82FA05638F7D3FE3_METHOD_3_00531776927FE5B6_OFFSET))(this, a1);
	}

	::Class_1_C836D00248E6EFFE* Method_3_F15E7F69F5BAD374(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*))((::PBYTE)hIl2Cpp + CLASS_3_82FA05638F7D3FE3_METHOD_3_F15E7F69F5BAD374_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_3_82FA05638F7D3FE3* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_82FA05638F7D3FE3*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_82FA05638F7D3FE3_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}
};
