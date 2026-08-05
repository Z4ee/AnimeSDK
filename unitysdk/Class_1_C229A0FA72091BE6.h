#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_77D4095D49568755.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/System/Object.h"

class Class_4_B99AA5AE371451AA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C229A0FA72091BE6_METHOD_1_31A63ADE187B2EA0_OFFSET UNITYSDK_OFFSET(0x1417F830)
#define CLASS_1_C229A0FA72091BE6_METHOD_1_77F8998D3CF7C87E_OFFSET UNITYSDK_OFFSET(0x1417F290)
#define CLASS_1_C229A0FA72091BE6_METHOD_1_9932B89964CEDA89_OFFSET UNITYSDK_OFFSET(0x1417F3E0)
#define CLASS_1_C229A0FA72091BE6_METHOD_1_AE34379FDC480E9D_OFFSET UNITYSDK_OFFSET(0x1417F4E0)
#define CLASS_1_C229A0FA72091BE6_METHOD_1_DF1F087CE0705EDD_OFFSET UNITYSDK_OFFSET(0x1417F6D0)
#define CLASS_1_C229A0FA72091BE6_METHOD_1_FC367CCBF9688167_OFFSET UNITYSDK_OFFSET(0x1417F610)

inline static constexpr unsigned int Class_1_C229A0FA72091BE6_TypeDefinitionIndex = 64096;

class Class_1_C229A0FA72091BE6 : public ::System::Object
{
public:
	static ::System::Void Method_1_77F8998D3CF7C87E(::Class_4_B99AA5AE371451AA* a1)
	{
		return ((::System::Void(*)(::Class_4_B99AA5AE371451AA*))((::PBYTE)hIl2Cpp + CLASS_1_C229A0FA72091BE6_METHOD_1_77F8998D3CF7C87E_OFFSET))(a1);
	}

	static ::System::Void Method_1_9932B89964CEDA89(::Class_4_B99AA5AE371451AA* a1, ::MoleMole::HollowChessboard::RenderDataHandle a2)
	{
		return ((::System::Void(*)(::Class_4_B99AA5AE371451AA*, ::MoleMole::HollowChessboard::RenderDataHandle))((::PBYTE)hIl2Cpp + CLASS_1_C229A0FA72091BE6_METHOD_1_9932B89964CEDA89_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_AE34379FDC480E9D(::MoleMole::HollowChessboard::RenderDataHandle a1, ::Enum_3_77D4095D49568755& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::HollowChessboard::RenderDataHandle, ::Enum_3_77D4095D49568755&))((::PBYTE)hIl2Cpp + CLASS_1_C229A0FA72091BE6_METHOD_1_AE34379FDC480E9D_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_FC367CCBF9688167(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::MoleMole::HollowChessboard::RenderDataHandle a2, ::Enum_3_77D4095D49568755& a3)
	{
		return ((::System::Boolean(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::RenderDataHandle, ::Enum_3_77D4095D49568755&))((::PBYTE)hIl2Cpp + CLASS_1_C229A0FA72091BE6_METHOD_1_FC367CCBF9688167_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_DF1F087CE0705EDD(::Class_4_B99AA5AE371451AA* a1, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::RenderDataHandle>* a2)
	{
		return ((::System::Void(*)(::Class_4_B99AA5AE371451AA*, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::RenderDataHandle>*))((::PBYTE)hIl2Cpp + CLASS_1_C229A0FA72091BE6_METHOD_1_DF1F087CE0705EDD_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_31A63ADE187B2EA0(::Class_4_B99AA5AE371451AA* a1, ::MoleMole::HollowChessboard::RenderDataHandle a2, ::Enum_3_77D4095D49568755& a3)
	{
		return ((::System::Boolean(*)(::Class_4_B99AA5AE371451AA*, ::MoleMole::HollowChessboard::RenderDataHandle, ::Enum_3_77D4095D49568755&))((::PBYTE)hIl2Cpp + CLASS_1_C229A0FA72091BE6_METHOD_1_31A63ADE187B2EA0_OFFSET))(a1, a2, a3);
	}
};
