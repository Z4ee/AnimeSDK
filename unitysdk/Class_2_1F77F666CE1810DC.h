#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_2_20045032BB3051FB;
namespace RPG::GameCore { class AbilityCurrentSPChange; }
namespace RPG::GameCore { class AbilityMaxSPChange; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_1F77F666CE1810DC_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB91BC40)
#define CLASS_2_1F77F666CE1810DC_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB91BD80)
#define CLASS_2_1F77F666CE1810DC_METHOD_2_11D5322717FDFD9D_OFFSET UNITYSDK_OFFSET(0xB91B780)
#define CLASS_2_1F77F666CE1810DC_METHOD_2_2E07D057E72DE76A_OFFSET UNITYSDK_OFFSET(0xB91B520)
#define CLASS_2_1F77F666CE1810DC_METHOD_2_4358F70A163BCEAE_OFFSET UNITYSDK_OFFSET(0xB91B090)
#define CLASS_2_1F77F666CE1810DC_METHOD_2_43A478BA01FE29B7_OFFSET UNITYSDK_OFFSET(0xB91AF30)
#define CLASS_2_1F77F666CE1810DC_METHOD_2_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0xB91AFF0)
#define CLASS_2_1F77F666CE1810DC_METHOD_2_A693F2E8D4F4A766_OFFSET UNITYSDK_OFFSET(0xB91AEE0)
#define CLASS_2_1F77F666CE1810DC_METHOD_2_D3E970D78BB8886D_OFFSET UNITYSDK_OFFSET(0xB91B0E0)
#define CLASS_2_1F77F666CE1810DC_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0xB91BB80)
#define CLASS_2_1F77F666CE1810DC_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xB91BAC0)
#define CLASS_2_1F77F666CE1810DC_METHOD_2_FA0119DD445A672F_OFFSET UNITYSDK_OFFSET(0xB91B300)
#define CLASS_2_1F77F666CE1810DC_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xB91AE10)
#define CLASS_2_1F77F666CE1810DC_ONRETURN_OFFSET UNITYSDK_OFFSET(0xB91AFA0)
#define CLASS_2_1F77F666CE1810DC__CTOR_OFFSET UNITYSDK_OFFSET(0xB91BEA0)
#define CLASS_2_1F77F666CE1810DC__ONBIND_OFFSET UNITYSDK_OFFSET(0xB91ADD0)

inline static constexpr unsigned int Class_2_1F77F666CE1810DC_TypeDefinitionIndex = 71355;

class Class_2_1F77F666CE1810DC : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::Int32 PANNAKIFACK = 0xA; // 0x0
	::System::Collections::Generic::List_1<::Class_2_20045032BB3051FB*>* INBHBEAJJDD; // 0x60
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x68
	::System::Int32 NIMJOKGLPEK; // 0x70
	::System::Int32 DMIIPFEILFN; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F77F666CE1810DC__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F77F666CE1810DC__ONBIND_OFFSET))(this);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_1F77F666CE1810DC_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F77F666CE1810DC_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_6BCEDD4814D8A8D9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_1F77F666CE1810DC_METHOD_2_6BCEDD4814D8A8D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_43A478BA01FE29B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F77F666CE1810DC_METHOD_2_43A478BA01FE29B7_OFFSET))(this);
	}

	::System::Void Method_2_D3E970D78BB8886D(::RPG::GameCore::AbilityCurrentSPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentSPChange*))((::PBYTE)hIl2Cpp + CLASS_2_1F77F666CE1810DC_METHOD_2_D3E970D78BB8886D_OFFSET))(this, a1);
	}

	::System::Void Method_2_2E07D057E72DE76A(::RPG::GameCore::AbilityMaxSPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityMaxSPChange*))((::PBYTE)hIl2Cpp + CLASS_2_1F77F666CE1810DC_METHOD_2_2E07D057E72DE76A_OFFSET))(this, a1);
	}

	::System::Void Method_2_A693F2E8D4F4A766(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_1F77F666CE1810DC_METHOD_2_A693F2E8D4F4A766_OFFSET))(this, a1);
	}

	::System::Void Method_2_4358F70A163BCEAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F77F666CE1810DC_METHOD_2_4358F70A163BCEAE_OFFSET))(this);
	}

	::System::Void Method_2_11D5322717FDFD9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F77F666CE1810DC_METHOD_2_11D5322717FDFD9D_OFFSET))(this);
	}

	::System::Void Method_2_FA0119DD445A672F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F77F666CE1810DC_METHOD_2_FA0119DD445A672F_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_1F77F666CE1810DC_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_1F77F666CE1810DC_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F77F666CE1810DC_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F77F666CE1810DC_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
