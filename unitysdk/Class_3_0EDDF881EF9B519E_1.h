#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_7C9A70DC3FC57CDC.h"
#include "unitysdk/Enum_3_30D0A72B77188A98.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_167BB37617B940E3;
class Class_2_EA995402651EF7A9;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_0EDDF881EF9B519E_1_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11653DB0)
#define CLASS_3_0EDDF881EF9B519E_1_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11654310)
#define CLASS_3_0EDDF881EF9B519E_1_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x11654A50)
#define CLASS_3_0EDDF881EF9B519E_1_METHOD_3_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0x11654100)
#define CLASS_3_0EDDF881EF9B519E_1_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x116548F0)
#define CLASS_3_0EDDF881EF9B519E_1_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x116541A0)
#define CLASS_3_0EDDF881EF9B519E_1_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0x11654810)
#define CLASS_3_0EDDF881EF9B519E_1_METHOD_3_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x116542A0)
#define CLASS_3_0EDDF881EF9B519E_1_METHOD_3_C51D94A950492126_OFFSET UNITYSDK_OFFSET(0x11653E10)
#define CLASS_3_0EDDF881EF9B519E_1_METHOD_3_D43D553A8EE4CBFF_OFFSET UNITYSDK_OFFSET(0x11653CB0)
#define CLASS_3_0EDDF881EF9B519E_1_METHOD_3_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x11654390)
#define CLASS_3_0EDDF881EF9B519E_1_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x11653DA0)
#define CLASS_3_0EDDF881EF9B519E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11654800)

inline static constexpr unsigned int Class_3_0EDDF881EF9B519E_1_TypeDefinitionIndex = 45231;

class Class_3_0EDDF881EF9B519E_1 : public ::Class_2_7C9A70DC3FC57CDC
{
public:
	::System::String* Field_3_0; // 0x38
	::System::Boolean Field_3_1; // 0x40
	::Enum_3_30D0A72B77188A98 Field_3_2; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0EDDF881EF9B519E_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_D43D553A8EE4CBFF(::Class_3_F41D242A20F8FE06* a1, ::Class_2_7C9A70DC3FC57CDC* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_7C9A70DC3FC57CDC*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_0EDDF881EF9B519E_1_METHOD_3_D43D553A8EE4CBFF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0EDDF881EF9B519E_1_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_0EDDF881EF9B519E_1_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_0EDDF881EF9B519E_1_METHOD_3_5C90773220FA8136_OFFSET))(this, a1);
	}

	::Class_2_7C9A70DC3FC57CDC* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_7C9A70DC3FC57CDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0EDDF881EF9B519E_1_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0EDDF881EF9B519E_1_METHOD_3_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_0EDDF881EF9B519E_1_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_0EDDF881EF9B519E_1_METHOD_3_DF413489329CBAF8_OFFSET))(this, a1);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_7C9A70DC3FC57CDC* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_7C9A70DC3FC57CDC*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_0EDDF881EF9B519E_1_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	static ::Class_3_0EDDF881EF9B519E_1* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_0EDDF881EF9B519E_1*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_0EDDF881EF9B519E_1_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::System::Boolean Method_3_C51D94A950492126(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_0EDDF881EF9B519E_1_METHOD_3_C51D94A950492126_OFFSET))(this, a1, a2);
	}

	static ::Class_3_0EDDF881EF9B519E_1* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_0EDDF881EF9B519E_1*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_0EDDF881EF9B519E_1_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}
};
