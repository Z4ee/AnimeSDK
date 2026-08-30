#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_4156D5F344F828BD.h"
#include "unitysdk/RPG/Client/CyreneSPPointState.h"
#include "unitysdk/RPG/Client/CyreneUltraSkillState.h"

class Class_1_152140BAFD2DB102;
class Class_2_92D006258A454033;
namespace RPG::Client { class MonoUltraSkillCyrenePanelHelper; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define CLASS_3_3C24A678F812348B_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB4398B0)
#define CLASS_3_3C24A678F812348B_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB439A50)
#define CLASS_3_3C24A678F812348B_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xB4387D0)
#define CLASS_3_3C24A678F812348B_METHOD_3_1DFB9896143A3689_OFFSET UNITYSDK_OFFSET(0xB438D30)
#define CLASS_3_3C24A678F812348B_METHOD_3_348F036FD91E83A1_OFFSET UNITYSDK_OFFSET(0xB438740)
#define CLASS_3_3C24A678F812348B_METHOD_3_38B862BB2192EC08_OFFSET UNITYSDK_OFFSET(0xB4380B0)
#define CLASS_3_3C24A678F812348B_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB437FA0)
#define CLASS_3_3C24A678F812348B_METHOD_3_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0xB438060)
#define CLASS_3_3C24A678F812348B_METHOD_3_545B3E6467CF601F_OFFSET UNITYSDK_OFFSET(0xB438100)
#define CLASS_3_3C24A678F812348B_METHOD_3_5835DC16FC46989B_1_OFFSET UNITYSDK_OFFSET(0xB437F00)
#define CLASS_3_3C24A678F812348B_METHOD_3_5835DC16FC46989B_2_OFFSET UNITYSDK_OFFSET(0xB439100)
#define CLASS_3_3C24A678F812348B_METHOD_3_5835DC16FC46989B_OFFSET UNITYSDK_OFFSET(0xB437D70)
#define CLASS_3_3C24A678F812348B_METHOD_3_5B28FD6D66BEEE54_OFFSET UNITYSDK_OFFSET(0xB439030)
#define CLASS_3_3C24A678F812348B_METHOD_3_5BD82BA47F02F224_OFFSET UNITYSDK_OFFSET(0xB4383A0)
#define CLASS_3_3C24A678F812348B_METHOD_3_7901BC8DEBEF208E_OFFSET UNITYSDK_OFFSET(0xB4388F0)
#define CLASS_3_3C24A678F812348B_METHOD_3_96B0A2395AD185C6_OFFSET UNITYSDK_OFFSET(0xB438C50)
#define CLASS_3_3C24A678F812348B_METHOD_3_AC088C028EF9B921_OFFSET UNITYSDK_OFFSET(0xB4386B0)
#define CLASS_3_3C24A678F812348B_METHOD_3_B24D6784786E080C_OFFSET UNITYSDK_OFFSET(0xB438000)
#define CLASS_3_3C24A678F812348B_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB437D30)
#define CLASS_3_3C24A678F812348B_METHOD_3_CD210EEA0CFC3079_OFFSET UNITYSDK_OFFSET(0xB4381D0)
#define CLASS_3_3C24A678F812348B_METHOD_3_DA37DFE3A5BDA9F4_OFFSET UNITYSDK_OFFSET(0xB437DC0)
#define CLASS_3_3C24A678F812348B_METHOD_3_E1513374C600EBEC_OFFSET UNITYSDK_OFFSET(0xB438F50)
#define CLASS_3_3C24A678F812348B_METHOD_3_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0xB437F50)
#define CLASS_3_3C24A678F812348B_METHOD_3_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0xB439670)
#define CLASS_3_3C24A678F812348B_METHOD_3_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0xB439730)
#define CLASS_3_3C24A678F812348B_METHOD_3_F37CDBD6D46274D2_3_OFFSET UNITYSDK_OFFSET(0xB4397F0)
#define CLASS_3_3C24A678F812348B_METHOD_3_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xB4395E0)
#define CLASS_3_3C24A678F812348B__CCTOR_OFFSET UNITYSDK_OFFSET(0xB439C70)
#define CLASS_3_3C24A678F812348B__CTOR_OFFSET UNITYSDK_OFFSET(0xB439BF0)
#define CLASS_3_3C24A678F812348B__ONBIND_OFFSET UNITYSDK_OFFSET(0xB439150)
#define CLASS_3_3C24A678F812348B__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xB437CB0)

inline static constexpr unsigned int Class_3_3C24A678F812348B_TypeDefinitionIndex = 71856;

class Class_3_3C24A678F812348B : public ::Class_2_4156D5F344F828BD
{
public:
	static ::System::Int32* StaticGet_PGOIHCHALIJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3C24A678F812348B_TypeDefinitionIndex)->GetStaticField(0x136A0);
	}
	static ::System::Int32* StaticGet_OMJACLKJBCI()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3C24A678F812348B_TypeDefinitionIndex)->GetStaticField(0x136A4);
	}
	static ::System::Int32* StaticGet_HBIABGHKCEN()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3C24A678F812348B_TypeDefinitionIndex)->GetStaticField(0x136A8);
	}
	static ::System::Int32* StaticGet_NFNIJPMMJAF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3C24A678F812348B_TypeDefinitionIndex)->GetStaticField(0x136AC);
	}
	static ::System::Int32* StaticGet_DNOPAFEDOEI()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3C24A678F812348B_TypeDefinitionIndex)->GetStaticField(0x136B0);
	}
	static ::System::Int32* StaticGet_MCPNPEDDKAA()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3C24A678F812348B_TypeDefinitionIndex)->GetStaticField(0x136B4);
	}
	// static const ::System::String* DJCBDJMACFH; // 0x0
	// static const ::System::Int32 JGPBDPIFLPG = 0xC; // 0x0
	// static const ::System::Int32 HGLNNAELIDE = 0xC; // 0x0
	// static const ::System::Int32 GPCFAFNFJFC = 0x18; // 0x0
	::Il2CppArray<::Class_2_92D006258A454033*>* OAODPMOKGAN; // 0xB8
	::UnityEngine::Transform* KBAABABJEOJ; // 0xC0
	::UnityEngine::Animator* APPGGMLEPLN; // 0xC8
	::RPG::Client::MonoUltraSkillCyrenePanelHelper* ENEAJDPPCAL; // 0xD0
	::Il2CppArray<::Class_2_92D006258A454033*>* LMABABLNLAA; // 0xD8
	::RPG::Client::CyreneUltraSkillState HHEBPAMJJKI; // 0xE0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3C24A678F812348B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_3C24A678F812348B__CCTOR_OFFSET))();
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3C24A678F812348B__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3C24A678F812348B_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_5835DC16FC46989B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3C24A678F812348B_METHOD_3_5835DC16FC46989B_OFFSET))(this);
	}

	::System::Void Method_3_5835DC16FC46989B_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3C24A678F812348B_METHOD_3_5835DC16FC46989B_1_OFFSET))(this);
	}

	::System::Void Method_3_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3C24A678F812348B_METHOD_3_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3C24A678F812348B_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_3_B24D6784786E080C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3C24A678F812348B_METHOD_3_B24D6784786E080C_OFFSET))(this, a1);
	}

	::System::Void Method_3_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3C24A678F812348B_METHOD_3_455E250D679F9642_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_3_38B862BB2192EC08()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3C24A678F812348B_METHOD_3_38B862BB2192EC08_OFFSET))(this);
	}

	::System::Void Method_3_DA37DFE3A5BDA9F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3C24A678F812348B_METHOD_3_DA37DFE3A5BDA9F4_OFFSET))(this);
	}

	::System::Void Method_3_5BD82BA47F02F224(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_3C24A678F812348B_METHOD_3_5BD82BA47F02F224_OFFSET))(this, a1);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3C24A678F812348B_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::RPG::Client::CyreneUltraSkillState Method_3_348F036FD91E83A1(::System::Int32 a1)
	{
		return ((::RPG::Client::CyreneUltraSkillState(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_3C24A678F812348B_METHOD_3_348F036FD91E83A1_OFFSET))(this, a1);
	}

	::System::Void Method_3_AC088C028EF9B921(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_3C24A678F812348B_METHOD_3_AC088C028EF9B921_OFFSET))(this, a1);
	}

	::Class_2_92D006258A454033* Method_3_7901BC8DEBEF208E(::System::Int32 a1)
	{
		return ((::Class_2_92D006258A454033*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_3C24A678F812348B_METHOD_3_7901BC8DEBEF208E_OFFSET))(this, a1);
	}

	::RPG::Client::CyreneSPPointState Method_3_96B0A2395AD185C6(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::RPG::Client::CyreneSPPointState(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_3C24A678F812348B_METHOD_3_96B0A2395AD185C6_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::SkillData* Method_3_545B3E6467CF601F()
	{
		return ((::RPG::GameCore::SkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3C24A678F812348B_METHOD_3_545B3E6467CF601F_OFFSET))(this);
	}

	::System::Int32 Method_3_CD210EEA0CFC3079()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3C24A678F812348B_METHOD_3_CD210EEA0CFC3079_OFFSET))(this);
	}

	::System::Void Method_3_1DFB9896143A3689(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_3C24A678F812348B_METHOD_3_1DFB9896143A3689_OFFSET))(this, a1);
	}

	::System::Void Method_3_E1513374C600EBEC(::Class_1_152140BAFD2DB102* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_152140BAFD2DB102*))((::PBYTE)hIl2Cpp + CLASS_3_3C24A678F812348B_METHOD_3_E1513374C600EBEC_OFFSET))(this, a1);
	}

	::System::Void Method_3_5B28FD6D66BEEE54(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_3C24A678F812348B_METHOD_3_5B28FD6D66BEEE54_OFFSET))(this, a1);
	}

	::System::Void Method_3_5835DC16FC46989B_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3C24A678F812348B_METHOD_3_5835DC16FC46989B_2_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3C24A678F812348B__ONBIND_OFFSET))(this);
	}

	::System::Void Method_3_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_3C24A678F812348B_METHOD_3_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_3_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_3C24A678F812348B_METHOD_3_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_3C24A678F812348B_METHOD_3_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void Method_3_F37CDBD6D46274D2_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_3C24A678F812348B_METHOD_3_F37CDBD6D46274D2_3_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3C24A678F812348B_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3C24A678F812348B_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
