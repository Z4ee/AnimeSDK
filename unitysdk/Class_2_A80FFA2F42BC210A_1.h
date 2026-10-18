#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_4E4262D27B1F98DF;
class Class_2_96F6E9F120D7841D;
class Class_2_B99B007CE74C0CA3;
namespace RPG::Client { class BattleUITeamBlockData; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class AbilityCurrentShieldChange; }
namespace RPG::GameCore { class LevelCharacterRemoveShield; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define CLASS_2_A80FFA2F42BC210A_1_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC38BB40)
#define CLASS_2_A80FFA2F42BC210A_1_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC38BCE0)
#define CLASS_2_A80FFA2F42BC210A_1_METHOD_2_2A2B4A2E0BDAAF15_OFFSET UNITYSDK_OFFSET(0xC38B620)
#define CLASS_2_A80FFA2F42BC210A_1_METHOD_2_327B657776861CA3_OFFSET UNITYSDK_OFFSET(0xC38A800)
#define CLASS_2_A80FFA2F42BC210A_1_METHOD_2_34AB44459AA010EE_OFFSET UNITYSDK_OFFSET(0xC38AAB0)
#define CLASS_2_A80FFA2F42BC210A_1_METHOD_2_363DFFD6D91DB19B_OFFSET UNITYSDK_OFFSET(0xC38B750)
#define CLASS_2_A80FFA2F42BC210A_1_METHOD_2_6C0683DAC3648934_OFFSET UNITYSDK_OFFSET(0xC38A8F0)
#define CLASS_2_A80FFA2F42BC210A_1_METHOD_2_84D1B17136D07A41_OFFSET UNITYSDK_OFFSET(0xC38AE40)
#define CLASS_2_A80FFA2F42BC210A_1_METHOD_2_8D12F94F8D9BEDBB_OFFSET UNITYSDK_OFFSET(0xC38AED0)
#define CLASS_2_A80FFA2F42BC210A_1_METHOD_2_974A70E8019154E7_OFFSET UNITYSDK_OFFSET(0xC38BA40)
#define CLASS_2_A80FFA2F42BC210A_1_METHOD_2_B41BF09397A80626_OFFSET UNITYSDK_OFFSET(0xC38B6E0)
#define CLASS_2_A80FFA2F42BC210A_1_METHOD_2_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0xC38B030)
#define CLASS_2_A80FFA2F42BC210A_1_METHOD_2_E8F71BC8471C5469_OFFSET UNITYSDK_OFFSET(0xC38B460)
#define CLASS_2_A80FFA2F42BC210A_1_METHOD_2_EEABD52C0F4D0C8A_OFFSET UNITYSDK_OFFSET(0xC38B280)
#define CLASS_2_A80FFA2F42BC210A_1_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0xC38B8C0)
#define CLASS_2_A80FFA2F42BC210A_1_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0xC38B980)
#define CLASS_2_A80FFA2F42BC210A_1_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xC38B800)
#define CLASS_2_A80FFA2F42BC210A_1_METHOD_2_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0xC38ADE0)
#define CLASS_2_A80FFA2F42BC210A_1_METHOD_2_FA53756A2AB5E247_1_OFFSET UNITYSDK_OFFSET(0xC38AB40)
#define CLASS_2_A80FFA2F42BC210A_1_METHOD_2_FA53756A2AB5E247_OFFSET UNITYSDK_OFFSET(0xC38A8A0)
#define CLASS_2_A80FFA2F42BC210A_1_METHOD_2_FC62D9B72750F5A4_OFFSET UNITYSDK_OFFSET(0xC38AB90)
#define CLASS_2_A80FFA2F42BC210A_1__CTOR_OFFSET UNITYSDK_OFFSET(0xC38BE50)
#define CLASS_2_A80FFA2F42BC210A_1__ONBIND_OFFSET UNITYSDK_OFFSET(0xC38A780)
#define CLASS_2_A80FFA2F42BC210A_1__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xC38AA20)

inline static constexpr unsigned int Class_2_A80FFA2F42BC210A_1_TypeDefinitionIndex = 72049;

class Class_2_A80FFA2F42BC210A_1 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* IJLGGAODOKC; // 0x0
	// static const ::System::String* MCNPEJFBAAG; // 0x0
	// static const ::System::String* CJONLJJPLJM; // 0x0
	// static const ::System::String* JHNBEJJJLCO; // 0x0
	// static const ::System::String* PGMNJNHPMGG; // 0x0
	::Class_1_4E4262D27B1F98DF* FHKNGKLAMAF; // 0x60
	::UnityEngine::Transform* NGOEMDKHBPO; // 0x68
	::RPG::Client::PrefabLoadMeta* GGBFOLPIFIL; // 0x70
	::UnityEngine::Transform* KPGPOMMAMGA; // 0x78
	::RPG::Client::PrefabLoadMeta* CKPJOENDCDE; // 0x80
	::UnityEngine::Animation* GGHHILBNDJN; // 0x88
	::Class_2_B99B007CE74C0CA3* JDGLCCEGPMH; // 0x90
	::RPG::Client::BattleUITeamBlockData* LACMNAKHODL; // 0x98
	::Class_2_96F6E9F120D7841D* EIPPIIAKNJO; // 0xA0
	::UnityEngine::Animation* NGHBNMLGFNC; // 0xA8
	::System::Boolean CGOHGDKADLJ; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_1__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_1__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_327B657776861CA3(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_1_METHOD_2_327B657776861CA3_OFFSET))(this, a1);
	}

	::System::Void Method_2_FA53756A2AB5E247()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_1_METHOD_2_FA53756A2AB5E247_OFFSET))(this);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_1__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_34AB44459AA010EE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_1_METHOD_2_34AB44459AA010EE_OFFSET))(this, a1);
	}

	::System::Void Method_2_FA53756A2AB5E247_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_1_METHOD_2_FA53756A2AB5E247_1_OFFSET))(this);
	}

	::System::Void Method_2_FC62D9B72750F5A4(::RPG::GameCore::AbilityCurrentShieldChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentShieldChange*))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_1_METHOD_2_FC62D9B72750F5A4_OFFSET))(this, a1);
	}

	::System::Void Method_2_84D1B17136D07A41(::RPG::GameCore::LevelCharacterRemoveShield* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterRemoveShield*))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_1_METHOD_2_84D1B17136D07A41_OFFSET))(this, a1);
	}

	::System::Void Method_2_8D12F94F8D9BEDBB(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_1_METHOD_2_8D12F94F8D9BEDBB_OFFSET))(this, a1);
	}

	::System::Void Method_2_6C0683DAC3648934(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_1_METHOD_2_6C0683DAC3648934_OFFSET))(this, a1);
	}

	::System::Void Method_2_C7BF9C1E6A78DCAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_1_METHOD_2_C7BF9C1E6A78DCAB_OFFSET))(this);
	}

	::System::Void Method_2_EEABD52C0F4D0C8A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_1_METHOD_2_EEABD52C0F4D0C8A_OFFSET))(this);
	}

	::System::Void Method_2_E8F71BC8471C5469()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_1_METHOD_2_E8F71BC8471C5469_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_2_B41BF09397A80626()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_1_METHOD_2_B41BF09397A80626_OFFSET))(this);
	}

	::System::Void Method_2_2A2B4A2E0BDAAF15(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_1_METHOD_2_2A2B4A2E0BDAAF15_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_1_METHOD_2_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Method_2_363DFFD6D91DB19B(::UnityEngine::Animation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_1_METHOD_2_363DFFD6D91DB19B_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_1_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_1_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_1_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_974A70E8019154E7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_1_METHOD_2_974A70E8019154E7_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_1_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_1_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
