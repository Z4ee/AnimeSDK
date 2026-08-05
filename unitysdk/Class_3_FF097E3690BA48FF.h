#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2A56CCCB20A346FA.h"
#include "unitysdk/Enum_3_7609C87F8335DE37_5.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"

class Class_1_236FD73ABC492E3F;
class Class_1_4ED21A115C97704D;
class Class_1_B7E341C5F1A6F199;
class Class_2_14986121AA61AD99;
class Class_2_1C93660C39236995;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_FF097E3690BA48FF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17EEDEC0)
#define CLASS_3_FF097E3690BA48FF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17EEE6E0)
#define CLASS_3_FF097E3690BA48FF_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x17EEF680)
#define CLASS_3_FF097E3690BA48FF_METHOD_3_3DC6B5AAFA39829C_OFFSET UNITYSDK_OFFSET(0x17EEE760)
#define CLASS_3_FF097E3690BA48FF_METHOD_3_4B2A55B54410AF3F_OFFSET UNITYSDK_OFFSET(0x17EEE4B0)
#define CLASS_3_FF097E3690BA48FF_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x17EEF910)
#define CLASS_3_FF097E3690BA48FF_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x17EEE5D0)
#define CLASS_3_FF097E3690BA48FF_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0x17EEF830)
#define CLASS_3_FF097E3690BA48FF_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x17EEE6D0)
#define CLASS_3_FF097E3690BA48FF_METHOD_3_D43D553A8EE4CBFF_OFFSET UNITYSDK_OFFSET(0x17EEDDB0)
#define CLASS_3_FF097E3690BA48FF_METHOD_3_DDBE9A358A92FDCB_OFFSET UNITYSDK_OFFSET(0x17EEDF20)
#define CLASS_3_FF097E3690BA48FF_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17EEDEB0)
#define CLASS_3_FF097E3690BA48FF__CTOR_OFFSET UNITYSDK_OFFSET(0x17EEF610)

inline static constexpr unsigned int Class_3_FF097E3690BA48FF_TypeDefinitionIndex = 54349;

class Class_3_FF097E3690BA48FF : public ::Class_2_2A56CCCB20A346FA
{
public:
	::Class_1_4ED21A115C97704D* Field_3_6; // 0x38
	::MoleMole::Config::DynamicFloat* Field_3_0; // 0x40
	::System::Collections::Generic::List_1<::System::String*>* Field_3_7; // 0x48
	::System::Collections::Generic::List_1<::MoleMole::Config::BuffGroupName>* Field_3_1; // 0x50
	::MoleMole::Config::DynamicFloat* Field_3_11; // 0x58
	::System::String* Field_3_2; // 0x60
	::System::String* Field_3_4; // 0x68
	::MoleMole::Config::AbilityTargetting Field_3_5; // 0x70
	::Enum_3_7609C87F8335DE37_5 Field_3_3; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF097E3690BA48FF__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_D43D553A8EE4CBFF(::Class_3_F41D242A20F8FE06* a1, ::Class_2_2A56CCCB20A346FA* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_1C93660C39236995* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_2A56CCCB20A346FA*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_FF097E3690BA48FF_METHOD_3_D43D553A8EE4CBFF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF097E3690BA48FF_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_FF097E3690BA48FF_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_4B2A55B54410AF3F(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_FF097E3690BA48FF_METHOD_3_4B2A55B54410AF3F_OFFSET))(this, a1);
	}

	::Class_2_2A56CCCB20A346FA* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_2A56CCCB20A346FA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF097E3690BA48FF_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF097E3690BA48FF_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_FF097E3690BA48FF_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_3DC6B5AAFA39829C(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_FF097E3690BA48FF_METHOD_3_3DC6B5AAFA39829C_OFFSET))(this, a1);
	}

	static ::Class_3_FF097E3690BA48FF* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_FF097E3690BA48FF*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_FF097E3690BA48FF_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_2A56CCCB20A346FA* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_1C93660C39236995* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_2A56CCCB20A346FA*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_FF097E3690BA48FF_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_3_DDBE9A358A92FDCB(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_FF097E3690BA48FF_METHOD_3_DDBE9A358A92FDCB_OFFSET))(this, a1, a2);
	}

	static ::Class_3_FF097E3690BA48FF* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_FF097E3690BA48FF*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_FF097E3690BA48FF_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}
};
