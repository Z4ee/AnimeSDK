#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0F138252A5783001.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"

class Class_1_236FD73ABC492E3F;
class Class_1_C836D00248E6EFFE;
class Class_1_EF896E1D0FDF202A;
class Class_2_14986121AA61AD99;
class Class_2_1C93660C39236995;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_6574255A842B205C_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x116AFF00)
#define CLASS_3_6574255A842B205C_FROMFLX_OFFSET UNITYSDK_OFFSET(0x116B07A0)
#define CLASS_3_6574255A842B205C_METHOD_3_0578713EDB32B89E_OFFSET UNITYSDK_OFFSET(0x116B0820)
#define CLASS_3_6574255A842B205C_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x116B1790)
#define CLASS_3_6574255A842B205C_METHOD_3_3CA9D405AABD10AA_OFFSET UNITYSDK_OFFSET(0x116AFF60)
#define CLASS_3_6574255A842B205C_METHOD_3_66A56A98FBC17877_OFFSET UNITYSDK_OFFSET(0x116B05F0)
#define CLASS_3_6574255A842B205C_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x116B1630)
#define CLASS_3_6574255A842B205C_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x116B0690)
#define CLASS_3_6574255A842B205C_METHOD_3_BB2B154A9AA5F82B_OFFSET UNITYSDK_OFFSET(0x116AFE60)
#define CLASS_3_6574255A842B205C_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x116B0790)
#define CLASS_3_6574255A842B205C_METHOD_3_F15E7F69F5BAD374_OFFSET UNITYSDK_OFFSET(0x116B1590)
#define CLASS_3_6574255A842B205C__CTOR_OFFSET UNITYSDK_OFFSET(0x116B1580)

inline static constexpr unsigned int Class_3_6574255A842B205C_TypeDefinitionIndex = 85001;

class Class_3_6574255A842B205C : public ::Class_2_0F138252A5783001
{
public:
	::MoleMole::Config::ConfigPosRot* Field_3_2; // 0x20
	::System::String* Field_3_0; // 0x28
	::MoleMole::Config::ConfigPosRot* Field_3_3; // 0x30
	::MoleMole::Config::DynamicString* Field_3_6; // 0x38
	::Il2CppArray<::Class_1_EF896E1D0FDF202A*>* Field_3_7; // 0x40
	::System::Boolean Field_3_5; // 0x48
	::MoleMole::Config::AbilityTargetting Field_3_1; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6574255A842B205C__CTOR_OFFSET))(this);
	}

	::Class_1_C836D00248E6EFFE* Method_3_BB2B154A9AA5F82B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*))((::PBYTE)hIl2Cpp + CLASS_3_6574255A842B205C_METHOD_3_BB2B154A9AA5F82B_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_6574255A842B205C_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_66A56A98FBC17877(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_6574255A842B205C_METHOD_3_66A56A98FBC17877_OFFSET))(this, a1);
	}

	::Class_2_0F138252A5783001* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_0F138252A5783001*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6574255A842B205C_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6574255A842B205C_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_6574255A842B205C_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_0578713EDB32B89E(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_6574255A842B205C_METHOD_3_0578713EDB32B89E_OFFSET))(this, a1);
	}

	::Class_1_C836D00248E6EFFE* Method_3_F15E7F69F5BAD374(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*))((::PBYTE)hIl2Cpp + CLASS_3_6574255A842B205C_METHOD_3_F15E7F69F5BAD374_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_3_6574255A842B205C* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_6574255A842B205C*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_6574255A842B205C_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	static ::Class_3_6574255A842B205C* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_6574255A842B205C*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_6574255A842B205C_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_3CA9D405AABD10AA(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_6574255A842B205C_METHOD_3_3CA9D405AABD10AA_OFFSET))(this, a1, a2);
	}
};
