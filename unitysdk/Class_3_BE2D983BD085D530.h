#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2A56CCCB20A346FA.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/InlevelCameraState.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_14986121AA61AD99;
class Class_2_1C93660C39236995;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_BE2D983BD085D530_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A2A5830)
#define CLASS_3_BE2D983BD085D530_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A2A5E90)
#define CLASS_3_BE2D983BD085D530_METHOD_3_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x1A2A5F10)
#define CLASS_3_BE2D983BD085D530_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x1A2A68D0)
#define CLASS_3_BE2D983BD085D530_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x1A2A6B60)
#define CLASS_3_BE2D983BD085D530_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x1A2A5D80)
#define CLASS_3_BE2D983BD085D530_METHOD_3_B1ECAEE982D24001_OFFSET UNITYSDK_OFFSET(0x1A2A5890)
#define CLASS_3_BE2D983BD085D530_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0x1A2A6A80)
#define CLASS_3_BE2D983BD085D530_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1A2A5E80)
#define CLASS_3_BE2D983BD085D530_METHOD_3_D43D553A8EE4CBFF_OFFSET UNITYSDK_OFFSET(0x1A2A5740)
#define CLASS_3_BE2D983BD085D530_METHOD_3_D8A375BA431DF6B3_OFFSET UNITYSDK_OFFSET(0x1A2A5C90)
#define CLASS_3_BE2D983BD085D530__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2A6860)

inline static constexpr unsigned int Class_3_BE2D983BD085D530_TypeDefinitionIndex = 52817;

class Class_3_BE2D983BD085D530 : public ::Class_2_2A56CCCB20A346FA
{
public:
	::System::String* Field_3_0; // 0x38
	::System::String* Field_3_11; // 0x40
	::System::String* Field_3_6; // 0x48
	::MoleMole::Config::DynamicFloat* Field_3_4; // 0x50
	::System::Boolean Field_3_5; // 0x58
	::MoleMole::Config::InlevelCameraState Field_3_7; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BE2D983BD085D530__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_D43D553A8EE4CBFF(::Class_3_F41D242A20F8FE06* a1, ::Class_2_2A56CCCB20A346FA* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_1C93660C39236995* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_2A56CCCB20A346FA*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_BE2D983BD085D530_METHOD_3_D43D553A8EE4CBFF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BE2D983BD085D530_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D8A375BA431DF6B3(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_BE2D983BD085D530_METHOD_3_D8A375BA431DF6B3_OFFSET))(this, a1);
	}

	::Class_2_2A56CCCB20A346FA* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_2A56CCCB20A346FA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BE2D983BD085D530_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BE2D983BD085D530_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_BE2D983BD085D530_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_BE2D983BD085D530_METHOD_3_0BD393E566CD3D4A_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_B1ECAEE982D24001(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BE2D983BD085D530_METHOD_3_B1ECAEE982D24001_OFFSET))(this, a1, a2);
	}

	static ::Class_3_BE2D983BD085D530* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_BE2D983BD085D530*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BE2D983BD085D530_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_2A56CCCB20A346FA* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_1C93660C39236995* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_2A56CCCB20A346FA*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_BE2D983BD085D530_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	static ::Class_3_BE2D983BD085D530* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_BE2D983BD085D530*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_BE2D983BD085D530_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}
};
