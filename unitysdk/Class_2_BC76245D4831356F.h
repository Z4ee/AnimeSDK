#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/RogueAdventureGameplayType.h"

class Class_1_3BF8AFA5ED5F68D3;
class Class_1_5C27C3B326550A89;
class Class_3_07C3C4D2990C49EE;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class RogueClientAdventureRoomInfo; }
namespace RPG::GameCore { class RogueDLC1Dot3AdventureRoomProcess; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_BC76245D4831356F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1986CE80)
#define CLASS_2_BC76245D4831356F_METHOD_2_0B6494ED6AD358C1_1_OFFSET UNITYSDK_OFFSET(0x1986EB60)
#define CLASS_2_BC76245D4831356F_METHOD_2_0B6494ED6AD358C1_OFFSET UNITYSDK_OFFSET(0x1986DC30)
#define CLASS_2_BC76245D4831356F_METHOD_2_45078D707DC29044_OFFSET UNITYSDK_OFFSET(0x1986F1D0)
#define CLASS_2_BC76245D4831356F_METHOD_2_47EA6FBF18D3D786_OFFSET UNITYSDK_OFFSET(0x1986E5D0)
#define CLASS_2_BC76245D4831356F_METHOD_2_6AB0047A1E525732_OFFSET UNITYSDK_OFFSET(0x1986E570)
#define CLASS_2_BC76245D4831356F_METHOD_2_96BDC4B57CCFE000_1_OFFSET UNITYSDK_OFFSET(0x1986F090)
#define CLASS_2_BC76245D4831356F_METHOD_2_96BDC4B57CCFE000_2_OFFSET UNITYSDK_OFFSET(0x1986F130)
#define CLASS_2_BC76245D4831356F_METHOD_2_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0x1986EFF0)
#define CLASS_2_BC76245D4831356F_METHOD_2_A7E8B52E9ABB8DB9_1_OFFSET UNITYSDK_OFFSET(0x1986EEE0)
#define CLASS_2_BC76245D4831356F_METHOD_2_A7E8B52E9ABB8DB9_OFFSET UNITYSDK_OFFSET(0x1986E450)
#define CLASS_2_BC76245D4831356F_METHOD_2_A8458C1526636349_OFFSET UNITYSDK_OFFSET(0x1986E230)
#define CLASS_2_BC76245D4831356F_METHOD_2_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x1986DB90)
#define CLASS_2_BC76245D4831356F_METHOD_2_AD936AF1D3631D03_OFFSET UNITYSDK_OFFSET(0x1986F2D0)
#define CLASS_2_BC76245D4831356F_METHOD_2_D7D8ED549C201F00_OFFSET UNITYSDK_OFFSET(0x1986DB40)
#define CLASS_2_BC76245D4831356F_METHOD_2_EAD4CFFF580A0A28_OFFSET UNITYSDK_OFFSET(0x1986E810)
#define CLASS_2_BC76245D4831356F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1986D5E0)
#define CLASS_2_BC76245D4831356F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1986DBE0)
#define CLASS_2_BC76245D4831356F_TICK_OFFSET UNITYSDK_OFFSET(0x1986D500)
#define CLASS_2_BC76245D4831356F__CTOR_OFFSET UNITYSDK_OFFSET(0x1986CE10)

inline static constexpr unsigned int Class_2_BC76245D4831356F_TypeDefinitionIndex = 58597;

class Class_2_BC76245D4831356F : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* LNAGMFONNGM; // 0x0
	// static const ::System::String* HOCMHAODJPL; // 0x0
	::Class_3_07C3C4D2990C49EE* HEHGPEINOGH; // 0x18
	::RPG::Client::LuaUIController* JPCEGJODAOD; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
	::Class_3_07C3C4D2990C49EE* EKNNPMFBLHP; // 0x30
	::RPG::GameCore::RogueDLC1Dot3AdventureRoomProcess* OFKGLJOAMLD; // 0x38
	::Class_3_07C3C4D2990C49EE* KBCBEAEFPJC; // 0x40
	::Class_1_3BF8AFA5ED5F68D3* IFMKGJHDOPO; // 0x48
	::Class_3_07C3C4D2990C49EE* FAFDGOOAHFN; // 0x50
	::RPG::GameCore::RogueClientAdventureRoomInfo* KCNLKOBICCG; // 0x58
	::Class_3_07C3C4D2990C49EE* NMKEFMPMEBD; // 0x60
	::RPG::Client::LuaUIController* HPGJANBDIMK; // 0x68
	::System::UInt32 DKFNFOAOEIH; // 0x70

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueDLC1Dot3AdventureRoomProcess* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueDLC1Dot3AdventureRoomProcess*))((::PBYTE)hIl2Cpp + CLASS_2_BC76245D4831356F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC76245D4831356F_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BC76245D4831356F_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC76245D4831356F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC76245D4831356F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_0B6494ED6AD358C1(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BC76245D4831356F_METHOD_2_0B6494ED6AD358C1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A7E8B52E9ABB8DB9(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BC76245D4831356F_METHOD_2_A7E8B52E9ABB8DB9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_47EA6FBF18D3D786(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BC76245D4831356F_METHOD_2_47EA6FBF18D3D786_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0B6494ED6AD358C1_1(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BC76245D4831356F_METHOD_2_0B6494ED6AD358C1_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A7E8B52E9ABB8DB9_1(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BC76245D4831356F_METHOD_2_A7E8B52E9ABB8DB9_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BC76245D4831356F_METHOD_2_96BDC4B57CCFE000_OFFSET))(this, a1);
	}

	::System::Void Method_2_96BDC4B57CCFE000_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BC76245D4831356F_METHOD_2_96BDC4B57CCFE000_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_96BDC4B57CCFE000_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BC76245D4831356F_METHOD_2_96BDC4B57CCFE000_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_45078D707DC29044(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BC76245D4831356F_METHOD_2_45078D707DC29044_OFFSET))(this, a1);
	}

	::System::Void Method_2_A8458C1526636349(::Class_1_5C27C3B326550A89* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5C27C3B326550A89*))((::PBYTE)hIl2Cpp + CLASS_2_BC76245D4831356F_METHOD_2_A8458C1526636349_OFFSET))(this, a1);
	}

	::System::Void Method_2_6AB0047A1E525732(::Class_1_5C27C3B326550A89* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5C27C3B326550A89*))((::PBYTE)hIl2Cpp + CLASS_2_BC76245D4831356F_METHOD_2_6AB0047A1E525732_OFFSET))(this, a1);
	}

	::RPG::GameCore::RogueAdventureGameplayType Method_2_D7D8ED549C201F00()
	{
		return ((::RPG::GameCore::RogueAdventureGameplayType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC76245D4831356F_METHOD_2_D7D8ED549C201F00_OFFSET))(this);
	}

	::System::UInt32 Method_2_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC76245D4831356F_METHOD_2_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::Void Method_2_AD936AF1D3631D03()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC76245D4831356F_METHOD_2_AD936AF1D3631D03_OFFSET))(this);
	}

	::System::Void Method_2_EAD4CFFF580A0A28()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC76245D4831356F_METHOD_2_EAD4CFFF580A0A28_OFFSET))(this);
	}
};
