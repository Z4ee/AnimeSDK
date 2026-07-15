#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/RogueAdventureGameplayType.h"

class Class_1_3BF8AFA5ED5F68D3;
class Class_1_4A4C36B7B8A58066;
class Class_3_07C3C4D2990C49EE;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class RogueClientAdventureRoomInfo; }
namespace RPG::GameCore { class RogueDLC1Dot3AdventureRoomProcess; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_BC76245D4831356F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18382E70)
#define CLASS_2_BC76245D4831356F_METHOD_2_0B6494ED6AD358C1_1_OFFSET UNITYSDK_OFFSET(0x18384B70)
#define CLASS_2_BC76245D4831356F_METHOD_2_0B6494ED6AD358C1_OFFSET UNITYSDK_OFFSET(0x18383C50)
#define CLASS_2_BC76245D4831356F_METHOD_2_45078D707DC29044_OFFSET UNITYSDK_OFFSET(0x183851E0)
#define CLASS_2_BC76245D4831356F_METHOD_2_47EA6FBF18D3D786_OFFSET UNITYSDK_OFFSET(0x183845E0)
#define CLASS_2_BC76245D4831356F_METHOD_2_909D3C5E0F691F8B_OFFSET UNITYSDK_OFFSET(0x18384580)
#define CLASS_2_BC76245D4831356F_METHOD_2_96BDC4B57CCFE000_1_OFFSET UNITYSDK_OFFSET(0x183850A0)
#define CLASS_2_BC76245D4831356F_METHOD_2_96BDC4B57CCFE000_2_OFFSET UNITYSDK_OFFSET(0x18385140)
#define CLASS_2_BC76245D4831356F_METHOD_2_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0x18385000)
#define CLASS_2_BC76245D4831356F_METHOD_2_A7E8B52E9ABB8DB9_1_OFFSET UNITYSDK_OFFSET(0x18384EF0)
#define CLASS_2_BC76245D4831356F_METHOD_2_A7E8B52E9ABB8DB9_OFFSET UNITYSDK_OFFSET(0x18384460)
#define CLASS_2_BC76245D4831356F_METHOD_2_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x18383BB0)
#define CLASS_2_BC76245D4831356F_METHOD_2_AB46303CBADE3FEA_OFFSET UNITYSDK_OFFSET(0x18384250)
#define CLASS_2_BC76245D4831356F_METHOD_2_AD936AF1D3631D03_OFFSET UNITYSDK_OFFSET(0x183852E0)
#define CLASS_2_BC76245D4831356F_METHOD_2_D7D8ED549C201F00_OFFSET UNITYSDK_OFFSET(0x18383B60)
#define CLASS_2_BC76245D4831356F_METHOD_2_EAD4CFFF580A0A28_OFFSET UNITYSDK_OFFSET(0x18384820)
#define CLASS_2_BC76245D4831356F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x183835D0)
#define CLASS_2_BC76245D4831356F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18383C00)
#define CLASS_2_BC76245D4831356F_TICK_OFFSET UNITYSDK_OFFSET(0x183834F0)
#define CLASS_2_BC76245D4831356F__CTOR_OFFSET UNITYSDK_OFFSET(0x18382E00)

inline static constexpr unsigned int Class_2_BC76245D4831356F_TypeDefinitionIndex = 55831;

class Class_2_BC76245D4831356F : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	::Class_3_07C3C4D2990C49EE* Field_2_2; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_2_3; // 0x20
	::Class_3_07C3C4D2990C49EE* Field_2_4; // 0x28
	::RPG::Client::LuaUIController* Field_2_5; // 0x30
	::RPG::GameCore::TaskContext* Field_2_6; // 0x38
	::Class_1_3BF8AFA5ED5F68D3* Field_2_7; // 0x40
	::RPG::GameCore::RogueClientAdventureRoomInfo* Field_2_8; // 0x48
	::Class_3_07C3C4D2990C49EE* Field_2_9; // 0x50
	::RPG::GameCore::RogueDLC1Dot3AdventureRoomProcess* Field_2_10; // 0x58
	::RPG::Client::LuaUIController* Field_2_11; // 0x60
	::Class_3_07C3C4D2990C49EE* Field_2_12; // 0x68
	::System::UInt32 Field_2_13; // 0x70

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

	::System::Void Method_2_AB46303CBADE3FEA(::Class_1_4A4C36B7B8A58066* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4A4C36B7B8A58066*))((::PBYTE)hIl2Cpp + CLASS_2_BC76245D4831356F_METHOD_2_AB46303CBADE3FEA_OFFSET))(this, a1);
	}

	::System::Void Method_2_909D3C5E0F691F8B(::Class_1_4A4C36B7B8A58066* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4A4C36B7B8A58066*))((::PBYTE)hIl2Cpp + CLASS_2_BC76245D4831356F_METHOD_2_909D3C5E0F691F8B_OFFSET))(this, a1);
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
