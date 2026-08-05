#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_5F8DAA47ACDB7251.h"
#include "unitysdk/MoleMole/ELocalPlayType.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"

class Class_1_135463D7458ED59A_Class_1_9E89B2D44593C915;
class Class_1_6122374EDA4B3534;
class Class_2_208CC9941471731A_1186;
class Class_2_FDDC8A62C261903B;
class Class_2_FDDC8A62C261903B_1;
namespace MoleMole { class AvatarInitData; }
namespace MoleMole { class InLevelBuddyDataItem; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_4_447A9E1FE61025B8_METHOD_4_047D34745A4B98A3_OFFSET UNITYSDK_OFFSET(0x17524790)
#define CLASS_4_447A9E1FE61025B8_METHOD_4_0DF420E95D6252BE_OFFSET UNITYSDK_OFFSET(0x17524610)
#define CLASS_4_447A9E1FE61025B8_METHOD_4_112C2B8B7932F43A_OFFSET UNITYSDK_OFFSET(0x17522F60)
#define CLASS_4_447A9E1FE61025B8_METHOD_4_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x175247B0)
#define CLASS_4_447A9E1FE61025B8_METHOD_4_1947BC35B7A7FCB8_OFFSET UNITYSDK_OFFSET(0x17523800)
#define CLASS_4_447A9E1FE61025B8_METHOD_4_1CC1F49C95DCD42C_OFFSET UNITYSDK_OFFSET(0x175246E0)
#define CLASS_4_447A9E1FE61025B8_METHOD_4_32D09D1F157C2CE1_1_OFFSET UNITYSDK_OFFSET(0x17524620)
#define CLASS_4_447A9E1FE61025B8_METHOD_4_32D09D1F157C2CE1_OFFSET UNITYSDK_OFFSET(0x17524020)
#define CLASS_4_447A9E1FE61025B8_METHOD_4_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x17524320)
#define CLASS_4_447A9E1FE61025B8_METHOD_4_391A84BCD9F51317_2_OFFSET UNITYSDK_OFFSET(0x17524570)
#define CLASS_4_447A9E1FE61025B8_METHOD_4_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x17523FE0)
#define CLASS_4_447A9E1FE61025B8_METHOD_4_3C8305164A0C9B06_OFFSET UNITYSDK_OFFSET(0x17523890)
#define CLASS_4_447A9E1FE61025B8_METHOD_4_3E95970492C02E1A_OFFSET UNITYSDK_OFFSET(0x17524360)
#define CLASS_4_447A9E1FE61025B8_METHOD_4_4C6B7DF03C6A19C9_OFFSET UNITYSDK_OFFSET(0x17523780)
#define CLASS_4_447A9E1FE61025B8_METHOD_4_534C7923B6C66CF6_OFFSET UNITYSDK_OFFSET(0x17524560)
#define CLASS_4_447A9E1FE61025B8_METHOD_4_6229C3712CAF96A7_OFFSET UNITYSDK_OFFSET(0x17523930)
#define CLASS_4_447A9E1FE61025B8_METHOD_4_719A3C114FAFFF71_OFFSET UNITYSDK_OFFSET(0x17524600)
#define CLASS_4_447A9E1FE61025B8_METHOD_4_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0x17523CC0)
#define CLASS_4_447A9E1FE61025B8_METHOD_4_858CF2EC5EE423D3_OFFSET UNITYSDK_OFFSET(0x17523880)
#define CLASS_4_447A9E1FE61025B8_METHOD_4_9834A8CF2FA5DD10_OFFSET UNITYSDK_OFFSET(0x175244A0)
#define CLASS_4_447A9E1FE61025B8_METHOD_4_9FF0929B241F5D27_OFFSET UNITYSDK_OFFSET(0x175247C0)
#define CLASS_4_447A9E1FE61025B8_METHOD_4_A9F5DB75A058E32F_OFFSET UNITYSDK_OFFSET(0x17524180)
#define CLASS_4_447A9E1FE61025B8_METHOD_4_BFBF29F7E1941DA4_OFFSET UNITYSDK_OFFSET(0x17524550)
#define CLASS_4_447A9E1FE61025B8_METHOD_4_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x17523AA0)
#define CLASS_4_447A9E1FE61025B8_METHOD_4_D0B3EB3192C70900_OFFSET UNITYSDK_OFFSET(0x17524420)
#define CLASS_4_447A9E1FE61025B8_METHOD_4_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17522F50)
#define CLASS_4_447A9E1FE61025B8_METHOD_4_F1C27C0837BEBFB1_OFFSET UNITYSDK_OFFSET(0x175247A0)
#define CLASS_4_447A9E1FE61025B8_METHOD_4_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x17524780)
#define CLASS_4_447A9E1FE61025B8__CTOR_OFFSET UNITYSDK_OFFSET(0x17524490)

inline static constexpr unsigned int Class_4_447A9E1FE61025B8_TypeDefinitionIndex = 60974;

class Class_4_447A9E1FE61025B8 : public ::Class_3_5F8DAA47ACDB7251
{
public:
	::System::Collections::Generic::List_1<::Class_1_6122374EDA4B3534*>* Field_4_6; // 0x2D0
	::Class_2_FDDC8A62C261903B* Field_4_0; // 0x2D8
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_4_5; // 0x2E0
	::Class_2_FDDC8A62C261903B_1* Field_4_1; // 0x2E8
	::System::Int32 Field_4_7; // 0x2F0
	::System::Int32 Field_4_4; // 0x2F4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_447A9E1FE61025B8__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_4_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_447A9E1FE61025B8_METHOD_4_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_4_112C2B8B7932F43A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_447A9E1FE61025B8_METHOD_4_112C2B8B7932F43A_OFFSET))(this);
	}

	::System::Void Method_4_4C6B7DF03C6A19C9(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_4_447A9E1FE61025B8_METHOD_4_4C6B7DF03C6A19C9_OFFSET))(this, a1);
	}

	::System::Void Method_4_1947BC35B7A7FCB8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_447A9E1FE61025B8_METHOD_4_1947BC35B7A7FCB8_OFFSET))(this);
	}

	::MoleMole::ELocalPlayType Method_4_858CF2EC5EE423D3()
	{
		return ((::MoleMole::ELocalPlayType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_447A9E1FE61025B8_METHOD_4_858CF2EC5EE423D3_OFFSET))(this);
	}

	::System::Void Method_4_3C8305164A0C9B06(::Class_2_208CC9941471731A_1186* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_1186*))((::PBYTE)hIl2Cpp + CLASS_4_447A9E1FE61025B8_METHOD_4_3C8305164A0C9B06_OFFSET))(this, a1);
	}

	::System::Void Method_4_6229C3712CAF96A7(::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>* a1, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*))((::PBYTE)hIl2Cpp + CLASS_4_447A9E1FE61025B8_METHOD_4_6229C3712CAF96A7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_447A9E1FE61025B8_METHOD_4_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Boolean Method_4_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_447A9E1FE61025B8_METHOD_4_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_4_32D09D1F157C2CE1(::MoleMole::ESystemSettingType a1, ::System::Boolean& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::ESystemSettingType, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_4_447A9E1FE61025B8_METHOD_4_32D09D1F157C2CE1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_4_A9F5DB75A058E32F(::Class_1_135463D7458ED59A_Class_1_9E89B2D44593C915* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_135463D7458ED59A_Class_1_9E89B2D44593C915*))((::PBYTE)hIl2Cpp + CLASS_4_447A9E1FE61025B8_METHOD_4_A9F5DB75A058E32F_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_447A9E1FE61025B8_METHOD_4_391A84BCD9F51317_1_OFFSET))(this);
	}

	::MoleMole::UIBaseController* Method_4_3E95970492C02E1A(::MoleMole::UIBaseController* a1, ::UnityEngine::Transform* a2)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_4_447A9E1FE61025B8_METHOD_4_3E95970492C02E1A_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_4_D0B3EB3192C70900()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_447A9E1FE61025B8_METHOD_4_D0B3EB3192C70900_OFFSET))(this);
	}

	::System::Void Method_4_9834A8CF2FA5DD10(::Class_2_FDDC8A62C261903B_1* a1, ::Class_2_FDDC8A62C261903B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FDDC8A62C261903B_1*, ::Class_2_FDDC8A62C261903B*))((::PBYTE)hIl2Cpp + CLASS_4_447A9E1FE61025B8_METHOD_4_9834A8CF2FA5DD10_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_BFBF29F7E1941DA4(::Class_2_208CC9941471731A_1186* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_1186*))((::PBYTE)hIl2Cpp + CLASS_4_447A9E1FE61025B8_METHOD_4_BFBF29F7E1941DA4_OFFSET))(this, a1);
	}

	::System::Void Method_4_534C7923B6C66CF6(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_4_447A9E1FE61025B8_METHOD_4_534C7923B6C66CF6_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_391A84BCD9F51317_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_447A9E1FE61025B8_METHOD_4_391A84BCD9F51317_2_OFFSET))(this);
	}

	::System::Boolean Method_4_719A3C114FAFFF71(::Class_1_135463D7458ED59A_Class_1_9E89B2D44593C915* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_135463D7458ED59A_Class_1_9E89B2D44593C915*))((::PBYTE)hIl2Cpp + CLASS_4_447A9E1FE61025B8_METHOD_4_719A3C114FAFFF71_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_0DF420E95D6252BE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_447A9E1FE61025B8_METHOD_4_0DF420E95D6252BE_OFFSET))(this);
	}

	::System::Boolean Method_4_32D09D1F157C2CE1_1(::MoleMole::ESystemSettingType a1, ::System::Boolean& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::ESystemSettingType, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_4_447A9E1FE61025B8_METHOD_4_32D09D1F157C2CE1_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_447A9E1FE61025B8_METHOD_4_739DB9F245C7FAD0_OFFSET))(this);
	}

	::MoleMole::UIBaseController* Method_4_1CC1F49C95DCD42C(::MoleMole::UIBaseController* a1, ::UnityEngine::Transform* a2)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_4_447A9E1FE61025B8_METHOD_4_1CC1F49C95DCD42C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_447A9E1FE61025B8_METHOD_4_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Method_4_047D34745A4B98A3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_447A9E1FE61025B8_METHOD_4_047D34745A4B98A3_OFFSET))(this);
	}

	::System::Void Method_4_F1C27C0837BEBFB1(::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>* a1, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*))((::PBYTE)hIl2Cpp + CLASS_4_447A9E1FE61025B8_METHOD_4_F1C27C0837BEBFB1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_447A9E1FE61025B8_METHOD_4_17BD30EFE8176014_OFFSET))(this);
	}

	::System::Double Method_4_9FF0929B241F5D27(::System::Double a1, ::System::Double a2)
	{
		return ((::System::Double(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_4_447A9E1FE61025B8_METHOD_4_9FF0929B241F5D27_OFFSET))(this, a1, a2);
	}
};
