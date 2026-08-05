#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EF896E1D0FDF202A.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_14986121AA61AD99;
class Class_2_1C93660C39236995;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicInt; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_AFE0988ACF7F0779_4_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1617CDD0)
#define CLASS_2_AFE0988ACF7F0779_4_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1617D2C0)
#define CLASS_2_AFE0988ACF7F0779_4_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x1617DA80)
#define CLASS_2_AFE0988ACF7F0779_4_METHOD_2_6A8EE27FF3BABDB3_OFFSET UNITYSDK_OFFSET(0x1617D9B0)
#define CLASS_2_AFE0988ACF7F0779_4_METHOD_2_A4F18DC7833F5448_OFFSET UNITYSDK_OFFSET(0x1617CE30)
#define CLASS_2_AFE0988ACF7F0779_4_METHOD_2_BCCAB6158AD8296E_OFFSET UNITYSDK_OFFSET(0x1617D0F0)
#define CLASS_2_AFE0988ACF7F0779_4_METHOD_2_C601266B3179AE58_OFFSET UNITYSDK_OFFSET(0x1617CCA0)
#define CLASS_2_AFE0988ACF7F0779_4_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1617D2B0)
#define CLASS_2_AFE0988ACF7F0779_4_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x1617D850)
#define CLASS_2_AFE0988ACF7F0779_4_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x1617D1B0)
#define CLASS_2_AFE0988ACF7F0779_4_METHOD_2_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x1617D340)
#define CLASS_2_AFE0988ACF7F0779_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1617D840)

inline static constexpr unsigned int Class_2_AFE0988ACF7F0779_4_TypeDefinitionIndex = 48213;

class Class_2_AFE0988ACF7F0779_4 : public ::Class_1_EF896E1D0FDF202A
{
public:
	::MoleMole::Config::DynamicInt* Field_2_2; // 0x38
	::MoleMole::Config::DynamicInt* Field_2_0; // 0x40
	::MoleMole::Config::DynamicInt* Field_2_1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFE0988ACF7F0779_4__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_C601266B3179AE58(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_AFE0988ACF7F0779_4_METHOD_2_C601266B3179AE58_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AFE0988ACF7F0779_4_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BCCAB6158AD8296E(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_AFE0988ACF7F0779_4_METHOD_2_BCCAB6158AD8296E_OFFSET))(this, a1);
	}

	::Class_1_EF896E1D0FDF202A* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_EF896E1D0FDF202A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFE0988ACF7F0779_4_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFE0988ACF7F0779_4_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_AFE0988ACF7F0779_4_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A4F18DC7833F5448(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AFE0988ACF7F0779_4_METHOD_2_A4F18DC7833F5448_OFFSET))(this, a1, a2);
	}

	static ::Class_2_AFE0988ACF7F0779_4* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_AFE0988ACF7F0779_4*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_AFE0988ACF7F0779_4_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Boolean Method_2_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_AFE0988ACF7F0779_4_METHOD_2_DF413489329CBAF8_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6A8EE27FF3BABDB3(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_AFE0988ACF7F0779_4_METHOD_2_6A8EE27FF3BABDB3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	static ::Class_2_AFE0988ACF7F0779_4* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_AFE0988ACF7F0779_4*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AFE0988ACF7F0779_4_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}
};
