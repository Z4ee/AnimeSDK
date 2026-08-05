#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_175E7DC52483A3CE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_14986121AA61AD99;
class Class_2_1C93660C39236995;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_5745DA614B80D512_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12F287C0)
#define CLASS_2_5745DA614B80D512_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12F28BE0)
#define CLASS_2_5745DA614B80D512_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x12F29210)
#define CLASS_2_5745DA614B80D512_METHOD_2_19FF93AA9C100818_OFFSET UNITYSDK_OFFSET(0x12F28610)
#define CLASS_2_5745DA614B80D512_METHOD_2_1AE68D2660A32860_OFFSET UNITYSDK_OFFSET(0x12F28FD0)
#define CLASS_2_5745DA614B80D512_METHOD_2_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0x12F28A60)
#define CLASS_2_5745DA614B80D512_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x12F28BD0)
#define CLASS_2_5745DA614B80D512_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x12F290B0)
#define CLASS_2_5745DA614B80D512_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x12F28AD0)
#define CLASS_2_5745DA614B80D512_METHOD_2_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x12F28C60)
#define CLASS_2_5745DA614B80D512_METHOD_2_F1153A4377815E0F_OFFSET UNITYSDK_OFFSET(0x12F28820)
#define CLASS_2_5745DA614B80D512__CTOR_OFFSET UNITYSDK_OFFSET(0x12F28600)

inline static constexpr unsigned int Class_2_5745DA614B80D512_TypeDefinitionIndex = 55949;

class Class_2_5745DA614B80D512 : public ::Class_1_175E7DC52483A3CE
{
public:
	::System::String* Field_2_0; // 0x18
	::System::String* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5745DA614B80D512__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_19FF93AA9C100818(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::String*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_5745DA614B80D512_METHOD_2_19FF93AA9C100818_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5745DA614B80D512_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_5745DA614B80D512_METHOD_2_5C90773220FA8136_OFFSET))(this, a1);
	}

	::Class_1_175E7DC52483A3CE* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_175E7DC52483A3CE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5745DA614B80D512_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5745DA614B80D512_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_5745DA614B80D512_FROMFLX_OFFSET))(this, a1);
	}

	::System::String* Method_2_1AE68D2660A32860(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::String*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_5745DA614B80D512_METHOD_2_1AE68D2660A32860_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_5745DA614B80D512_METHOD_2_DF413489329CBAF8_OFFSET))(this, a1);
	}

	static ::Class_2_5745DA614B80D512* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_5745DA614B80D512*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_5745DA614B80D512_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	static ::Class_2_5745DA614B80D512* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_5745DA614B80D512*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5745DA614B80D512_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_F1153A4377815E0F(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5745DA614B80D512_METHOD_2_F1153A4377815E0F_OFFSET))(this, a1, a2);
	}
};
