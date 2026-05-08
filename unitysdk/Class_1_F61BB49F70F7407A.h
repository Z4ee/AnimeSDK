#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0E82907678BD44BD.h"
#include "unitysdk/Enum_3_148E61C9AD900EC4.h"
#include "unitysdk/Enum_3_70DCAC76E792CECD.h"
#include "unitysdk/Struct_2_BBA9BFFCB5AD7C3C.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_F61BB49F70F7407A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x114CAAB0)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_0901A93980379391_OFFSET UNITYSDK_OFFSET(0x114CB9F0)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_0A9A1A141C060A6E_1_OFFSET UNITYSDK_OFFSET(0x114CC5C0)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_0A9A1A141C060A6E_OFFSET UNITYSDK_OFFSET(0x114CC2B0)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x114CB8C0)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_28450AE51BF06982_OFFSET UNITYSDK_OFFSET(0x114CB1A0)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_295387C658F01BF9_OFFSET UNITYSDK_OFFSET(0x114CC0B0)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0x114CBD60)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_42B0AF1C8D7D5E91_OFFSET UNITYSDK_OFFSET(0x114CB540)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x114CAFF0)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_5323F2DF46A044DA_2_OFFSET UNITYSDK_OFFSET(0x114CB000)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_5323F2DF46A044DA_3_OFFSET UNITYSDK_OFFSET(0x114CB010)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x114CB020)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_6CFFA5CFCD27D454_OFFSET UNITYSDK_OFFSET(0x114CBAE0)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_93ADD9DB2F376466_OFFSET UNITYSDK_OFFSET(0x114CBD90)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_A57FA722AB2A8938_OFFSET UNITYSDK_OFFSET(0x114CB030)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_A96DCA30C6927810_1_OFFSET UNITYSDK_OFFSET(0x114CC670)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x114CC170)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_AA6AC38756233BD0_OFFSET UNITYSDK_OFFSET(0x114CB2D0)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0x114CB3F0)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_B9D8FD15D18938A0_OFFSET UNITYSDK_OFFSET(0x114CBD80)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_CA6BDDCC5F7CE11E_1_OFFSET UNITYSDK_OFFSET(0x114CC360)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_CA6BDDCC5F7CE11E_2_OFFSET UNITYSDK_OFFSET(0x114CC3F0)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_CA6BDDCC5F7CE11E_3_OFFSET UNITYSDK_OFFSET(0x114CC530)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x114CBA50)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_CAC4DAC8396B26EE_OFFSET UNITYSDK_OFFSET(0x114CBF40)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_CE6683700339DC24_OFFSET UNITYSDK_OFFSET(0x114CC480)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_CF0D00D54D6475F8_1_OFFSET UNITYSDK_OFFSET(0x114CC180)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_CF0D00D54D6475F8_OFFSET UNITYSDK_OFFSET(0x114CBC30)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_E6619E1B9612CB0B_OFFSET UNITYSDK_OFFSET(0x114CB320)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_E8F70BB16F7A6774_OFFSET UNITYSDK_OFFSET(0x114CB900)
#define CLASS_1_F61BB49F70F7407A_TOSTRING_OFFSET UNITYSDK_OFFSET(0x114CAB90)
#define CLASS_1_F61BB49F70F7407A__CTOR_OFFSET UNITYSDK_OFFSET(0x114CAAA0)

inline static constexpr unsigned int Class_1_F61BB49F70F7407A_TypeDefinitionIndex = 58591;

class Class_1_F61BB49F70F7407A : public ::System::Object
{
public:
	// static const ::System::String* Field_1_10; // 0x0
	::System::Action_3<::Class_1_F61BB49F70F7407A*, ::System::Single, ::System::Single>* Field_1_3; // 0x10
	::System::Action_2<::Class_1_F61BB49F70F7407A*, ::System::Single>* Field_1_5; // 0x18
	::System::String* Field_1_0; // 0x20
	::System::Func_3<::Class_1_F61BB49F70F7407A*, ::System::Single, ::System::Single>* Field_1_6; // 0x28
	::System::String* Field_1_2; // 0x30
	::System::Action_3<::Class_1_F61BB49F70F7407A*, ::System::Single, ::System::Single>* Field_1_4; // 0x38
	::System::String* Field_1_1; // 0x40
	::MoleMole::Battle::Entity* Field_1_9; // 0x48
	::System::Collections::Generic::IEnumerable_1<::System::Func_3<::Class_1_F61BB49F70F7407A*, ::System::Single, ::System::Single>*>* Field_1_7; // 0x50
	::Struct_2_BBA9BFFCB5AD7C3C Field_1_8; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_DISPOSE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_1_A57FA722AB2A8938(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_A57FA722AB2A8938_OFFSET))(this, a1);
	}

	::System::Void Method_1_28450AE51BF06982(::System::Action_2<::Class_1_F61BB49F70F7407A*, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::Class_1_F61BB49F70F7407A*, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_28450AE51BF06982_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_AA6AC38756233BD0(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_AA6AC38756233BD0_OFFSET))(this, a1);
	}

	::System::Void Method_1_E6619E1B9612CB0B(::System::Func_3<::Class_1_F61BB49F70F7407A*, ::System::Single, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_3<::Class_1_F61BB49F70F7407A*, ::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_E6619E1B9612CB0B_OFFSET))(this, a1);
	}

	::System::Void Method_1_AD23FDCC7576BB32(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_AD23FDCC7576BB32_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_1_E8F70BB16F7A6774(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_E8F70BB16F7A6774_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0901A93980379391(::Enum_3_0E82907678BD44BD a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_0E82907678BD44BD))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_0901A93980379391_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_1_6CFFA5CFCD27D454(::System::Func_3<::Class_1_F61BB49F70F7407A*, ::System::Single, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_3<::Class_1_F61BB49F70F7407A*, ::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_6CFFA5CFCD27D454_OFFSET))(this, a1);
	}

	::System::Void Method_1_CF0D00D54D6475F8(::System::Action_3<::Class_1_F61BB49F70F7407A*, ::System::Single, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_3<::Class_1_F61BB49F70F7407A*, ::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_CF0D00D54D6475F8_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_5323F2DF46A044DA_2_OFFSET))(this);
	}

	::Struct_2_BBA9BFFCB5AD7C3C Method_1_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_BBA9BFFCB5AD7C3C(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_3D78D2E0F9F95F07_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_1_B9D8FD15D18938A0()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_B9D8FD15D18938A0_OFFSET))(this);
	}

	static ::Class_1_F61BB49F70F7407A* Method_1_93ADD9DB2F376466(::System::String* a1, ::System::String* a2, ::System::Single a3, ::Enum_3_148E61C9AD900EC4 a4, ::Enum_3_70DCAC76E792CECD a5, ::System::Single a6, ::System::Single a7)
	{
		return ((::Class_1_F61BB49F70F7407A*(*)(::System::String*, ::System::String*, ::System::Single, ::Enum_3_148E61C9AD900EC4, ::Enum_3_70DCAC76E792CECD, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_93ADD9DB2F376466_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	::Enum_3_148E61C9AD900EC4 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_148E61C9AD900EC4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA_3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_5323F2DF46A044DA_3_OFFSET))(this);
	}

	::System::Single Method_1_42B0AF1C8D7D5E91(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_42B0AF1C8D7D5E91_OFFSET))(this, a1);
	}

	::System::Void Method_1_CF0D00D54D6475F8_1(::System::Action_3<::Class_1_F61BB49F70F7407A*, ::System::Single, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_3<::Class_1_F61BB49F70F7407A*, ::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_CF0D00D54D6475F8_1_OFFSET))(this, a1);
	}

	::Class_1_F61BB49F70F7407A* Method_1_295387C658F01BF9(::System::Single a1, ::Enum_3_148E61C9AD900EC4 a2, ::Enum_3_70DCAC76E792CECD a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::Class_1_F61BB49F70F7407A*(*)(::PVOID, ::System::Single, ::Enum_3_148E61C9AD900EC4, ::Enum_3_70DCAC76E792CECD, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_295387C658F01BF9_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_0A9A1A141C060A6E(::System::Action_3<::Class_1_F61BB49F70F7407A*, ::System::Single, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_3<::Class_1_F61BB49F70F7407A*, ::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_0A9A1A141C060A6E_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_CA6BDDCC5F7CE11E_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E_2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_CA6BDDCC5F7CE11E_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_CE6683700339DC24(::System::Action_2<::Class_1_F61BB49F70F7407A*, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::Class_1_F61BB49F70F7407A*, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_CE6683700339DC24_OFFSET))(this, a1);
	}

	::Class_1_F61BB49F70F7407A* Method_1_CAC4DAC8396B26EE(::System::String* a1, ::System::String* a2)
	{
		return ((::Class_1_F61BB49F70F7407A*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_CAC4DAC8396B26EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E_3(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_CA6BDDCC5F7CE11E_3_OFFSET))(this, a1);
	}

	::System::Void Method_1_0A9A1A141C060A6E_1(::System::Action_3<::Class_1_F61BB49F70F7407A*, ::System::Single, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_3<::Class_1_F61BB49F70F7407A*, ::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_0A9A1A141C060A6E_1_OFFSET))(this, a1);
	}

	::Enum_3_70DCAC76E792CECD Method_1_A96DCA30C6927810_1()
	{
		return ((::Enum_3_70DCAC76E792CECD(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_A96DCA30C6927810_1_OFFSET))(this);
	}
};
