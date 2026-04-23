#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F8F1752DCDE35E35.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/AdvancedFollowType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_60475C2D4D583319;
class Class_1_D95A52EE58A402D1;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifyAdventureCharacterRunSpeedRatio; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_20ABFF56D19D108A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11A6EF90)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_043A554C8C65B8D1_OFFSET UNITYSDK_OFFSET(0x11A718F0)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_0D926A533E72C276_OFFSET UNITYSDK_OFFSET(0x11A6F500)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x11A6F790)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x11A714A0)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_298236AC333160E8_OFFSET UNITYSDK_OFFSET(0x11A70C90)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_2D1808F981B590D0_OFFSET UNITYSDK_OFFSET(0x11A709C0)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_44D79A8627DE7D79_OFFSET UNITYSDK_OFFSET(0x11A6FE50)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_459D0A4618A0FA48_OFFSET UNITYSDK_OFFSET(0x11A718D0)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_49AA86D9F19FB057_OFFSET UNITYSDK_OFFSET(0x11A70350)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_4D331AADF765164C_OFFSET UNITYSDK_OFFSET(0x11A715E0)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_4E608ED8CF3CBCB8_OFFSET UNITYSDK_OFFSET(0x11A70D40)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x11A71500)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_5C3494A3B250FBC5_OFFSET UNITYSDK_OFFSET(0x11A71640)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_7889E856344009E9_OFFSET UNITYSDK_OFFSET(0x11A6F480)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_8C4AEC0BC1CA0CB4_OFFSET UNITYSDK_OFFSET(0x11A6F9E0)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_8E2613C0147FD640_OFFSET UNITYSDK_OFFSET(0x11A6FDD0)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_8E8526B4C2756CA6_OFFSET UNITYSDK_OFFSET(0x11A71430)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_9AFCA18B112F248A_OFFSET UNITYSDK_OFFSET(0x11A716F0)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_9C25D81B36F50A81_OFFSET UNITYSDK_OFFSET(0x11A707E0)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_9D9CF8F6C2342EE5_OFFSET UNITYSDK_OFFSET(0x11A71790)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_9F8F6511E8EF1235_OFFSET UNITYSDK_OFFSET(0x11A718E0)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_A3EBE3D65878FB6E_OFFSET UNITYSDK_OFFSET(0x11A6F980)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_B650CDF375474809_OFFSET UNITYSDK_OFFSET(0x11A702F0)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_C25F3A2B844157D6_OFFSET UNITYSDK_OFFSET(0x11A6F080)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x11A6FC10)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_D5E5EC1B4538DDD1_OFFSET UNITYSDK_OFFSET(0x11A71900)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_D6C225F121F56344_OFFSET UNITYSDK_OFFSET(0x11A6FD10)
#define CLASS_2_20ABFF56D19D108A__CTOR_OFFSET UNITYSDK_OFFSET(0x11A6EDF0)
#define CLASS_2_20ABFF56D19D108A___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11A71850)

inline static constexpr unsigned int Class_2_20ABFF56D19D108A_TypeDefinitionIndex = 48393;

class Class_2_20ABFF56D19D108A : public ::Class_1_F8F1752DCDE35E35
{
public:
	// static const ::System::Single Field_2_24; // 0x0
	// static const ::System::Single Field_2_25; // 0x0
	// static const ::System::Single Field_2_26; // 0x0
	::Class_3_E21F6DE9B7FA4D05* Field_2_21; // 0x80
	::Class_3_E21F6DE9B7FA4D05* Field_2_22; // 0x88
	::Class_1_60475C2D4D583319* Field_2_16; // 0x90
	::RPG::GameCore::ModifyAdventureCharacterRunSpeedRatio* Field_2_17; // 0x98
	::RPG::GameCore::TaskContext* Field_2_23; // 0xA0
	::Class_1_D95A52EE58A402D1* Field_2_15; // 0xA8
	::UnityEngine::Vector3 Field_2_14; // 0xB0
	::System::Single Field_2_2; // 0xBC
	::UnityEngine::Vector3 Field_2_13; // 0xC0
	::System::Single Field_2_9; // 0xCC
	::System::Single Field_2_11; // 0xD0
	::System::Single Field_2_7; // 0xD4
	::System::Single Field_2_4; // 0xD8
	::System::Single Field_2_6; // 0xDC
	::System::Single Field_2_8; // 0xE0
	::System::Single Field_2_0; // 0xE4
	::System::Single Field_2_1; // 0xE8
	::System::Single Field_2_5; // 0xEC
	::System::Boolean Field_2_18; // 0xF0
	::System::Boolean Field_2_10; // 0xF1
	::System::Single Field_2_3; // 0xF4
	::System::Single Field_2_19; // 0xF8
	::System::Single Field_2_20; // 0xFC
	::System::Single Field_2_12; // 0x100

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_C25F3A2B844157D6(::RPG::GameCore::AdvancedFollowType a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Il2CppArray<::System::Int32>* a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Boolean a10, ::System::Single a11, ::System::Single a12, ::System::Boolean a13, ::System::Boolean a14, ::System::Boolean a15, ::System::Single a16, ::System::Single a17)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvancedFollowType, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::Il2CppArray<::System::Int32>*, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_C25F3A2B844157D6_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
	}

	::System::Void Method_2_0D926A533E72C276(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_0D926A533E72C276_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void Method_2_8C4AEC0BC1CA0CB4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_8C4AEC0BC1CA0CB4_OFFSET))(this, a1);
	}

	::System::Void Method_2_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_C561FF611C07A44C_OFFSET))(this);
	}

	::System::Void Method_2_8E2613C0147FD640(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_8E2613C0147FD640_OFFSET))(this, a1);
	}

	::System::Void Method_2_B650CDF375474809(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_B650CDF375474809_OFFSET))(this, a1);
	}

	::System::Void Method_2_9C25D81B36F50A81(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_9C25D81B36F50A81_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D6C225F121F56344(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_D6C225F121F56344_OFFSET))(this, a1);
	}

	::System::Void Method_2_298236AC333160E8(::RPG::GameCore::AdventureCharacterController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_298236AC333160E8_OFFSET))(this, a1);
	}

	::System::Void Method_2_44D79A8627DE7D79(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_44D79A8627DE7D79_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4E608ED8CF3CBCB8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_4E608ED8CF3CBCB8_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}

	::System::Void Method_2_4D331AADF765164C(::RPG::GameCore::AdvNavigationFailReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_4D331AADF765164C_OFFSET))(this, a1);
	}

	::System::Void Method_2_8E8526B4C2756CA6(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_8E8526B4C2756CA6_OFFSET))(this, a1);
	}

	::System::Void Method_2_A3EBE3D65878FB6E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_A3EBE3D65878FB6E_OFFSET))(this);
	}

	::System::Void Method_2_5C3494A3B250FBC5(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_5C3494A3B250FBC5_OFFSET))(this, a1);
	}

	::System::Void Method_2_9AFCA18B112F248A(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_9AFCA18B112F248A_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_2D1808F981B590D0(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_2D1808F981B590D0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9D9CF8F6C2342EE5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_9D9CF8F6C2342EE5_OFFSET))(this, a1);
	}

	::System::Void Method_2_7889E856344009E9(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_7889E856344009E9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_49AA86D9F19FB057(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_49AA86D9F19FB057_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_459D0A4618A0FA48(::RPG::GameCore::GameEntity* P0, ::System::Boolean P1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_459D0A4618A0FA48_OFFSET))(this, P0, P1);
	}

	::System::Void Method_2_9F8F6511E8EF1235()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_9F8F6511E8EF1235_OFFSET))(this);
	}

	::System::Void Method_2_043A554C8C65B8D1(::RPG::GameCore::GameEntity* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_043A554C8C65B8D1_OFFSET))(this, P0);
	}

	::System::Void Method_2_D5E5EC1B4538DDD1(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_D5E5EC1B4538DDD1_OFFSET))(this, P0);
	}
};
