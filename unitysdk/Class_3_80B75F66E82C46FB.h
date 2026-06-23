#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_828B2711AF58BA0B.h"
#include "unitysdk/Enum_3_AFC322BB49394EB5.h"
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
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_80B75F66E82C46FB_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11D75BD0)
#define CLASS_3_80B75F66E82C46FB_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11D76160)
#define CLASS_3_80B75F66E82C46FB_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x11D76670)
#define CLASS_3_80B75F66E82C46FB_METHOD_3_3A970D9BCF9BC819_OFFSET UNITYSDK_OFFSET(0x11D75940)
#define CLASS_3_80B75F66E82C46FB_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x11D76820)
#define CLASS_3_80B75F66E82C46FB_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x11D75FF0)
#define CLASS_3_80B75F66E82C46FB_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0x11D76590)
#define CLASS_3_80B75F66E82C46FB_METHOD_3_BCCAB6158AD8296E_OFFSET UNITYSDK_OFFSET(0x11D75F30)
#define CLASS_3_80B75F66E82C46FB_METHOD_3_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x11D760F0)
#define CLASS_3_80B75F66E82C46FB_METHOD_3_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x11D761E0)
#define CLASS_3_80B75F66E82C46FB_METHOD_3_F1153A4377815E0F_OFFSET UNITYSDK_OFFSET(0x11D75C30)
#define CLASS_3_80B75F66E82C46FB__CTOR_OFFSET UNITYSDK_OFFSET(0x11D76580)

inline static constexpr unsigned int Class_3_80B75F66E82C46FB_TypeDefinitionIndex = 65278;

class Class_3_80B75F66E82C46FB : public ::Class_2_828B2711AF58BA0B
{
public:
	::System::Collections::Generic::List_1<::Enum_3_AFC322BB49394EB5>* Field_3_0; // 0x38
	::System::String* Field_3_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_80B75F66E82C46FB__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_3A970D9BCF9BC819(::Class_3_F41D242A20F8FE06* a1, ::Class_2_828B2711AF58BA0B* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_828B2711AF58BA0B*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_80B75F66E82C46FB_METHOD_3_3A970D9BCF9BC819_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_80B75F66E82C46FB_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BCCAB6158AD8296E(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_80B75F66E82C46FB_METHOD_3_BCCAB6158AD8296E_OFFSET))(this, a1);
	}

	::Class_2_828B2711AF58BA0B* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_828B2711AF58BA0B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_80B75F66E82C46FB_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_80B75F66E82C46FB_METHOD_3_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_80B75F66E82C46FB_FROMFLX_OFFSET))(this, a1);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_828B2711AF58BA0B* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_828B2711AF58BA0B*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_80B75F66E82C46FB_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_3_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_80B75F66E82C46FB_METHOD_3_DF413489329CBAF8_OFFSET))(this, a1);
	}

	static ::Class_3_80B75F66E82C46FB* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_80B75F66E82C46FB*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_80B75F66E82C46FB_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	static ::Class_3_80B75F66E82C46FB* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_80B75F66E82C46FB*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_80B75F66E82C46FB_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::System::Boolean Method_3_F1153A4377815E0F(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_80B75F66E82C46FB_METHOD_3_F1153A4377815E0F_OFFSET))(this, a1, a2);
	}
};
