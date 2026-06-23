#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4354CA68936C9080.h"
#include "unitysdk/Enum_3_F9160878A7322AE9.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigNewbie_HighLightData; }
namespace MoleMole { class ConfigNewbie_TargetPath; }
namespace MoleMole { class UIBaseController; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UIButtonBase; }

#define CLASS_1_A308ED25CCFC7E1D_METHOD_1_35B574BF35040A2E_OFFSET UNITYSDK_OFFSET(0x1960C260)
#define CLASS_1_A308ED25CCFC7E1D_METHOD_1_B3ADE91382BF0B05_OFFSET UNITYSDK_OFFSET(0x1960C220)
#define CLASS_1_A308ED25CCFC7E1D_METHOD_1_C68098BF95F367E9_OFFSET UNITYSDK_OFFSET(0x1960C4C0)
#define CLASS_1_A308ED25CCFC7E1D_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1960C240)
#define CLASS_1_A308ED25CCFC7E1D_METHOD_1_C81277B215275574_OFFSET UNITYSDK_OFFSET(0x1960C210)
#define CLASS_1_A308ED25CCFC7E1D_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1960C230)
#define CLASS_1_A308ED25CCFC7E1D_METHOD_1_F1D40B323FAD3DCE_OFFSET UNITYSDK_OFFSET(0x1960C250)
#define CLASS_1_A308ED25CCFC7E1D__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1960C140)
#define CLASS_1_A308ED25CCFC7E1D__CTOR_OFFSET UNITYSDK_OFFSET(0x1960C090)

inline static constexpr unsigned int Class_1_A308ED25CCFC7E1D_TypeDefinitionIndex = 87390;

class Class_1_A308ED25CCFC7E1D : public ::System::Object
{
public:
	::System::String* Field_1_8; // 0x10
	::MoleMole::UIBaseController* Field_1_2; // 0x18
	::UnityEngine::GameObject* Field_1_6; // 0x20
	::UnityEngine::UI::Extension::UIButtonBase* Field_1_5; // 0x28
	::MoleMole::ConfigNewbie_TargetPath* Field_1_3; // 0x30
	::MoleMole::UIBaseController* Field_1_10; // 0x38
	::System::Boolean Field_1_0; // 0x40
	::System::Boolean Field_1_7; // 0x41
	::System::Boolean Field_1_9; // 0x42
	::System::Boolean Field_1_1; // 0x43
	::Enum_3_4354CA68936C9080 Field_1_4; // 0x44

	::System::Void _ctor(::MoleMole::ConfigNewbie_TargetPath* a1, ::MoleMole::UIBaseController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigNewbie_TargetPath*, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_1_A308ED25CCFC7E1D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::MoleMole::ConfigNewbie_HighLightData* a1, ::MoleMole::UIBaseController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigNewbie_HighLightData*, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_1_A308ED25CCFC7E1D__CTOR_1_OFFSET))(this, a1, a2);
	}

	::MoleMole::ConfigNewbie_TargetPath* Method_1_C81277B215275574()
	{
		return ((::MoleMole::ConfigNewbie_TargetPath*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A308ED25CCFC7E1D_METHOD_1_C81277B215275574_OFFSET))(this);
	}

	::MoleMole::UIBaseController* Method_1_B3ADE91382BF0B05()
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A308ED25CCFC7E1D_METHOD_1_B3ADE91382BF0B05_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A308ED25CCFC7E1D_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A308ED25CCFC7E1D_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_F1D40B323FAD3DCE(::MoleMole::UIBaseController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_1_A308ED25CCFC7E1D_METHOD_1_F1D40B323FAD3DCE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_35B574BF35040A2E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A308ED25CCFC7E1D_METHOD_1_35B574BF35040A2E_OFFSET))(this);
	}

	::System::Boolean Method_1_C68098BF95F367E9(::Enum_3_F9160878A7322AE9& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_F9160878A7322AE9&))((::PBYTE)hIl2Cpp + CLASS_1_A308ED25CCFC7E1D_METHOD_1_C68098BF95F367E9_OFFSET))(this, a1);
	}
};
