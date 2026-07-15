#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1059;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_67A6A140E0E4C4AD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18BBB4F0)
#define CLASS_1_67A6A140E0E4C4AD_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x18BBB6E0)
#define CLASS_1_67A6A140E0E4C4AD_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x18BBB850)
#define CLASS_1_67A6A140E0E4C4AD_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x18BBB7D0)
#define CLASS_1_67A6A140E0E4C4AD_METHOD_1_3E7178C5ECF017DB_1_OFFSET UNITYSDK_OFFSET(0x18BBB590)
#define CLASS_1_67A6A140E0E4C4AD_METHOD_1_3E7178C5ECF017DB_2_OFFSET UNITYSDK_OFFSET(0x18BBB640)
#define CLASS_1_67A6A140E0E4C4AD_METHOD_1_3E7178C5ECF017DB_3_OFFSET UNITYSDK_OFFSET(0x18BBB690)
#define CLASS_1_67A6A140E0E4C4AD_METHOD_1_3E7178C5ECF017DB_4_OFFSET UNITYSDK_OFFSET(0x18BBB730)
#define CLASS_1_67A6A140E0E4C4AD_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x18BBB540)
#define CLASS_1_67A6A140E0E4C4AD_METHOD_1_40B99324684CB56C_OFFSET UNITYSDK_OFFSET(0x18BBB890)
#define CLASS_1_67A6A140E0E4C4AD_METHOD_1_57D80B372834C5D1_OFFSET UNITYSDK_OFFSET(0x18BBB780)
#define CLASS_1_67A6A140E0E4C4AD_METHOD_1_7A2DB6C2ED8E8BBA_OFFSET UNITYSDK_OFFSET(0x18BBB5E0)
#define CLASS_1_67A6A140E0E4C4AD_METHOD_1_7B41A1215ECDFB54_OFFSET UNITYSDK_OFFSET(0x18BBB810)
#define CLASS_1_67A6A140E0E4C4AD__CTOR_OFFSET UNITYSDK_OFFSET(0x18BBC100)

inline static constexpr unsigned int Class_1_67A6A140E0E4C4AD_TypeDefinitionIndex = 68693;

class Class_1_67A6A140E0E4C4AD : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::RPG::GameCore::SkillData* Field_1_1; // 0x18
	::RPG::GameCore::GameEntity* Field_1_2; // 0x20
	::RPG::GameCore::GameEntity* Field_1_3; // 0x28
	::System::Nullable_1<::System::Boolean> Field_1_4; // 0x30
	::System::Nullable_1<::System::Boolean> Field_1_5; // 0x32
	::System::Nullable_1<::System::Boolean> Field_1_6; // 0x34
	::System::Nullable_1<::System::Boolean> Field_1_7; // 0x36

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

	::System::Void Method_1_40B99324684CB56C(::Class_0_16E4307DCC419505_1059* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1059*))((::PBYTE)hIl2Cpp + CLASS_1_67A6A140E0E4C4AD_METHOD_1_40B99324684CB56C_OFFSET))(this, a1);
	}
};
