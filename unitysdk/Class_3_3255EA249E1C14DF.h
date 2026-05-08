#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_C7F6513012E9C974;
class Class_2_EFBBB9EB13AB1B92_1;
class Class_3_E82A8DEF8081DA8E;
namespace MoleMole { class MonoStageCamera; }
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }

#define CLASS_3_3255EA249E1C14DF_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x11429030)
#define CLASS_3_3255EA249E1C14DF_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x11429C00)
#define CLASS_3_3255EA249E1C14DF_METHOD_3_0C9D76A07420881E_OFFSET UNITYSDK_OFFSET(0x1142B250)
#define CLASS_3_3255EA249E1C14DF_METHOD_3_2B34628951D5BFB5_OFFSET UNITYSDK_OFFSET(0x11429E40)
#define CLASS_3_3255EA249E1C14DF_METHOD_3_4027151BE6B0C070_OFFSET UNITYSDK_OFFSET(0x1142ABC0)
#define CLASS_3_3255EA249E1C14DF_METHOD_3_4D978F94B6C77A60_OFFSET UNITYSDK_OFFSET(0x1142ACF0)
#define CLASS_3_3255EA249E1C14DF_METHOD_3_749044B3B9F3CE80_OFFSET UNITYSDK_OFFSET(0x1142B720)
#define CLASS_3_3255EA249E1C14DF_METHOD_3_A11144519902A27F_1_OFFSET UNITYSDK_OFFSET(0x1142B200)
#define CLASS_3_3255EA249E1C14DF_METHOD_3_A11144519902A27F_OFFSET UNITYSDK_OFFSET(0x1142AB70)
#define CLASS_3_3255EA249E1C14DF_METHOD_3_A811AE01D67D6B33_OFFSET UNITYSDK_OFFSET(0x1142A960)
#define CLASS_3_3255EA249E1C14DF_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x1142AAE0)
#define CLASS_3_3255EA249E1C14DF_METHOD_3_C389FA0E3E9FE7E2_1_OFFSET UNITYSDK_OFFSET(0x1142A7D0)
#define CLASS_3_3255EA249E1C14DF_METHOD_3_C389FA0E3E9FE7E2_2_OFFSET UNITYSDK_OFFSET(0x1142A320)
#define CLASS_3_3255EA249E1C14DF_METHOD_3_C389FA0E3E9FE7E2_3_OFFSET UNITYSDK_OFFSET(0x1142A4B0)
#define CLASS_3_3255EA249E1C14DF_METHOD_3_C389FA0E3E9FE7E2_OFFSET UNITYSDK_OFFSET(0x1142A640)
#define CLASS_3_3255EA249E1C14DF_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1142AA50)
#define CLASS_3_3255EA249E1C14DF_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11429DB0)
#define CLASS_3_3255EA249E1C14DF_METHOD_3_D3889046613EF49C_OFFSET UNITYSDK_OFFSET(0x1142BAC0)
#define CLASS_3_3255EA249E1C14DF_METHOD_3_F35A17FDC83D4A7C_OFFSET UNITYSDK_OFFSET(0x1142B120)
#define CLASS_3_3255EA249E1C14DF_METHOD_3_FAC0A5ED1784BBA4_OFFSET UNITYSDK_OFFSET(0x1142AC60)
#define CLASS_3_3255EA249E1C14DF_UPDATE_OFFSET UNITYSDK_OFFSET(0x11429AA0)
#define CLASS_3_3255EA249E1C14DF__CTOR_OFFSET UNITYSDK_OFFSET(0x11429D60)

inline static constexpr unsigned int Class_3_3255EA249E1C14DF_TypeDefinitionIndex = 63701;

class Class_3_3255EA249E1C14DF : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x20
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3255EA249E1C14DF__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_3255EA249E1C14DF_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3255EA249E1C14DF_UPDATE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3255EA249E1C14DF_LATEUPDATE_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3255EA249E1C14DF_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Boolean Method_3_2B34628951D5BFB5(::Class_2_C7F6513012E9C974* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::Class_2_C7F6513012E9C974*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3255EA249E1C14DF_METHOD_3_2B34628951D5BFB5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C389FA0E3E9FE7E2(::MoleMole::Battle::Entity* a1, ::System::Double a2, ::System::Double a3, ::System::Double a4, ::MoleMole::Battle::Entity* a5)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Double, ::System::Double, ::System::Double, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3255EA249E1C14DF_METHOD_3_C389FA0E3E9FE7E2_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::MoleMole::MonoStageCamera* Method_3_A811AE01D67D6B33(::Class_3_E82A8DEF8081DA8E* a1, ::System::String* a2)
	{
		return ((::MoleMole::MonoStageCamera*(*)(::Class_3_E82A8DEF8081DA8E*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_3255EA249E1C14DF_METHOD_3_A811AE01D67D6B33_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3255EA249E1C14DF_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_3255EA249E1C14DF_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_A11144519902A27F(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_3255EA249E1C14DF_METHOD_3_A11144519902A27F_OFFSET))(this, a1);
	}

	::System::Void Method_3_4027151BE6B0C070(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_3255EA249E1C14DF_METHOD_3_4027151BE6B0C070_OFFSET))(this, a1);
	}

	::System::Void Method_3_4D978F94B6C77A60(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3255EA249E1C14DF_METHOD_3_4D978F94B6C77A60_OFFSET))(this, a1);
	}

	::System::Void Method_3_F35A17FDC83D4A7C(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3255EA249E1C14DF_METHOD_3_F35A17FDC83D4A7C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_A11144519902A27F_1(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_3255EA249E1C14DF_METHOD_3_A11144519902A27F_1_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_0C9D76A07420881E(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3255EA249E1C14DF_METHOD_3_0C9D76A07420881E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_FAC0A5ED1784BBA4(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3255EA249E1C14DF_METHOD_3_FAC0A5ED1784BBA4_OFFSET))(a1);
	}

	::System::Void Method_3_D3889046613EF49C(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3255EA249E1C14DF_METHOD_3_D3889046613EF49C_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_749044B3B9F3CE80(::Class_2_EFBBB9EB13AB1B92_1* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_EFBBB9EB13AB1B92_1*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3255EA249E1C14DF_METHOD_3_749044B3B9F3CE80_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C389FA0E3E9FE7E2_1(::MoleMole::Battle::Entity* a1, ::System::Double a2, ::System::Double a3, ::System::Double a4, ::MoleMole::Battle::Entity* a5)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Double, ::System::Double, ::System::Double, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3255EA249E1C14DF_METHOD_3_C389FA0E3E9FE7E2_1_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_C389FA0E3E9FE7E2_2(::MoleMole::Battle::Entity* a1, ::System::Double a2, ::System::Double a3, ::System::Double a4, ::MoleMole::Battle::Entity* a5)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Double, ::System::Double, ::System::Double, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3255EA249E1C14DF_METHOD_3_C389FA0E3E9FE7E2_2_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_C389FA0E3E9FE7E2_3(::MoleMole::Battle::Entity* a1, ::System::Double a2, ::System::Double a3, ::System::Double a4, ::MoleMole::Battle::Entity* a5)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Double, ::System::Double, ::System::Double, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3255EA249E1C14DF_METHOD_3_C389FA0E3E9FE7E2_3_OFFSET))(a1, a2, a3, a4, a5);
	}
};
