#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F78D134D9EB09E5B.h"
#include "unitysdk/MoleMole/Config/ConfigChessboardShowPopWindowNode_ChessboardShowPopType.h"

class Class_1_43BD383C98B4C0C5_19;
class Class_1_C376DB68B1C74261;
namespace MoleMole { class UIWindowController; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System { class EventArgs; }

#define CLASS_4_7A771077DB7626D1_METHOD_4_151350DB6BD4CAA1_OFFSET UNITYSDK_OFFSET(0x15082AE0)
#define CLASS_4_7A771077DB7626D1_METHOD_4_2FE2714C60BDE2E2_OFFSET UNITYSDK_OFFSET(0x15081F60)
#define CLASS_4_7A771077DB7626D1_METHOD_4_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x15082070)
#define CLASS_4_7A771077DB7626D1_METHOD_4_B184336BB2F50398_OFFSET UNITYSDK_OFFSET(0x150828B0)
#define CLASS_4_7A771077DB7626D1_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15082AF0)
#define CLASS_4_7A771077DB7626D1_METHOD_4_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x15082B80)
#define CLASS_4_7A771077DB7626D1__CTOR_OFFSET UNITYSDK_OFFSET(0x15082860)

inline static constexpr unsigned int Class_4_7A771077DB7626D1_TypeDefinitionIndex = 59828;

class Class_4_7A771077DB7626D1 : public ::Class_3_F78D134D9EB09E5B
{
public:
	::MoleMole::UIWindowController* Field_4_2; // 0x40
	::MoleMole::Config::ConfigChessboardShowPopWindowNode_ChessboardShowPopType Field_4_0; // 0x48
	::System::Int32 Field_4_1; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7A771077DB7626D1__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_2FE2714C60BDE2E2(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_4_7A771077DB7626D1_METHOD_4_2FE2714C60BDE2E2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_4_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7A771077DB7626D1_METHOD_4_3D2B77EBCAE390AB_OFFSET))(this);
	}

	::System::Void Method_4_B184336BB2F50398(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_4_7A771077DB7626D1_METHOD_4_B184336BB2F50398_OFFSET))(this, a1);
	}

	::System::Void Method_4_151350DB6BD4CAA1(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_4_7A771077DB7626D1_METHOD_4_151350DB6BD4CAA1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7A771077DB7626D1_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_4_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7A771077DB7626D1_METHOD_4_E3DE31A03057E055_OFFSET))(this);
	}
};
