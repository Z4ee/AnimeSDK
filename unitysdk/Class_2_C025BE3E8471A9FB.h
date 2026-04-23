#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/RogueAdventureGameplayType.h"

class Class_1_1E3361428001BACB;
class Class_1_9F9E3B454E079F91;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class RogueClientAdventureRoomInfo; }
namespace RPG::GameCore { class RogueDLC1Dot3AdventureRoomProcess; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_C025BE3E8471A9FB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBAD8520)
#define CLASS_2_C025BE3E8471A9FB_METHOD_2_2E31DBB3E5865BCC_OFFSET UNITYSDK_OFFSET(0xBADA100)
#define CLASS_2_C025BE3E8471A9FB_METHOD_2_3CE5A19433AD8C9D_OFFSET UNITYSDK_OFFSET(0xBAD8FC0)
#define CLASS_2_C025BE3E8471A9FB_METHOD_2_45078D707DC29044_OFFSET UNITYSDK_OFFSET(0xBADA3F0)
#define CLASS_2_C025BE3E8471A9FB_METHOD_2_54C0BCFF1DF51A31_OFFSET UNITYSDK_OFFSET(0xBAD9880)
#define CLASS_2_C025BE3E8471A9FB_METHOD_2_585E2EA201FDE7ED_OFFSET UNITYSDK_OFFSET(0xBAD9A70)
#define CLASS_2_C025BE3E8471A9FB_METHOD_2_6D8B8CD47CD59618_OFFSET UNITYSDK_OFFSET(0xBADA490)
#define CLASS_2_C025BE3E8471A9FB_METHOD_2_7C3D40820FAF9F39_OFFSET UNITYSDK_OFFSET(0xBAD9820)
#define CLASS_2_C025BE3E8471A9FB_METHOD_2_96BDC4B57CCFE000_1_OFFSET UNITYSDK_OFFSET(0xBADA2B0)
#define CLASS_2_C025BE3E8471A9FB_METHOD_2_96BDC4B57CCFE000_2_OFFSET UNITYSDK_OFFSET(0xBADA350)
#define CLASS_2_C025BE3E8471A9FB_METHOD_2_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0xBADA210)
#define CLASS_2_C025BE3E8471A9FB_METHOD_2_A7E8B52E9ABB8DB9_OFFSET UNITYSDK_OFFSET(0xBAD9700)
#define CLASS_2_C025BE3E8471A9FB_METHOD_2_A8458C1526636349_OFFSET UNITYSDK_OFFSET(0xBAD94E0)
#define CLASS_2_C025BE3E8471A9FB_METHOD_2_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0xBAD8F20)
#define CLASS_2_C025BE3E8471A9FB_METHOD_2_C553A9ED9087026F_OFFSET UNITYSDK_OFFSET(0xBAD9E30)
#define CLASS_2_C025BE3E8471A9FB_METHOD_2_D7D8ED549C201F00_OFFSET UNITYSDK_OFFSET(0xBAD8ED0)
#define CLASS_2_C025BE3E8471A9FB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBAD89C0)
#define CLASS_2_C025BE3E8471A9FB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBAD8F70)
#define CLASS_2_C025BE3E8471A9FB_TICK_OFFSET UNITYSDK_OFFSET(0xBAD88E0)
#define CLASS_2_C025BE3E8471A9FB__CTOR_OFFSET UNITYSDK_OFFSET(0xBAD84B0)

inline static constexpr unsigned int Class_2_C025BE3E8471A9FB_TypeDefinitionIndex = 53881;

class Class_2_C025BE3E8471A9FB : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_12; // 0x0
	// static const ::System::String* Field_2_13; // 0x0
	::Class_3_E21F6DE9B7FA4D05* Field_2_9; // 0x18
	::RPG::Client::LuaUIController* Field_2_4; // 0x20
	::RPG::GameCore::RogueDLC1Dot3AdventureRoomProcess* Field_2_0; // 0x28
	::Class_3_E21F6DE9B7FA4D05* Field_2_5; // 0x30
	::Class_3_E21F6DE9B7FA4D05* Field_2_7; // 0x38
	::RPG::Client::LuaUIController* Field_2_3; // 0x40
	::RPG::GameCore::RogueClientAdventureRoomInfo* Field_2_10; // 0x48
	::RPG::GameCore::TaskContext* Field_2_1; // 0x50
	::Class_3_E21F6DE9B7FA4D05* Field_2_8; // 0x58
	::Class_3_E21F6DE9B7FA4D05* Field_2_6; // 0x60
	::Class_1_9F9E3B454E079F91* Field_2_2; // 0x68
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

	::System::Void Method_2_A8458C1526636349(::Class_1_1E3361428001BACB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1E3361428001BACB*))((::PBYTE)hIl2Cpp + CLASS_2_C025BE3E8471A9FB_METHOD_2_A8458C1526636349_OFFSET))(this, a1);
	}

	::System::Void Method_2_7C3D40820FAF9F39(::Class_1_1E3361428001BACB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1E3361428001BACB*))((::PBYTE)hIl2Cpp + CLASS_2_C025BE3E8471A9FB_METHOD_2_7C3D40820FAF9F39_OFFSET))(this, a1);
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
