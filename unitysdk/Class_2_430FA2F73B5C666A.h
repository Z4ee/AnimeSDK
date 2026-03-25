#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_430FA2F73B5C666A_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1142A650)
#define CLASS_2_430FA2F73B5C666A_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1142A730)
#define CLASS_2_430FA2F73B5C666A_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1142A4D0)
#define CLASS_2_430FA2F73B5C666A_METHOD_2_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x11429FB0)
#define CLASS_2_430FA2F73B5C666A_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1142A490)
#define CLASS_2_430FA2F73B5C666A_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x11429F10)
#define CLASS_2_430FA2F73B5C666A_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1142A820)
#define CLASS_2_430FA2F73B5C666A_METHOD_2_60354BB57ED6571D_OFFSET UNITYSDK_OFFSET(0x1142A000)
#define CLASS_2_430FA2F73B5C666A_METHOD_2_6CF053D5B1EC7D64_OFFSET UNITYSDK_OFFSET(0x1142A3B0)
#define CLASS_2_430FA2F73B5C666A_METHOD_2_8A8D8C429468743D_OFFSET UNITYSDK_OFFSET(0x1142A2C0)
#define CLASS_2_430FA2F73B5C666A_METHOD_2_991A80A797272BF1_OFFSET UNITYSDK_OFFSET(0x1142A050)
#define CLASS_2_430FA2F73B5C666A_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x1142A5B0)
#define CLASS_2_430FA2F73B5C666A_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x1142A4E0)
#define CLASS_2_430FA2F73B5C666A_METHOD_2_ECEF6F6910F28B78_OFFSET UNITYSDK_OFFSET(0x1142A1A0)
#define CLASS_2_430FA2F73B5C666A__CTOR_OFFSET UNITYSDK_OFFSET(0x1142A7E0)
#define CLASS_2_430FA2F73B5C666A__ONBIND_OFFSET UNITYSDK_OFFSET(0x11429F70)
#define CLASS_2_430FA2F73B5C666A___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1142A8E0)
#define CLASS_2_430FA2F73B5C666A___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1142A940)
#define CLASS_2_430FA2F73B5C666A___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x1142A880)

inline static constexpr unsigned int Class_2_430FA2F73B5C666A_TypeDefinitionIndex = 58534;

class Class_2_430FA2F73B5C666A : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_5; // 0x0
	::RPG::GameCore::GameEntity* Field_2_3; // 0x60
	::System::Action* Field_2_2; // 0x68
	::UnityEngine::Transform* Field_2_4; // 0x70
	::System::Boolean Field_2_1; // 0x78
	::System::Int32 _Priority_k__BackingField; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A_METHOD_2_04AF66402B9859B9_OFFSET))(this, a1);
	}

	::System::Void Method_2_60354BB57ED6571D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A_METHOD_2_60354BB57ED6571D_OFFSET))(this, a1);
	}

	::System::Void Method_2_ECEF6F6910F28B78(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A_METHOD_2_ECEF6F6910F28B78_OFFSET))(this, a1);
	}

	::System::Void Method_2_991A80A797272BF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A_METHOD_2_991A80A797272BF1_OFFSET))(this);
	}

	::System::Void Method_2_8A8D8C429468743D(::RPG::GameCore::AbilityCurrentHPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A_METHOD_2_8A8D8C429468743D_OFFSET))(this, a1);
	}

	::System::Void Method_2_6CF053D5B1EC7D64(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A_METHOD_2_6CF053D5B1EC7D64_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Int32 get_Priority()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A_GET_PRIORITY_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
