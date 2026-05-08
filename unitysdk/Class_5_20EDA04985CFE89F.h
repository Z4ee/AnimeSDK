#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_86126C0ABC4F0231.h"

class Class_1_2BEAA93324417DF4;
class Class_1_C376DB68B1C74261;
class Class_2_9DCE2FC33F67E8A2;
namespace MoleMole::Config { class ConfigWaitChangeGridNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System { class EventArgs; }

#define CLASS_5_20EDA04985CFE89F_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xF086500)
#define CLASS_5_20EDA04985CFE89F_METHOD_5_92F2FCA8316DB56D_OFFSET UNITYSDK_OFFSET(0xF086660)
#define CLASS_5_20EDA04985CFE89F_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xF0866F0)
#define CLASS_5_20EDA04985CFE89F_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xF0865D0)
#define CLASS_5_20EDA04985CFE89F_METHOD_5_EF84252C23984F93_OFFSET UNITYSDK_OFFSET(0xF0862D0)
#define CLASS_5_20EDA04985CFE89F_METHOD_5_F2A1D3C2AD5054B1_OFFSET UNITYSDK_OFFSET(0xF086480)
#define CLASS_5_20EDA04985CFE89F__CTOR_OFFSET UNITYSDK_OFFSET(0xF086570)

inline static constexpr unsigned int Class_5_20EDA04985CFE89F_TypeDefinitionIndex = 67852;

class Class_5_20EDA04985CFE89F : public ::Class_4_86126C0ABC4F0231<::MoleMole::Config::ConfigWaitChangeGridNode*>
{
public:
	::Class_1_2BEAA93324417DF4* Field_5_0; // 0x40
	::System::Boolean Field_5_1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_20EDA04985CFE89F__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_EF84252C23984F93(::MoleMole::Config::ConfigWaitChangeGridNode* a1, ::Class_2_9DCE2FC33F67E8A2* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigWaitChangeGridNode*, ::Class_2_9DCE2FC33F67E8A2*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_5_20EDA04985CFE89F_METHOD_5_EF84252C23984F93_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_5_F2A1D3C2AD5054B1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_20EDA04985CFE89F_METHOD_5_F2A1D3C2AD5054B1_OFFSET))(this);
	}

	::System::Void Method_5_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_20EDA04985CFE89F_METHOD_5_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_5_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_20EDA04985CFE89F_METHOD_5_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_5_92F2FCA8316DB56D(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_5_20EDA04985CFE89F_METHOD_5_92F2FCA8316DB56D_OFFSET))(this, a1);
	}

	::System::Void Method_5_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_20EDA04985CFE89F_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
	}
};
