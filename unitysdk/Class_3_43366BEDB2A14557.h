#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_7C9A70DC3FC57CDC.h"
#include "unitysdk/Enum_3_C892E8D2B7665528.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/InlevelCameraState.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_167BB37617B940E3;
class Class_2_EA995402651EF7A9;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_43366BEDB2A14557_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11DC1680)
#define CLASS_3_43366BEDB2A14557_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11DC1B10)
#define CLASS_3_43366BEDB2A14557_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x11DC21B0)
#define CLASS_3_43366BEDB2A14557_METHOD_3_2544D774F2F3A291_OFFSET UNITYSDK_OFFSET(0x11DC16E0)
#define CLASS_3_43366BEDB2A14557_METHOD_3_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0x11DC1900)
#define CLASS_3_43366BEDB2A14557_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x11DC2050)
#define CLASS_3_43366BEDB2A14557_METHOD_3_9979AA0AF765C541_OFFSET UNITYSDK_OFFSET(0x11DC1460)
#define CLASS_3_43366BEDB2A14557_METHOD_3_A2AB40CA531F9B5C_OFFSET UNITYSDK_OFFSET(0x11DC1B90)
#define CLASS_3_43366BEDB2A14557_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x11DC19A0)
#define CLASS_3_43366BEDB2A14557_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0x11DC1F70)
#define CLASS_3_43366BEDB2A14557_METHOD_3_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x11DC1AA0)
#define CLASS_3_43366BEDB2A14557_METHOD_3_DA6E69CF651B121B_OFFSET UNITYSDK_OFFSET(0x11DC15E0)
#define CLASS_3_43366BEDB2A14557__CTOR_OFFSET UNITYSDK_OFFSET(0x11DC1F60)

inline static constexpr unsigned int Class_3_43366BEDB2A14557_TypeDefinitionIndex = 65642;

class Class_3_43366BEDB2A14557 : public ::Class_2_7C9A70DC3FC57CDC
{
public:
	::MoleMole::Config::DynamicFloat* Field_3_1; // 0x38
	::Enum_3_C892E8D2B7665528 Field_3_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_43366BEDB2A14557__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_9979AA0AF765C541(::Class_3_F41D242A20F8FE06* a1, ::Class_2_7C9A70DC3FC57CDC* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_7C9A70DC3FC57CDC*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_43366BEDB2A14557_METHOD_3_9979AA0AF765C541_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_43366BEDB2A14557_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_43366BEDB2A14557_METHOD_3_5C90773220FA8136_OFFSET))(this, a1);
	}

	::Class_2_7C9A70DC3FC57CDC* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_7C9A70DC3FC57CDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_43366BEDB2A14557_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_43366BEDB2A14557_METHOD_3_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_43366BEDB2A14557_FROMFLX_OFFSET))(this, a1);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_7C9A70DC3FC57CDC* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_7C9A70DC3FC57CDC*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_43366BEDB2A14557_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	static ::MoleMole::Config::InlevelCameraState Method_3_DA6E69CF651B121B(::Enum_3_C892E8D2B7665528 a1)
	{
		return ((::MoleMole::Config::InlevelCameraState(*)(::Enum_3_C892E8D2B7665528))((::PBYTE)hIl2Cpp + CLASS_3_43366BEDB2A14557_METHOD_3_DA6E69CF651B121B_OFFSET))(a1);
	}

	::System::Boolean Method_3_2544D774F2F3A291(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_43366BEDB2A14557_METHOD_3_2544D774F2F3A291_OFFSET))(this, a1, a2);
	}

	static ::Class_3_43366BEDB2A14557* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_43366BEDB2A14557*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_43366BEDB2A14557_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::System::Boolean Method_3_A2AB40CA531F9B5C(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_43366BEDB2A14557_METHOD_3_A2AB40CA531F9B5C_OFFSET))(this, a1);
	}

	static ::Class_3_43366BEDB2A14557* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_43366BEDB2A14557*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_43366BEDB2A14557_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}
};
