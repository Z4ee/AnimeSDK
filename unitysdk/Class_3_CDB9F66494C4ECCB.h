#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2F64460E7C7A0A4C.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Struct_2_3C85541F28E72E6B.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_2_04999CCE6E77B4A2_1;
class Class_4_3E4A3C01978F4EAF;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class TurnBattleUnitBase; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIMonsterFantasyRoleItemWidgetController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }

#define CLASS_3_CDB9F66494C4ECCB_METHOD_3_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x119C5040)
#define CLASS_3_CDB9F66494C4ECCB_METHOD_3_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x119C46F0)
#define CLASS_3_CDB9F66494C4ECCB_METHOD_3_1F130271093617A5_OFFSET UNITYSDK_OFFSET(0x119C4A90)
#define CLASS_3_CDB9F66494C4ECCB_METHOD_3_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x119C48F0)
#define CLASS_3_CDB9F66494C4ECCB_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x119C4A10)
#define CLASS_3_CDB9F66494C4ECCB_METHOD_3_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x119C4FA0)
#define CLASS_3_CDB9F66494C4ECCB_METHOD_3_866057E5772343C9_1_OFFSET UNITYSDK_OFFSET(0x119C5F70)
#define CLASS_3_CDB9F66494C4ECCB_METHOD_3_866057E5772343C9_OFFSET UNITYSDK_OFFSET(0x119C56C0)
#define CLASS_3_CDB9F66494C4ECCB_METHOD_3_9C3D8ED2211D368B_OFFSET UNITYSDK_OFFSET(0x119C52A0)
#define CLASS_3_CDB9F66494C4ECCB_METHOD_3_BCC1EE49EAAACF06_OFFSET UNITYSDK_OFFSET(0x119C5940)
#define CLASS_3_CDB9F66494C4ECCB_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x119C5630)
#define CLASS_3_CDB9F66494C4ECCB_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x119C5780)
#define CLASS_3_CDB9F66494C4ECCB_METHOD_3_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x119C58B0)
#define CLASS_3_CDB9F66494C4ECCB_METHOD_3_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0x119C6030)
#define CLASS_3_CDB9F66494C4ECCB_METHOD_3_CA373AA1C7054598_5_OFFSET UNITYSDK_OFFSET(0x119C6170)
#define CLASS_3_CDB9F66494C4ECCB_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x119C55A0)
#define CLASS_3_CDB9F66494C4ECCB_METHOD_3_DB4B43E60DCCA4C1_OFFSET UNITYSDK_OFFSET(0x119C5810)
#define CLASS_3_CDB9F66494C4ECCB_METHOD_3_DF36652FF6AEAAC1_OFFSET UNITYSDK_OFFSET(0x119C60C0)
#define CLASS_3_CDB9F66494C4ECCB__CCTOR_OFFSET UNITYSDK_OFFSET(0x119C5560)
#define CLASS_3_CDB9F66494C4ECCB__CTOR_OFFSET UNITYSDK_OFFSET(0x119C5360)

inline static constexpr unsigned int Class_3_CDB9F66494C4ECCB_TypeDefinitionIndex = 41254;

class Class_3_CDB9F66494C4ECCB : public ::Class_2_2F64460E7C7A0A4C<::Class_3_CDB9F66494C4ECCB*>
{
public:
	static ::System::String** StaticGet_Field_3_3()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_CDB9F66494C4ECCB_TypeDefinitionIndex)->GetStaticField(0x440F0);
	}
	::System::Threading::CancellationTokenSource* Field_3_4; // 0x70
	::System::Collections::Generic::List_1<::Struct_2_3C85541F28E72E6B>* Field_3_6; // 0x78
	::Cysharp::Threading::Tasks::UniTask Field_3_11; // 0x80
	::System::Collections::Generic::List_1<::MoleMole::TurnBattleUnitBase*>* Field_3_1; // 0x90
	::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>* Field_3_10; // 0x98
	::System::Collections::Generic::List_1<::MoleMole::TurnBattleUnitBase*>* Field_3_0; // 0xA0
	::Class_4_3E4A3C01978F4EAF* Field_3_5; // 0xA8
	::System::Collections::Generic::List_1<::Struct_2_3C85541F28E72E6B>* Field_3_7; // 0xB0
	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::MoleMole::UIMonsterFantasyRoleItemWidgetController*, ::System::String*>>* Field_3_9; // 0xB8
	::Class_2_04999CCE6E77B4A2_1* Field_3_2; // 0xC0
	::System::Boolean Field_3_8; // 0xC8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CDB9F66494C4ECCB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_CDB9F66494C4ECCB__CCTOR_OFFSET))();
	}

	::System::Void Method_3_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CDB9F66494C4ECCB_METHOD_3_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_3_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CDB9F66494C4ECCB_METHOD_3_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CDB9F66494C4ECCB_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_3_1F130271093617A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CDB9F66494C4ECCB_METHOD_3_1F130271093617A5_OFFSET))(this);
	}

	::System::Void Method_3_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CDB9F66494C4ECCB_METHOD_3_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_3_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CDB9F66494C4ECCB_METHOD_3_078D85152011B919_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_3_9C3D8ED2211D368B(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_3_CDB9F66494C4ECCB_METHOD_3_9C3D8ED2211D368B_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CDB9F66494C4ECCB_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CDB9F66494C4ECCB_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::MoleMole::ScrollViewItemWidgetController* Method_3_866057E5772343C9(::System::Func_1<::MoleMole::UIControlReference*>* a1)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + CLASS_3_CDB9F66494C4ECCB_METHOD_3_866057E5772343C9_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CDB9F66494C4ECCB_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_3_DB4B43E60DCCA4C1(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_CDB9F66494C4ECCB_METHOD_3_DB4B43E60DCCA4C1_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CDB9F66494C4ECCB_METHOD_3_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Void Method_3_BCC1EE49EAAACF06(::System::Collections::Generic::List_1<::MoleMole::TurnBattleUnitBase*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::TurnBattleUnitBase*>*))((::PBYTE)hIl2Cpp + CLASS_3_CDB9F66494C4ECCB_METHOD_3_BCC1EE49EAAACF06_OFFSET))(this, a1);
	}

	::MoleMole::ScrollViewItemWidgetController* Method_3_866057E5772343C9_1(::System::Func_1<::MoleMole::UIControlReference*>* a1)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + CLASS_3_CDB9F66494C4ECCB_METHOD_3_866057E5772343C9_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CDB9F66494C4ECCB_METHOD_3_CA373AA1C7054598_4_OFFSET))(this);
	}

	::System::Int32 Method_3_DF36652FF6AEAAC1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_CDB9F66494C4ECCB_METHOD_3_DF36652FF6AEAAC1_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CDB9F66494C4ECCB_METHOD_3_CA373AA1C7054598_5_OFFSET))(this);
	}
};
