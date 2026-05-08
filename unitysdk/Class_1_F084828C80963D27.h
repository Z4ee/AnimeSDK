#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F084828C80963D27_Struct_2_25AF7E5CD29C404A_3.h"
#include "unitysdk/Enum_3_AF372E25E8B1C1D6.h"
#include "unitysdk/MoleMole/UICameraAtom.h"
#include "unitysdk/System/Object.h"

class Class_1_47EB23CB5C4B2615_5;
class Class_1_A677A4EF8BA06398;
class Class_2_572FB0305B81FA8F;
class Class_2_5F64140FAB2210F3;
namespace MoleMole { class UIActivityRhythmClickPageController; }
namespace MoleMole::Config { class ConfigCameraNoise; }
namespace MoleMole::Config { class ConfigHollowCameraShake; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_F084828C80963D27_METHOD_1_0FD2DEE24914FC05_OFFSET UNITYSDK_OFFSET(0x12A991C0)
#define CLASS_1_F084828C80963D27_METHOD_1_276DFEA2261D9B30_OFFSET UNITYSDK_OFFSET(0x12A989C0)
#define CLASS_1_F084828C80963D27_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x12A97FB0)
#define CLASS_1_F084828C80963D27_METHOD_1_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x12A985D0)
#define CLASS_1_F084828C80963D27_METHOD_1_5AC715804517063C_OFFSET UNITYSDK_OFFSET(0x12A978D0)
#define CLASS_1_F084828C80963D27_METHOD_1_67F7C576EFF8D690_OFFSET UNITYSDK_OFFSET(0x12A98030)
#define CLASS_1_F084828C80963D27_METHOD_1_9126C9C94FC0FA6A_OFFSET UNITYSDK_OFFSET(0x12A98860)
#define CLASS_1_F084828C80963D27_METHOD_1_927C003551530883_OFFSET UNITYSDK_OFFSET(0x12A98CF0)
#define CLASS_1_F084828C80963D27_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x12A98220)
#define CLASS_1_F084828C80963D27_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x12A98F00)
#define CLASS_1_F084828C80963D27_METHOD_1_9711FBACEDA060A2_OFFSET UNITYSDK_OFFSET(0x12A982C0)
#define CLASS_1_F084828C80963D27_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x12A98B60)
#define CLASS_1_F084828C80963D27_METHOD_1_998E122F46014853_OFFSET UNITYSDK_OFFSET(0x12A97500)
#define CLASS_1_F084828C80963D27_METHOD_1_A8F6F688241E6DBC_OFFSET UNITYSDK_OFFSET(0x12A97770)
#define CLASS_1_F084828C80963D27_METHOD_1_B3A88D7849969A71_OFFSET UNITYSDK_OFFSET(0x12A97700)
#define CLASS_1_F084828C80963D27_METHOD_1_B49E4F7706129DBE_OFFSET UNITYSDK_OFFSET(0x12A97AD0)
#define CLASS_1_F084828C80963D27_METHOD_1_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x12A99380)
#define CLASS_1_F084828C80963D27_METHOD_1_CA21411944361A57_OFFSET UNITYSDK_OFFSET(0x12A992D0)
#define CLASS_1_F084828C80963D27_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12A98810)
#define CLASS_1_F084828C80963D27_METHOD_1_CC40F44864B779DE_OFFSET UNITYSDK_OFFSET(0x12A97380)
#define CLASS_1_F084828C80963D27_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x12A98F90)
#define CLASS_1_F084828C80963D27_METHOD_1_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x12A97F50)
#define CLASS_1_F084828C80963D27__CTOR_OFFSET UNITYSDK_OFFSET(0x12A97300)

inline static constexpr unsigned int Class_1_F084828C80963D27_TypeDefinitionIndex = 82494;

class Class_1_F084828C80963D27 : public ::System::Object
{
public:
	::MoleMole::UIActivityRhythmClickPageController* Field_1_0; // 0x10
	::System::Action_1<::MoleMole::UICameraAtom>* Field_1_10; // 0x18
	::Class_2_572FB0305B81FA8F* Field_1_3; // 0x20
	::System::Collections::Generic::List_1<::Class_1_A677A4EF8BA06398*>* Field_1_11; // 0x28
	::Class_2_5F64140FAB2210F3* Field_1_8; // 0x30
	::Class_1_47EB23CB5C4B2615_5* Field_1_2; // 0x38
	::MoleMole::Config::ConfigCameraNoise* Field_1_7; // 0x40
	::System::Func_1<::MoleMole::UICameraAtom>* Field_1_9; // 0x48
	::Enum_3_AF372E25E8B1C1D6 Field_1_1; // 0x50
	::Class_1_F084828C80963D27_Struct_2_25AF7E5CD29C404A_3 Field_1_5; // 0x54
	::Class_1_F084828C80963D27_Struct_2_25AF7E5CD29C404A_3 Field_1_4; // 0x74
	::Class_1_F084828C80963D27_Struct_2_25AF7E5CD29C404A_3 Field_1_6; // 0x94

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F084828C80963D27__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CC40F44864B779DE(::MoleMole::UIActivityRhythmClickPageController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIActivityRhythmClickPageController*))((::PBYTE)hIl2Cpp + CLASS_1_F084828C80963D27_METHOD_1_CC40F44864B779DE_OFFSET))(this, a1);
	}

	::System::Void Method_1_B3A88D7849969A71(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F084828C80963D27_METHOD_1_B3A88D7849969A71_OFFSET))(this, a1);
	}

	::System::Void Method_1_B49E4F7706129DBE(::Class_2_5F64140FAB2210F3* a1, ::MoleMole::Config::ConfigHollowCameraShake* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5F64140FAB2210F3*, ::MoleMole::Config::ConfigHollowCameraShake*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F084828C80963D27_METHOD_1_B49E4F7706129DBE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F084828C80963D27_METHOD_1_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::System::Void Method_1_5AC715804517063C(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F084828C80963D27_METHOD_1_5AC715804517063C_OFFSET))(this, a1);
	}

	::System::Void Method_1_67F7C576EFF8D690(::MoleMole::Config::ConfigHollowCameraShake* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowCameraShake*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F084828C80963D27_METHOD_1_67F7C576EFF8D690_OFFSET))(this, a1, a2);
	}

	::MoleMole::UICameraAtom Method_1_9711FBACEDA060A2()
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F084828C80963D27_METHOD_1_9711FBACEDA060A2_OFFSET))(this);
	}

	::System::Void Method_1_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F084828C80963D27_METHOD_1_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F084828C80963D27_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_9126C9C94FC0FA6A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F084828C80963D27_METHOD_1_9126C9C94FC0FA6A_OFFSET))(this);
	}

	::System::Void Method_1_276DFEA2261D9B30(::MoleMole::UICameraAtom a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + CLASS_1_F084828C80963D27_METHOD_1_276DFEA2261D9B30_OFFSET))(this, a1);
	}

	::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F084828C80963D27_METHOD_1_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F084828C80963D27_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F084828C80963D27_METHOD_1_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F084828C80963D27_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_A8F6F688241E6DBC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F084828C80963D27_METHOD_1_A8F6F688241E6DBC_OFFSET))(this);
	}

	::System::Void Method_1_927C003551530883(::MoleMole::Config::ConfigCameraNoise* a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::AnimationCurve* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraNoise*, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_F084828C80963D27_METHOD_1_927C003551530883_OFFSET))(this, a1, a2, a3, a4);
	}

	::MoleMole::UICameraAtom Method_1_CA21411944361A57()
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F084828C80963D27_METHOD_1_CA21411944361A57_OFFSET))(this);
	}

	::System::Void Method_1_998E122F46014853()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F084828C80963D27_METHOD_1_998E122F46014853_OFFSET))(this);
	}

	::MoleMole::UICameraAtom Method_1_0FD2DEE24914FC05()
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F084828C80963D27_METHOD_1_0FD2DEE24914FC05_OFFSET))(this);
	}

	::System::Void Method_1_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F084828C80963D27_METHOD_1_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F084828C80963D27_METHOD_1_9681042564541CD6_1_OFFSET))(this);
	}
};
