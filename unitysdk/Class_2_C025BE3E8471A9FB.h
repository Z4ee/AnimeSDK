#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/RogueAdventureGameplayType.h"

class Class_1_9F9E3B454E079F91;
class Class_1_A6806B887413448C;
class Class_3_5775A4FEC79026BC;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class RogueClientAdventureRoomInfo; }
namespace RPG::GameCore { class RogueDLC1Dot3AdventureRoomProcess; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_C025BE3E8471A9FB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x114E8050)
#define CLASS_2_C025BE3E8471A9FB_METHOD_2_2E31DBB3E5865BCC_OFFSET UNITYSDK_OFFSET(0x114E9C30)
#define CLASS_2_C025BE3E8471A9FB_METHOD_2_3CE5A19433AD8C9D_OFFSET UNITYSDK_OFFSET(0x114E8AF0)
#define CLASS_2_C025BE3E8471A9FB_METHOD_2_45078D707DC29044_OFFSET UNITYSDK_OFFSET(0x114E9F20)
#define CLASS_2_C025BE3E8471A9FB_METHOD_2_54C0BCFF1DF51A31_OFFSET UNITYSDK_OFFSET(0x114E93B0)
#define CLASS_2_C025BE3E8471A9FB_METHOD_2_585E2EA201FDE7ED_OFFSET UNITYSDK_OFFSET(0x114E95A0)
#define CLASS_2_C025BE3E8471A9FB_METHOD_2_6AB0047A1E525732_OFFSET UNITYSDK_OFFSET(0x114E9350)
#define CLASS_2_C025BE3E8471A9FB_METHOD_2_6D8B8CD47CD59618_OFFSET UNITYSDK_OFFSET(0x114E9FC0)
#define CLASS_2_C025BE3E8471A9FB_METHOD_2_96BDC4B57CCFE000_1_OFFSET UNITYSDK_OFFSET(0x114E9DE0)
#define CLASS_2_C025BE3E8471A9FB_METHOD_2_96BDC4B57CCFE000_2_OFFSET UNITYSDK_OFFSET(0x114E9E80)
#define CLASS_2_C025BE3E8471A9FB_METHOD_2_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0x114E9D40)
#define CLASS_2_C025BE3E8471A9FB_METHOD_2_A7E8B52E9ABB8DB9_OFFSET UNITYSDK_OFFSET(0x114E9230)
#define CLASS_2_C025BE3E8471A9FB_METHOD_2_A8458C1526636349_OFFSET UNITYSDK_OFFSET(0x114E9010)
#define CLASS_2_C025BE3E8471A9FB_METHOD_2_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x114E8A50)
#define CLASS_2_C025BE3E8471A9FB_METHOD_2_C553A9ED9087026F_OFFSET UNITYSDK_OFFSET(0x114E9960)
#define CLASS_2_C025BE3E8471A9FB_METHOD_2_D7D8ED549C201F00_OFFSET UNITYSDK_OFFSET(0x114E8A00)
#define CLASS_2_C025BE3E8471A9FB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x114E84F0)
#define CLASS_2_C025BE3E8471A9FB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x114E8AA0)
#define CLASS_2_C025BE3E8471A9FB_TICK_OFFSET UNITYSDK_OFFSET(0x114E8410)
#define CLASS_2_C025BE3E8471A9FB__CTOR_OFFSET UNITYSDK_OFFSET(0x114E7FE0)

inline static constexpr unsigned int Class_2_C025BE3E8471A9FB_TypeDefinitionIndex = 47149;

class Class_2_C025BE3E8471A9FB : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_12; // 0x0
	// static const ::System::String* Field_2_13; // 0x0
	::Class_3_5775A4FEC79026BC* Field_2_9; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::RogueDLC1Dot3AdventureRoomProcess* Field_2_0; // 0x28
	::Class_1_9F9E3B454E079F91* Field_2_2; // 0x30
	::Class_3_5775A4FEC79026BC* Field_2_6; // 0x38
	::Class_3_5775A4FEC79026BC* Field_2_7; // 0x40
	::Class_3_5775A4FEC79026BC* Field_2_8; // 0x48
	::RPG::Client::LuaUIController* Field_2_3; // 0x50
	::Class_3_5775A4FEC79026BC* Field_2_5; // 0x58
	::RPG::Client::LuaUIController* Field_2_4; // 0x60
	::RPG::GameCore::RogueClientAdventureRoomInfo* Field_2_10; // 0x68
	::System::UInt32 Field_2_11; // 0x70

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueDLC1Dot3AdventureRoomProcess* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueDLC1Dot3AdventureRoomProcess*))((::PBYTE)hIl2Cpp + CLASS_2_C025BE3E8471A9FB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C025BE3E8471A9FB_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C025BE3E8471A9FB_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C025BE3E8471A9FB_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C025BE3E8471A9FB_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_3CE5A19433AD8C9D(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C025BE3E8471A9FB_METHOD_2_3CE5A19433AD8C9D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A7E8B52E9ABB8DB9(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C025BE3E8471A9FB_METHOD_2_A7E8B52E9ABB8DB9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_54C0BCFF1DF51A31(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C025BE3E8471A9FB_METHOD_2_54C0BCFF1DF51A31_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C553A9ED9087026F(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C025BE3E8471A9FB_METHOD_2_C553A9ED9087026F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2E31DBB3E5865BCC(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C025BE3E8471A9FB_METHOD_2_2E31DBB3E5865BCC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C025BE3E8471A9FB_METHOD_2_96BDC4B57CCFE000_OFFSET))(this, a1);
	}

	::System::Void Method_2_96BDC4B57CCFE000_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C025BE3E8471A9FB_METHOD_2_96BDC4B57CCFE000_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_96BDC4B57CCFE000_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C025BE3E8471A9FB_METHOD_2_96BDC4B57CCFE000_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_45078D707DC29044(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C025BE3E8471A9FB_METHOD_2_45078D707DC29044_OFFSET))(this, a1);
	}

	::System::Void Method_2_A8458C1526636349(::Class_1_A6806B887413448C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A6806B887413448C*))((::PBYTE)hIl2Cpp + CLASS_2_C025BE3E8471A9FB_METHOD_2_A8458C1526636349_OFFSET))(this, a1);
	}

	::System::Void Method_2_6AB0047A1E525732(::Class_1_A6806B887413448C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A6806B887413448C*))((::PBYTE)hIl2Cpp + CLASS_2_C025BE3E8471A9FB_METHOD_2_6AB0047A1E525732_OFFSET))(this, a1);
	}

	::RPG::GameCore::RogueAdventureGameplayType Method_2_D7D8ED549C201F00()
	{
		return ((::RPG::GameCore::RogueAdventureGameplayType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C025BE3E8471A9FB_METHOD_2_D7D8ED549C201F00_OFFSET))(this);
	}

	::System::UInt32 Method_2_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C025BE3E8471A9FB_METHOD_2_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::Void Method_2_6D8B8CD47CD59618()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C025BE3E8471A9FB_METHOD_2_6D8B8CD47CD59618_OFFSET))(this);
	}

	::System::Void Method_2_585E2EA201FDE7ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C025BE3E8471A9FB_METHOD_2_585E2EA201FDE7ED_OFFSET))(this);
	}
};
