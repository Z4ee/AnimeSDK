#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_0_16E4307DCC419505_1190;
namespace RPG::Client { class BattleTeamBlockDetailPresenter; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_6922D91AD4FE0A31_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xEBA0100)
#define CLASS_2_6922D91AD4FE0A31_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xEBA0150)
#define CLASS_2_6922D91AD4FE0A31_METHOD_2_2439B52C953E2E46_OFFSET UNITYSDK_OFFSET(0xEBA0270)
#define CLASS_2_6922D91AD4FE0A31_METHOD_2_2DD7377814EAD872_OFFSET UNITYSDK_OFFSET(0xEBA05D0)
#define CLASS_2_6922D91AD4FE0A31_METHOD_2_B799DB9989A18F1D_OFFSET UNITYSDK_OFFSET(0xEBA0220)
#define CLASS_2_6922D91AD4FE0A31_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0xEBA0190)
#define CLASS_2_6922D91AD4FE0A31_METHOD_2_D01BD37EE8E5964C_OFFSET UNITYSDK_OFFSET(0xEBA0530)
#define CLASS_2_6922D91AD4FE0A31__CTOR_OFFSET UNITYSDK_OFFSET(0xEBA0710)
#define CLASS_2_6922D91AD4FE0A31__ONBIND_OFFSET UNITYSDK_OFFSET(0xEBA0070)

inline static constexpr unsigned int Class_2_6922D91AD4FE0A31_TypeDefinitionIndex = 71179;

class Class_2_6922D91AD4FE0A31 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* GIMJIFLANOC; // 0x0
	::RPG::Client::BattleTeamBlockDetailPresenter* OCHMHGBBCJI; // 0x60
	::Class_0_16E4307DCC419505_1190* APPIHABBCGK; // 0x68
	::RPG::Client::PrefabLoadMeta* OGJJJANDJMP; // 0x70
	::System::Int32 PFIIGLEFKFF; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6922D91AD4FE0A31__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6922D91AD4FE0A31__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6922D91AD4FE0A31_GET_INDEX_OFFSET))(this);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6922D91AD4FE0A31_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_6922D91AD4FE0A31_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_2_B799DB9989A18F1D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6922D91AD4FE0A31_METHOD_2_B799DB9989A18F1D_OFFSET))(this);
	}

	::System::Void Method_2_D01BD37EE8E5964C(::Class_0_16E4307DCC419505_1190* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1190*))((::PBYTE)hIl2Cpp + CLASS_2_6922D91AD4FE0A31_METHOD_2_D01BD37EE8E5964C_OFFSET))(this, a1);
	}

	::System::Void Method_2_2439B52C953E2E46()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6922D91AD4FE0A31_METHOD_2_2439B52C953E2E46_OFFSET))(this);
	}

	::System::Void Method_2_2DD7377814EAD872(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6922D91AD4FE0A31_METHOD_2_2DD7377814EAD872_OFFSET))(this, a1);
	}
};
