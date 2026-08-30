#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/GameCore/StageInvasionMonsterState.h"
#include "unitysdk/RPG/GameCore/StageInvasionMonsterUIData.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class UIStateCtrl; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_4F89235CCF773E8F_METHOD_2_1B9DE401744AB3DE_OFFSET UNITYSDK_OFFSET(0x1A6B4430)
#define CLASS_2_4F89235CCF773E8F_METHOD_2_37C92C97E7CF34AA_OFFSET UNITYSDK_OFFSET(0x1A6B3EC0)
#define CLASS_2_4F89235CCF773E8F_METHOD_2_543CEB0AE7A91C84_OFFSET UNITYSDK_OFFSET(0x1A6B3DA0)
#define CLASS_2_4F89235CCF773E8F_METHOD_2_5C061BFFDACCF2F9_OFFSET UNITYSDK_OFFSET(0x1A6B3DF0)
#define CLASS_2_4F89235CCF773E8F_METHOD_2_5FF9139F1FF8E6D2_OFFSET UNITYSDK_OFFSET(0x1A6B3F60)
#define CLASS_2_4F89235CCF773E8F_METHOD_2_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x1A6B40A0)
#define CLASS_2_4F89235CCF773E8F_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x1A6B3C10)
#define CLASS_2_4F89235CCF773E8F_METHOD_2_A1596F65A2679075_OFFSET UNITYSDK_OFFSET(0x1A6B44A0)
#define CLASS_2_4F89235CCF773E8F_METHOD_2_A6E223DB7D7CF38C_OFFSET UNITYSDK_OFFSET(0x1A6B4350)
#define CLASS_2_4F89235CCF773E8F_METHOD_2_C5F2E178DAEB1793_OFFSET UNITYSDK_OFFSET(0x1A6B3C90)
#define CLASS_2_4F89235CCF773E8F_METHOD_2_E69F3DFB7CDFE412_OFFSET UNITYSDK_OFFSET(0x1A6B41C0)
#define CLASS_2_4F89235CCF773E8F_METHOD_2_FCA2AE2562BFCD74_OFFSET UNITYSDK_OFFSET(0x1A6B4020)
#define CLASS_2_4F89235CCF773E8F__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6B46D0)
#define CLASS_2_4F89235CCF773E8F__ONBIND_OFFSET UNITYSDK_OFFSET(0x1A6B3B50)

inline static constexpr unsigned int Class_2_4F89235CCF773E8F_TypeDefinitionIndex = 71379;

class Class_2_4F89235CCF773E8F : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* JFCMCPFPDFP; // 0x0
	// static const ::System::String* NFDGOBHEBMI; // 0x0
	// static const ::System::String* INICEFGJCNA; // 0x0
	// static const ::System::Int32 EHGIBNPEHJJ = 0x1; // 0x0
	// static const ::System::Int32 IBKAMEEDPKI = 0x5; // 0x0
	// static const ::System::String* PECBECKJLJA; // 0x0
	// static const ::System::String* PNKIHIGMFON; // 0x0
	// static const ::System::String* BPGJMMEFHEH; // 0x0
	// static const ::System::String* HEACELFKFJE; // 0x0
	::RPG::Client::UIStateCtrl* CDDEAIAHNIH; // 0x60
	::RPG::Client::UIStateCtrl* PIBMGGHHAKN; // 0x68
	::RPG::Client::AnimatorButton* PFBLCICMBBK; // 0x70
	::System::Boolean EINNACFPAEN; // 0x78
	::RPG::GameCore::StageInvasionMonsterUIData IGDNDNICIND; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F89235CCF773E8F__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F89235CCF773E8F__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_4F89235CCF773E8F_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_C5F2E178DAEB1793()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F89235CCF773E8F_METHOD_2_C5F2E178DAEB1793_OFFSET))(this);
	}

	::System::Void Method_2_543CEB0AE7A91C84()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F89235CCF773E8F_METHOD_2_543CEB0AE7A91C84_OFFSET))(this);
	}

	::System::Void Method_2_37C92C97E7CF34AA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4F89235CCF773E8F_METHOD_2_37C92C97E7CF34AA_OFFSET))(this, a1);
	}

	::System::Void Method_2_5FF9139F1FF8E6D2(::RPG::GameCore::StageInvasionMonsterUIData a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageInvasionMonsterUIData))((::PBYTE)hIl2Cpp + CLASS_2_4F89235CCF773E8F_METHOD_2_5FF9139F1FF8E6D2_OFFSET))(this, a1);
	}

	static ::System::String* Method_2_FCA2AE2562BFCD74(::System::Boolean a1)
	{
		return ((::System::String*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4F89235CCF773E8F_METHOD_2_FCA2AE2562BFCD74_OFFSET))(a1);
	}

	::System::Void Method_2_5C061BFFDACCF2F9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F89235CCF773E8F_METHOD_2_5C061BFFDACCF2F9_OFFSET))(this);
	}

	::System::Void Method_2_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F89235CCF773E8F_METHOD_2_775B6D644F07B554_OFFSET))(this);
	}

	::System::Void Method_2_E69F3DFB7CDFE412()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F89235CCF773E8F_METHOD_2_E69F3DFB7CDFE412_OFFSET))(this);
	}

	::System::String* Method_2_A6E223DB7D7CF38C(::System::UInt32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_4F89235CCF773E8F_METHOD_2_A6E223DB7D7CF38C_OFFSET))(this, a1);
	}

	::System::String* Method_2_1B9DE401744AB3DE(::RPG::GameCore::StageInvasionMonsterState a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::StageInvasionMonsterState))((::PBYTE)hIl2Cpp + CLASS_2_4F89235CCF773E8F_METHOD_2_1B9DE401744AB3DE_OFFSET))(this, a1);
	}

	::System::Void Method_2_A1596F65A2679075(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4F89235CCF773E8F_METHOD_2_A1596F65A2679075_OFFSET))(this, a1);
	}
};
