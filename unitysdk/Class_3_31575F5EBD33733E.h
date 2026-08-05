#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/Enum_3_215506A3B8D5C27F.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"

class Class_1_B7E341C5F1A6F199;
class Class_1_CB7F0487F7A6164A;
class Class_2_196239041048FB4A;
class Class_2_44D59DDDD1D4E4A6;
class Class_2_B242825AD4217625;
class Class_3_552F4B3897A496E8;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }

#define CLASS_3_31575F5EBD33733E_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x15587500)
#define CLASS_3_31575F5EBD33733E_METHOD_3_01EB24655DAD8F11_OFFSET UNITYSDK_OFFSET(0x1558AB00)
#define CLASS_3_31575F5EBD33733E_METHOD_3_0E2C387AE285136B_OFFSET UNITYSDK_OFFSET(0x155898D0)
#define CLASS_3_31575F5EBD33733E_METHOD_3_135EAD403DF539D8_OFFSET UNITYSDK_OFFSET(0x15589C50)
#define CLASS_3_31575F5EBD33733E_METHOD_3_20C2EBB475F4FA10_OFFSET UNITYSDK_OFFSET(0x15588030)
#define CLASS_3_31575F5EBD33733E_METHOD_3_2674DA2DCB2DFC42_OFFSET UNITYSDK_OFFSET(0x1558B990)
#define CLASS_3_31575F5EBD33733E_METHOD_3_35AB387A77FC5996_OFFSET UNITYSDK_OFFSET(0x1558B870)
#define CLASS_3_31575F5EBD33733E_METHOD_3_42845EF49A75CCC9_OFFSET UNITYSDK_OFFSET(0x1558C0A0)
#define CLASS_3_31575F5EBD33733E_METHOD_3_4FBE6B807DEB61CE_OFFSET UNITYSDK_OFFSET(0x15589E80)
#define CLASS_3_31575F5EBD33733E_METHOD_3_649E1690AF0B5860_OFFSET UNITYSDK_OFFSET(0x1558BA50)
#define CLASS_3_31575F5EBD33733E_METHOD_3_6E086958102B28B7_OFFSET UNITYSDK_OFFSET(0x1558C440)
#define CLASS_3_31575F5EBD33733E_METHOD_3_952E789867EC60A4_OFFSET UNITYSDK_OFFSET(0x1558BF90)
#define CLASS_3_31575F5EBD33733E_METHOD_3_9CA0D69FCF9BE030_OFFSET UNITYSDK_OFFSET(0x15589520)
#define CLASS_3_31575F5EBD33733E_METHOD_3_9D9305EA0A7E7ED2_OFFSET UNITYSDK_OFFSET(0x1558A7F0)
#define CLASS_3_31575F5EBD33733E_METHOD_3_A6A7B1766BC58C64_OFFSET UNITYSDK_OFFSET(0x1558C380)
#define CLASS_3_31575F5EBD33733E_METHOD_3_AA7B5EEAC4068D02_OFFSET UNITYSDK_OFFSET(0x1558C1C0)
#define CLASS_3_31575F5EBD33733E_METHOD_3_B2B7A5FDEFB40F76_OFFSET UNITYSDK_OFFSET(0x1558A350)
#define CLASS_3_31575F5EBD33733E_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x15589F30)
#define CLASS_3_31575F5EBD33733E_METHOD_3_BDABA2FEE3EE4A6A_OFFSET UNITYSDK_OFFSET(0x1558AF80)
#define CLASS_3_31575F5EBD33733E_METHOD_3_C11F290846C78034_OFFSET UNITYSDK_OFFSET(0x15587B00)
#define CLASS_3_31575F5EBD33733E_METHOD_3_C1C31B670DD39237_OFFSET UNITYSDK_OFFSET(0x1558A3C0)
#define CLASS_3_31575F5EBD33733E_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1558A2C0)
#define CLASS_3_31575F5EBD33733E_METHOD_3_CB1F92E880D50BE5_OFFSET UNITYSDK_OFFSET(0x1558BAA0)
#define CLASS_3_31575F5EBD33733E_METHOD_3_E0717C8A93FFD105_OFFSET UNITYSDK_OFFSET(0x15589FC0)
#define CLASS_3_31575F5EBD33733E_METHOD_3_E6E83B0F635316D3_OFFSET UNITYSDK_OFFSET(0x15589ED0)
#define CLASS_3_31575F5EBD33733E_METHOD_3_F7A5D6EDC55A3060_OFFSET UNITYSDK_OFFSET(0x1558BB30)
#define CLASS_3_31575F5EBD33733E_METHOD_3_FEE2E7AC1044A2D6_OFFSET UNITYSDK_OFFSET(0x155893A0)
#define CLASS_3_31575F5EBD33733E_UPDATE_OFFSET UNITYSDK_OFFSET(0x15587950)
#define CLASS_3_31575F5EBD33733E__CTOR_OFFSET UNITYSDK_OFFSET(0x15587AB0)

inline static constexpr unsigned int Class_3_31575F5EBD33733E_TypeDefinitionIndex = 82586;

class Class_3_31575F5EBD33733E : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_31575F5EBD33733E__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_31575F5EBD33733E_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_31575F5EBD33733E_UPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_C11F290846C78034(::Class_2_44D59DDDD1D4E4A6* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_44D59DDDD1D4E4A6*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_31575F5EBD33733E_METHOD_3_C11F290846C78034_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_FEE2E7AC1044A2D6(::Class_3_552F4B3897A496E8* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_3_552F4B3897A496E8*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_31575F5EBD33733E_METHOD_3_FEE2E7AC1044A2D6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9CA0D69FCF9BE030(::Class_3_552F4B3897A496E8* a1)
	{
		return ((::System::Void(*)(::Class_3_552F4B3897A496E8*))((::PBYTE)hIl2Cpp + CLASS_3_31575F5EBD33733E_METHOD_3_9CA0D69FCF9BE030_OFFSET))(a1);
	}

	static ::System::Void Method_3_135EAD403DF539D8(::Class_2_196239041048FB4A* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_196239041048FB4A*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_31575F5EBD33733E_METHOD_3_135EAD403DF539D8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4FBE6B807DEB61CE(::Class_3_552F4B3897A496E8* a1, ::Class_1_CB7F0487F7A6164A* a2, ::Class_1_CB7F0487F7A6164A* a3)
	{
		return ((::System::Void(*)(::Class_3_552F4B3897A496E8*, ::Class_1_CB7F0487F7A6164A*, ::Class_1_CB7F0487F7A6164A*))((::PBYTE)hIl2Cpp + CLASS_3_31575F5EBD33733E_METHOD_3_4FBE6B807DEB61CE_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_E6E83B0F635316D3(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_31575F5EBD33733E_METHOD_3_E6E83B0F635316D3_OFFSET))(a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_31575F5EBD33733E_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_E0717C8A93FFD105(::Class_3_552F4B3897A496E8* a1, ::MoleMole::Battle::Entity* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_552F4B3897A496E8*, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_31575F5EBD33733E_METHOD_3_E0717C8A93FFD105_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_20C2EBB475F4FA10(::Class_3_552F4B3897A496E8* a1, ::Struct_2_FA5F50563E60AFBA a2, ::System::String* a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Single a6, ::System::String* a7, ::System::Boolean a8, ::System::Boolean a9)
	{
		return ((::System::Void(*)(::Class_3_552F4B3897A496E8*, ::Struct_2_FA5F50563E60AFBA, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_31575F5EBD33733E_METHOD_3_20C2EBB475F4FA10_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_31575F5EBD33733E_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_B2B7A5FDEFB40F76(::Class_3_552F4B3897A496E8* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_552F4B3897A496E8*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_31575F5EBD33733E_METHOD_3_B2B7A5FDEFB40F76_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C1C31B670DD39237(::Class_3_552F4B3897A496E8* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::Class_3_552F4B3897A496E8*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_31575F5EBD33733E_METHOD_3_C1C31B670DD39237_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_9D9305EA0A7E7ED2(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_31575F5EBD33733E_METHOD_3_9D9305EA0A7E7ED2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_BDABA2FEE3EE4A6A(::Class_3_552F4B3897A496E8* a1)
	{
		return ((::System::Void(*)(::Class_3_552F4B3897A496E8*))((::PBYTE)hIl2Cpp + CLASS_3_31575F5EBD33733E_METHOD_3_BDABA2FEE3EE4A6A_OFFSET))(a1);
	}

	static ::System::Void Method_3_01EB24655DAD8F11(::Class_2_B242825AD4217625* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_B242825AD4217625*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_31575F5EBD33733E_METHOD_3_01EB24655DAD8F11_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_2674DA2DCB2DFC42(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_31575F5EBD33733E_METHOD_3_2674DA2DCB2DFC42_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_649E1690AF0B5860(::Class_3_552F4B3897A496E8* a1)
	{
		return ((::System::Void(*)(::Class_3_552F4B3897A496E8*))((::PBYTE)hIl2Cpp + CLASS_3_31575F5EBD33733E_METHOD_3_649E1690AF0B5860_OFFSET))(a1);
	}

	static ::System::Void Method_3_F7A5D6EDC55A3060(::System::Single a1, ::Class_3_552F4B3897A496E8* a2)
	{
		return ((::System::Void(*)(::System::Single, ::Class_3_552F4B3897A496E8*))((::PBYTE)hIl2Cpp + CLASS_3_31575F5EBD33733E_METHOD_3_F7A5D6EDC55A3060_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_35AB387A77FC5996(::Class_3_552F4B3897A496E8* a1, ::Struct_2_FA5F50563E60AFBA a2, ::System::String* a3, ::System::Boolean a4, ::System::Single a5, ::System::String* a6, ::System::Boolean a7, ::System::Boolean a8, ::System::Boolean a9)
	{
		return ((::System::Void(*)(::Class_3_552F4B3897A496E8*, ::Struct_2_FA5F50563E60AFBA, ::System::String*, ::System::Boolean, ::System::Single, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_31575F5EBD33733E_METHOD_3_35AB387A77FC5996_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	static ::System::Void Method_3_952E789867EC60A4(::System::Single a1, ::Class_3_552F4B3897A496E8* a2)
	{
		return ((::System::Void(*)(::System::Single, ::Class_3_552F4B3897A496E8*))((::PBYTE)hIl2Cpp + CLASS_3_31575F5EBD33733E_METHOD_3_952E789867EC60A4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_42845EF49A75CCC9(::Class_3_552F4B3897A496E8* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_552F4B3897A496E8*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_31575F5EBD33733E_METHOD_3_42845EF49A75CCC9_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_CB1F92E880D50BE5(::Class_3_552F4B3897A496E8* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_552F4B3897A496E8*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_31575F5EBD33733E_METHOD_3_CB1F92E880D50BE5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_AA7B5EEAC4068D02(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_31575F5EBD33733E_METHOD_3_AA7B5EEAC4068D02_OFFSET))(a1);
	}

	static ::System::Void Method_3_A6A7B1766BC58C64(::Class_3_552F4B3897A496E8* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_3_552F4B3897A496E8*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_31575F5EBD33733E_METHOD_3_A6A7B1766BC58C64_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_0E2C387AE285136B(::Class_3_552F4B3897A496E8* a1, ::System::Boolean a2, ::System::Single a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::Class_3_552F4B3897A496E8*, ::System::Boolean, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_31575F5EBD33733E_METHOD_3_0E2C387AE285136B_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_6E086958102B28B7(::Class_3_552F4B3897A496E8* a1, ::Enum_3_215506A3B8D5C27F a2, ::System::Single a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::Class_3_552F4B3897A496E8*, ::Enum_3_215506A3B8D5C27F, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_31575F5EBD33733E_METHOD_3_6E086958102B28B7_OFFSET))(a1, a2, a3, a4);
	}
};
