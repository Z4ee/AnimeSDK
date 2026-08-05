#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2A56CCCB20A346FA.h"
#include "unitysdk/Enum_3_7CD0E33FF51FD25C_1.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Struct_2_A057CF850C769F85.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
class Class_1_3662FC1DFD6A3E67;
class Class_1_B7E341C5F1A6F199;
class Class_2_14986121AA61AD99;
class Class_2_1C93660C39236995;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class EffectAutoDynamicValue; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_B8624DA6B37F6547_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x180FC0D0)
#define CLASS_3_B8624DA6B37F6547_FROMFLX_OFFSET UNITYSDK_OFFSET(0x180FC9D0)
#define CLASS_3_B8624DA6B37F6547_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x180FDE80)
#define CLASS_3_B8624DA6B37F6547_METHOD_3_38B782D577BF317C_OFFSET UNITYSDK_OFFSET(0x180FC7B0)
#define CLASS_3_B8624DA6B37F6547_METHOD_3_4075E33E5DF56BDB_OFFSET UNITYSDK_OFFSET(0x180FDD90)
#define CLASS_3_B8624DA6B37F6547_METHOD_3_82A3EC7819F9DAA7_OFFSET UNITYSDK_OFFSET(0x180FCA50)
#define CLASS_3_B8624DA6B37F6547_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x180FE030)
#define CLASS_3_B8624DA6B37F6547_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x180FC8C0)
#define CLASS_3_B8624DA6B37F6547_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0x180FDDA0)
#define CLASS_3_B8624DA6B37F6547_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x180FC9C0)
#define CLASS_3_B8624DA6B37F6547_METHOD_3_CFABC57D0E5BECCA_OFFSET UNITYSDK_OFFSET(0x180FBF20)
#define CLASS_3_B8624DA6B37F6547_METHOD_3_D43D553A8EE4CBFF_OFFSET UNITYSDK_OFFSET(0x180FBE30)
#define CLASS_3_B8624DA6B37F6547_METHOD_3_DCC1A04AAD39A4D8_OFFSET UNITYSDK_OFFSET(0x180FC130)
#define CLASS_3_B8624DA6B37F6547_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x180FC0C0)
#define CLASS_3_B8624DA6B37F6547__CTOR_OFFSET UNITYSDK_OFFSET(0x180FDD70)

inline static constexpr unsigned int Class_3_B8624DA6B37F6547_TypeDefinitionIndex = 77898;

class Class_3_B8624DA6B37F6547 : public ::Class_2_2A56CCCB20A346FA
{
public:
	::System::String* Field_3_1; // 0x38
	::System::String* Field_3_7; // 0x40
	::MoleMole::Config::EffectAutoDynamicValue* Field_3_4; // 0x48
	::Class_1_3662FC1DFD6A3E67* Field_3_15; // 0x50
	::MoleMole::Config::ConfigPosRot* Field_3_6; // 0x58
	::System::String* Field_3_0; // 0x60
	::Enum_3_7CD0E33FF51FD25C_1 Field_3_10; // 0x68
	::System::Boolean Field_3_11; // 0x6C
	::System::Boolean Field_3_9; // 0x6D
	::System::Boolean Field_3_8; // 0x6E
	::UnityEngine::Vector3 Field_3_5; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B8624DA6B37F6547__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_D43D553A8EE4CBFF(::Class_3_F41D242A20F8FE06* a1, ::Class_2_2A56CCCB20A346FA* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_1C93660C39236995* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_2A56CCCB20A346FA*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_B8624DA6B37F6547_METHOD_3_D43D553A8EE4CBFF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_3_CFABC57D0E5BECCA(::Class_3_F41D242A20F8FE06* a1, ::Class_2_2A56CCCB20A346FA* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_1C93660C39236995* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7, ::Struct_2_A057CF850C769F85& a8)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_2A56CCCB20A346FA*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*, ::Struct_2_A057CF850C769F85&))((::PBYTE)hIl2Cpp + CLASS_3_B8624DA6B37F6547_METHOD_3_CFABC57D0E5BECCA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B8624DA6B37F6547_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_B8624DA6B37F6547_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_38B782D577BF317C(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_B8624DA6B37F6547_METHOD_3_38B782D577BF317C_OFFSET))(this, a1);
	}

	::Class_2_2A56CCCB20A346FA* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_2A56CCCB20A346FA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B8624DA6B37F6547_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B8624DA6B37F6547_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_B8624DA6B37F6547_FROMFLX_OFFSET))(this, a1);
	}

	::System::Void Method_3_4075E33E5DF56BDB(::Class_3_F41D242A20F8FE06* a1, ::Class_2_2A56CCCB20A346FA* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_1C93660C39236995* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7, ::Struct_2_A057CF850C769F85& a8)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_2A56CCCB20A346FA*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*, ::Struct_2_A057CF850C769F85&))((::PBYTE)hIl2Cpp + CLASS_3_B8624DA6B37F6547_METHOD_3_4075E33E5DF56BDB_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_2A56CCCB20A346FA* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_1C93660C39236995* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_2A56CCCB20A346FA*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_B8624DA6B37F6547_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_3_DCC1A04AAD39A4D8(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_B8624DA6B37F6547_METHOD_3_DCC1A04AAD39A4D8_OFFSET))(this, a1, a2);
	}

	static ::Class_3_B8624DA6B37F6547* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_B8624DA6B37F6547*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_B8624DA6B37F6547_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_82A3EC7819F9DAA7(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_B8624DA6B37F6547_METHOD_3_82A3EC7819F9DAA7_OFFSET))(this, a1);
	}

	static ::Class_3_B8624DA6B37F6547* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_B8624DA6B37F6547*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_B8624DA6B37F6547_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}
};
