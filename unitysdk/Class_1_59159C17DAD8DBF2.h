#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1064;
class Class_1_414BCDCDAD47B487;
class Class_2_99BB0B2A459A25C4;
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLodSetting; }
namespace RPG::GameCore { class LodDetail; }

#define CLASS_1_59159C17DAD8DBF2_METHOD_1_0C46F2368C0954A8_OFFSET UNITYSDK_OFFSET(0xC424050)
#define CLASS_1_59159C17DAD8DBF2_METHOD_1_0D34B29874E881BD_OFFSET UNITYSDK_OFFSET(0xC4246A0)
#define CLASS_1_59159C17DAD8DBF2_METHOD_1_1F0AB91DB297B2B5_OFFSET UNITYSDK_OFFSET(0xC423A20)
#define CLASS_1_59159C17DAD8DBF2_METHOD_1_270C0C7CD4DC3FFA_OFFSET UNITYSDK_OFFSET(0xC4238D0)
#define CLASS_1_59159C17DAD8DBF2_METHOD_1_3CD8F9B0233AF481_OFFSET UNITYSDK_OFFSET(0xC423650)
#define CLASS_1_59159C17DAD8DBF2_METHOD_1_471569683E790EE5_1_OFFSET UNITYSDK_OFFSET(0xC423470)
#define CLASS_1_59159C17DAD8DBF2_METHOD_1_471569683E790EE5_OFFSET UNITYSDK_OFFSET(0xC423310)
#define CLASS_1_59159C17DAD8DBF2_METHOD_1_4A80BBB92B6FD38D_OFFSET UNITYSDK_OFFSET(0xC423EF0)
#define CLASS_1_59159C17DAD8DBF2_METHOD_1_58F36FC06998BB26_OFFSET UNITYSDK_OFFSET(0xC424960)
#define CLASS_1_59159C17DAD8DBF2_METHOD_1_69B138FD124BCA65_OFFSET UNITYSDK_OFFSET(0xC4244E0)
#define CLASS_1_59159C17DAD8DBF2_METHOD_1_6D047DFA36D6B75B_OFFSET UNITYSDK_OFFSET(0xC423710)
#define CLASS_1_59159C17DAD8DBF2_METHOD_1_7C3C606EA3940DC5_OFFSET UNITYSDK_OFFSET(0xC423140)
#define CLASS_1_59159C17DAD8DBF2_METHOD_1_81ADF539CEB58030_OFFSET UNITYSDK_OFFSET(0xC4235D0)
#define CLASS_1_59159C17DAD8DBF2_METHOD_1_81EC382AB6020233_OFFSET UNITYSDK_OFFSET(0xC424C00)
#define CLASS_1_59159C17DAD8DBF2_METHOD_1_A4A9C09859726623_OFFSET UNITYSDK_OFFSET(0xC424750)
#define CLASS_1_59159C17DAD8DBF2_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC424920)
#define CLASS_1_59159C17DAD8DBF2_METHOD_1_CEBE254B0894039F_OFFSET UNITYSDK_OFFSET(0xC4242D0)
#define CLASS_1_59159C17DAD8DBF2_METHOD_1_E43C20C230203D14_OFFSET UNITYSDK_OFFSET(0xC423C20)
#define CLASS_1_59159C17DAD8DBF2_METHOD_1_E51D9168493BE0F8_OFFSET UNITYSDK_OFFSET(0xC425060)
#define CLASS_1_59159C17DAD8DBF2_METHOD_1_E96157A5844E0D85_OFFSET UNITYSDK_OFFSET(0xC424F30)
#define CLASS_1_59159C17DAD8DBF2__CCTOR_OFFSET UNITYSDK_OFFSET(0xC425140)
#define CLASS_1_59159C17DAD8DBF2__CTOR_OFFSET UNITYSDK_OFFSET(0xC423130)

inline static constexpr unsigned int Class_1_59159C17DAD8DBF2_TypeDefinitionIndex = 73734;

class Class_1_59159C17DAD8DBF2 : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_FGMCBJMPPHD()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_59159C17DAD8DBF2_TypeDefinitionIndex)->GetStaticField(0x11890);
	}
	static ::System::Single* StaticGet_ECCDDMLKKMC()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_59159C17DAD8DBF2_TypeDefinitionIndex)->GetStaticField(0x78B0);
	}
	static ::System::Single* StaticGet_PIIHMFECDJL()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_59159C17DAD8DBF2_TypeDefinitionIndex)->GetStaticField(0x78B4);
	}
	static ::System::Single* StaticGet_DPGFEFBFPFF()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_59159C17DAD8DBF2_TypeDefinitionIndex)->GetStaticField(0x78B8);
	}
	static ::System::Single* StaticGet_CKFJCFJLEJP()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_59159C17DAD8DBF2_TypeDefinitionIndex)->GetStaticField(0x78BC);
	}
	::RPG::Client::OpenWorld::StreamingLodSetting* PNIBBJODGFJ; // 0x10
	::System::Single GJDDHLIKCPG; // 0x18
	::System::Single LNGCANKBIDF; // 0x1C
	::UnityEngine::Vector3 PFBFFIMPNBL; // 0x20

	::System::Void _ctor(::RPG::Client::OpenWorld::StreamingLodSetting* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLodSetting*))((::PBYTE)hIl2Cpp + CLASS_1_59159C17DAD8DBF2__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_59159C17DAD8DBF2__CCTOR_OFFSET))();
	}

	::System::Void Method_1_7C3C606EA3940DC5(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single& a3, ::System::Single& a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_59159C17DAD8DBF2_METHOD_1_7C3C606EA3940DC5_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_471569683E790EE5(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_59159C17DAD8DBF2_METHOD_1_471569683E790EE5_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_471569683E790EE5_1(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_59159C17DAD8DBF2_METHOD_1_471569683E790EE5_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_81ADF539CEB58030(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_59159C17DAD8DBF2_METHOD_1_81ADF539CEB58030_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_3CD8F9B0233AF481(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_59159C17DAD8DBF2_METHOD_1_3CD8F9B0233AF481_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Int32 Method_1_6D047DFA36D6B75B(::Class_2_99BB0B2A459A25C4* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Int32(*)(::Class_2_99BB0B2A459A25C4*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_59159C17DAD8DBF2_METHOD_1_6D047DFA36D6B75B_OFFSET))(a1, a2, a3);
	}

	::System::Int32 Method_1_270C0C7CD4DC3FFA(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::Rect a2, ::System::Single a3)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_59159C17DAD8DBF2_METHOD_1_270C0C7CD4DC3FFA_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_E43C20C230203D14(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Int32 a4, ::System::Boolean a5, ::System::Int32 a6, ::System::Boolean a7)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_59159C17DAD8DBF2_METHOD_1_E43C20C230203D14_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Single Method_1_4A80BBB92B6FD38D(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3)
	{
		return ((::System::Single(*)(::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_59159C17DAD8DBF2_METHOD_1_4A80BBB92B6FD38D_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_0C46F2368C0954A8(::Class_0_16E4307DCC419505_1064* a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Single a6)
	{
		return ((::System::Single(*)(::Class_0_16E4307DCC419505_1064*, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_59159C17DAD8DBF2_METHOD_1_0C46F2368C0954A8_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Single Method_1_69B138FD124BCA65(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::Rect a2)
	{
		return ((::System::Single(*)(::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_59159C17DAD8DBF2_METHOD_1_69B138FD124BCA65_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_0D34B29874E881BD(::Class_0_16E4307DCC419505_1064* a1, ::UnityEngine::Rect a2, ::System::Boolean a3, ::System::Single a4)
	{
		return ((::System::Single(*)(::Class_0_16E4307DCC419505_1064*, ::UnityEngine::Rect, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_59159C17DAD8DBF2_METHOD_1_0D34B29874E881BD_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_1_1F0AB91DB297B2B5(::Class_0_16E4307DCC419505_1064* a1, ::UnityEngine::Rect a2)
	{
		return ((::System::Single(*)(::Class_0_16E4307DCC419505_1064*, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_59159C17DAD8DBF2_METHOD_1_1F0AB91DB297B2B5_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_CEBE254B0894039F(::Class_0_16E4307DCC419505_1064* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Single(*)(::Class_0_16E4307DCC419505_1064*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_59159C17DAD8DBF2_METHOD_1_CEBE254B0894039F_OFFSET))(a1, a2);
	}

	::System::Int32 Method_1_A4A9C09859726623(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::Rect a2, ::System::Single a3, ::System::Int32 a4, ::System::Boolean a5)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::Rect, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_59159C17DAD8DBF2_METHOD_1_A4A9C09859726623_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59159C17DAD8DBF2_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Int32 Method_1_58F36FC06998BB26(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Int32(*)(::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_59159C17DAD8DBF2_METHOD_1_58F36FC06998BB26_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_81EC382AB6020233(::Class_1_414BCDCDAD47B487* a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4)
	{
		return ((::System::Int32(*)(::Class_1_414BCDCDAD47B487*, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_59159C17DAD8DBF2_METHOD_1_81EC382AB6020233_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_E51D9168493BE0F8(::RPG::GameCore::LodDetail* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::LodDetail*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_59159C17DAD8DBF2_METHOD_1_E51D9168493BE0F8_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_E96157A5844E0D85(::RPG::GameCore::LodDetail* a1, ::System::Int32 a2)
	{
		return ((::System::Single(*)(::RPG::GameCore::LodDetail*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_59159C17DAD8DBF2_METHOD_1_E96157A5844E0D85_OFFSET))(a1, a2);
	}
};
