#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1115;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_67A6A140E0E4C4AD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A0969E0)
#define CLASS_1_67A6A140E0E4C4AD_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1A096BD0)
#define CLASS_1_67A6A140E0E4C4AD_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x1A096D40)
#define CLASS_1_67A6A140E0E4C4AD_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1A096CC0)
#define CLASS_1_67A6A140E0E4C4AD_METHOD_1_3E7178C5ECF017DB_1_OFFSET UNITYSDK_OFFSET(0x1A096A80)
#define CLASS_1_67A6A140E0E4C4AD_METHOD_1_3E7178C5ECF017DB_2_OFFSET UNITYSDK_OFFSET(0x1A096B30)
#define CLASS_1_67A6A140E0E4C4AD_METHOD_1_3E7178C5ECF017DB_3_OFFSET UNITYSDK_OFFSET(0x1A096B80)
#define CLASS_1_67A6A140E0E4C4AD_METHOD_1_3E7178C5ECF017DB_4_OFFSET UNITYSDK_OFFSET(0x1A096C20)
#define CLASS_1_67A6A140E0E4C4AD_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x1A096A30)
#define CLASS_1_67A6A140E0E4C4AD_METHOD_1_57D80B372834C5D1_OFFSET UNITYSDK_OFFSET(0x1A096C70)
#define CLASS_1_67A6A140E0E4C4AD_METHOD_1_7A2DB6C2ED8E8BBA_OFFSET UNITYSDK_OFFSET(0x1A096AD0)
#define CLASS_1_67A6A140E0E4C4AD_METHOD_1_7B41A1215ECDFB54_OFFSET UNITYSDK_OFFSET(0x1A096D00)
#define CLASS_1_67A6A140E0E4C4AD_METHOD_1_EA9487A7D9367135_OFFSET UNITYSDK_OFFSET(0x1A096D80)
#define CLASS_1_67A6A140E0E4C4AD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0974A0)

inline static constexpr unsigned int Class_1_67A6A140E0E4C4AD_TypeDefinitionIndex = 71891;

class Class_1_67A6A140E0E4C4AD : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* FMEOBOJJHMH; // 0x10
	::RPG::GameCore::GameEntity* JDIDAGMBKEL; // 0x18
	::RPG::GameCore::SkillData* OCOIDGHBAEH; // 0x20
	::System::String* MCCPCDDJOLC; // 0x28
	::System::Nullable_1<::System::Boolean> FHBNNGCEPFD; // 0x30
	::System::Nullable_1<::System::Boolean> PCLAGGCBHBO; // 0x32
	::System::Nullable_1<::System::Boolean> ACAPCHBDIBF; // 0x34
	::System::Nullable_1<::System::Boolean> HAECKDHIFMM; // 0x36

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67A6A140E0E4C4AD__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67A6A140E0E4C4AD_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_67A6A140E0E4C4AD_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E7178C5ECF017DB_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_67A6A140E0E4C4AD_METHOD_1_3E7178C5ECF017DB_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_7A2DB6C2ED8E8BBA(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_1_67A6A140E0E4C4AD_METHOD_1_7A2DB6C2ED8E8BBA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3E7178C5ECF017DB_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_67A6A140E0E4C4AD_METHOD_1_3E7178C5ECF017DB_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E7178C5ECF017DB_3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_67A6A140E0E4C4AD_METHOD_1_3E7178C5ECF017DB_3_OFFSET))(this, a1);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_67A6A140E0E4C4AD_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E7178C5ECF017DB_4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_67A6A140E0E4C4AD_METHOD_1_3E7178C5ECF017DB_4_OFFSET))(this, a1);
	}

	::System::Void Method_1_57D80B372834C5D1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_67A6A140E0E4C4AD_METHOD_1_57D80B372834C5D1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67A6A140E0E4C4AD_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::UnityEngine::RectTransform* Method_1_7B41A1215ECDFB54()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67A6A140E0E4C4AD_METHOD_1_7B41A1215ECDFB54_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67A6A140E0E4C4AD_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Void Method_1_EA9487A7D9367135(::Class_0_16E4307DCC419505_1115* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1115*))((::PBYTE)hIl2Cpp + CLASS_1_67A6A140E0E4C4AD_METHOD_1_EA9487A7D9367135_OFFSET))(this, a1);
	}
};
