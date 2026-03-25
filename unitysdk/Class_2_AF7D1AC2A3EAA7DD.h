#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F8F1752DCDE35E35.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/AdvancedFollowType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_60475C2D4D583319;
class Class_1_D7692BFC86C747A2;
class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifyAdventureCharacterRunSpeedRatio; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_AF7D1AC2A3EAA7DD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8EB6440)
#define CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_043A554C8C65B8D1_OFFSET UNITYSDK_OFFSET(0x8EB8770)
#define CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_0D926A533E72C276_OFFSET UNITYSDK_OFFSET(0x8EB6840)
#define CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x8EB6AD0)
#define CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_298236AC333160E8_OFFSET UNITYSDK_OFFSET(0x8EB7B60)
#define CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_2D1808F981B590D0_OFFSET UNITYSDK_OFFSET(0x8EB7890)
#define CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_2D69DEA94F4D6D5B_OFFSET UNITYSDK_OFFSET(0x8EB76B0)
#define CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_459D0A4618A0FA48_OFFSET UNITYSDK_OFFSET(0x8EB8750)
#define CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_4D331AADF765164C_OFFSET UNITYSDK_OFFSET(0x8EB8460)
#define CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_4E608ED8CF3CBCB8_OFFSET UNITYSDK_OFFSET(0x8EB7C00)
#define CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x8EB8380)
#define CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_5C3494A3B250FBC5_OFFSET UNITYSDK_OFFSET(0x8EB84C0)
#define CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_8C4AEC0BC1CA0CB4_OFFSET UNITYSDK_OFFSET(0x8EB6D20)
#define CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_8E8526B4C2756CA6_OFFSET UNITYSDK_OFFSET(0x8EB8310)
#define CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_98EF186D5BD08475_OFFSET UNITYSDK_OFFSET(0x8EB6520)
#define CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_9AFCA18B112F248A_OFFSET UNITYSDK_OFFSET(0x8EB8570)
#define CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_9D9CF8F6C2342EE5_OFFSET UNITYSDK_OFFSET(0x8EB8610)
#define CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_9F8F6511E8EF1235_OFFSET UNITYSDK_OFFSET(0x8EB8760)
#define CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_A3EBE3D65878FB6E_OFFSET UNITYSDK_OFFSET(0x8EB6CC0)
#define CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x8EB6F40)
#define CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_CFF9781BB86D620B_OFFSET UNITYSDK_OFFSET(0x8EB7170)
#define CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_D3F0B653E0982E96_1_OFFSET UNITYSDK_OFFSET(0x8EB7650)
#define CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_D3F0B653E0982E96_OFFSET UNITYSDK_OFFSET(0x8EB7100)
#define CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_D5E5EC1B4538DDD1_OFFSET UNITYSDK_OFFSET(0x8EB8780)
#define CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_D6C225F121F56344_OFFSET UNITYSDK_OFFSET(0x8EB7040)
#define CLASS_2_AF7D1AC2A3EAA7DD__CTOR_OFFSET UNITYSDK_OFFSET(0x8EB62C0)
#define CLASS_2_AF7D1AC2A3EAA7DD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8EB86D0)

inline static constexpr unsigned int Class_2_AF7D1AC2A3EAA7DD_TypeDefinitionIndex = 42433;

class Class_2_AF7D1AC2A3EAA7DD : public ::Class_1_F8F1752DCDE35E35
{
public:
	// static const ::System::Single Field_2_20; // 0x0
	// static const ::System::Single Field_2_21; // 0x0
	// static const ::System::Single Field_2_22; // 0x0
	::Class_3_5775A4FEC79026BC* Field_2_17; // 0x78
	::RPG::GameCore::ModifyAdventureCharacterRunSpeedRatio* Field_2_13; // 0x80
	::Class_3_5775A4FEC79026BC* Field_2_18; // 0x88
	::Class_1_D7692BFC86C747A2* Field_2_11; // 0x90
	::RPG::GameCore::TaskContext* Field_2_19; // 0x98
	::Class_1_60475C2D4D583319* Field_2_12; // 0xA0
	::System::Single Field_2_7; // 0xA8
	::System::Single Field_2_16; // 0xAC
	::System::Single Field_2_6; // 0xB0
	::System::Single Field_2_2; // 0xB4
	::System::Single Field_2_4; // 0xB8
	::System::Single Field_2_5; // 0xBC
	::System::Single Field_2_0; // 0xC0
	::System::Single Field_2_15; // 0xC4
	::System::Single Field_2_8; // 0xC8
	::System::Boolean Field_2_14; // 0xCC
	::UnityEngine::Vector3 Field_2_9; // 0xD0
	::System::Single Field_2_3; // 0xDC
	::System::Single Field_2_1; // 0xE0
	::UnityEngine::Vector3 Field_2_10; // 0xE4

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_AF7D1AC2A3EAA7DD__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF7D1AC2A3EAA7DD_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_98EF186D5BD08475(::RPG::GameCore::AdvancedFollowType a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Il2CppArray<::System::Int32>* a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Boolean a10, ::System::Single a11, ::System::Single a12, ::System::Boolean a13, ::System::Boolean a14)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvancedFollowType, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::Il2CppArray<::System::Int32>*, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_98EF186D5BD08475_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
	}

	::System::Void Method_2_0D926A533E72C276(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_0D926A533E72C276_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void Method_2_8C4AEC0BC1CA0CB4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_8C4AEC0BC1CA0CB4_OFFSET))(this, a1);
	}

	::System::Void Method_2_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_C561FF611C07A44C_OFFSET))(this);
	}

	::System::Void Method_2_D3F0B653E0982E96(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_D3F0B653E0982E96_OFFSET))(this, a1);
	}

	::System::Void Method_2_D3F0B653E0982E96_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_D3F0B653E0982E96_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_2D69DEA94F4D6D5B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_2D69DEA94F4D6D5B_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D6C225F121F56344(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_D6C225F121F56344_OFFSET))(this, a1);
	}

	::System::Void Method_2_298236AC333160E8(::RPG::GameCore::AdventureCharacterController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_298236AC333160E8_OFFSET))(this, a1);
	}

	::System::Void Method_2_CFF9781BB86D620B(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_CFF9781BB86D620B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4E608ED8CF3CBCB8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_4E608ED8CF3CBCB8_OFFSET))(this, a1);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}

	::System::Void Method_2_4D331AADF765164C(::RPG::GameCore::AdvNavigationFailReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_4D331AADF765164C_OFFSET))(this, a1);
	}

	::System::Void Method_2_8E8526B4C2756CA6(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_8E8526B4C2756CA6_OFFSET))(this, a1);
	}

	::System::Void Method_2_A3EBE3D65878FB6E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_A3EBE3D65878FB6E_OFFSET))(this);
	}

	::System::Void Method_2_5C3494A3B250FBC5(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_5C3494A3B250FBC5_OFFSET))(this, a1);
	}

	::System::Void Method_2_9AFCA18B112F248A(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_9AFCA18B112F248A_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_2D1808F981B590D0(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_2D1808F981B590D0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9D9CF8F6C2342EE5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_9D9CF8F6C2342EE5_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF7D1AC2A3EAA7DD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_459D0A4618A0FA48(::RPG::GameCore::GameEntity* P0, ::System::Boolean P1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_459D0A4618A0FA48_OFFSET))(this, P0, P1);
	}

	::System::Void Method_2_9F8F6511E8EF1235()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_9F8F6511E8EF1235_OFFSET))(this);
	}

	::System::Void Method_2_043A554C8C65B8D1(::RPG::GameCore::GameEntity* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_043A554C8C65B8D1_OFFSET))(this, P0);
	}

	::System::Void Method_2_D5E5EC1B4538DDD1(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AF7D1AC2A3EAA7DD_METHOD_2_D5E5EC1B4538DDD1_OFFSET))(this, P0);
	}
};
