#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2A56CCCB20A346FA.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
class Class_1_4ED21A115C97704D;
class Class_1_B7E341C5F1A6F199;
class Class_2_14986121AA61AD99;
class Class_2_1C93660C39236995;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_B95A0C0443AABEC7_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17EABC70)
#define CLASS_3_B95A0C0443AABEC7_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17EAC4C0)
#define CLASS_3_B95A0C0443AABEC7_METHOD_3_0578713EDB32B89E_OFFSET UNITYSDK_OFFSET(0x17EAC540)
#define CLASS_3_B95A0C0443AABEC7_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x17EAD860)
#define CLASS_3_B95A0C0443AABEC7_METHOD_3_78C423A2F85760E8_OFFSET UNITYSDK_OFFSET(0x17EAC250)
#define CLASS_3_B95A0C0443AABEC7_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x17EADA10)
#define CLASS_3_B95A0C0443AABEC7_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x17EAC3B0)
#define CLASS_3_B95A0C0443AABEC7_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0x17EAD780)
#define CLASS_3_B95A0C0443AABEC7_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x17EAC4B0)
#define CLASS_3_B95A0C0443AABEC7_METHOD_3_D43D553A8EE4CBFF_OFFSET UNITYSDK_OFFSET(0x17EABB70)
#define CLASS_3_B95A0C0443AABEC7_METHOD_3_E6B050277EBC22A8_OFFSET UNITYSDK_OFFSET(0x17EABCD0)
#define CLASS_3_B95A0C0443AABEC7__CTOR_OFFSET UNITYSDK_OFFSET(0x17EAD770)

inline static constexpr unsigned int Class_3_B95A0C0443AABEC7_TypeDefinitionIndex = 51753;

class Class_3_B95A0C0443AABEC7 : public ::Class_2_2A56CCCB20A346FA
{
public:
	::Class_1_4ED21A115C97704D* Field_3_0; // 0x38
	::MoleMole::Config::DynamicFloat* Field_3_5; // 0x40
	::MoleMole::Config::DynamicString* Field_3_3; // 0x48
	::Class_1_4ED21A115C97704D* Field_3_9; // 0x50
	::MoleMole::Config::DynamicString* Field_3_2; // 0x58
	::MoleMole::Config::DynamicString* Field_3_1; // 0x60
	::Class_1_4ED21A115C97704D* Field_3_10; // 0x68
	::MoleMole::Config::DynamicFloat* Field_3_11; // 0x70
	::Class_1_4ED21A115C97704D* Field_3_6; // 0x78
	::Class_1_4ED21A115C97704D* Field_3_4; // 0x80
	::UnityEngine::Vector3 Field_3_7; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B95A0C0443AABEC7__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_D43D553A8EE4CBFF(::Class_3_F41D242A20F8FE06* a1, ::Class_2_2A56CCCB20A346FA* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_1C93660C39236995* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_2A56CCCB20A346FA*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_B95A0C0443AABEC7_METHOD_3_D43D553A8EE4CBFF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_B95A0C0443AABEC7_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_78C423A2F85760E8(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_B95A0C0443AABEC7_METHOD_3_78C423A2F85760E8_OFFSET))(this, a1);
	}

	::Class_2_2A56CCCB20A346FA* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_2A56CCCB20A346FA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B95A0C0443AABEC7_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B95A0C0443AABEC7_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_B95A0C0443AABEC7_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_0578713EDB32B89E(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_B95A0C0443AABEC7_METHOD_3_0578713EDB32B89E_OFFSET))(this, a1);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_2A56CCCB20A346FA* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_1C93660C39236995* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_2A56CCCB20A346FA*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_B95A0C0443AABEC7_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_3_E6B050277EBC22A8(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_B95A0C0443AABEC7_METHOD_3_E6B050277EBC22A8_OFFSET))(this, a1, a2);
	}

	static ::Class_3_B95A0C0443AABEC7* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_B95A0C0443AABEC7*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_B95A0C0443AABEC7_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	static ::Class_3_B95A0C0443AABEC7* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_B95A0C0443AABEC7*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_B95A0C0443AABEC7_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}
};
