#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/Struct_2_1551692CEF36E660.h"
#include "unitysdk/Struct_2_8753CC6334E73CD4.h"
#include "unitysdk/Struct_2_B84868A9FB142439.h"
#include "unitysdk/Struct_2_DF90B2BD73749811.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_9;
class Class_1_1C30CE192ABE4C54_Class_0_16E7307DCC43CB2C_1;
class Class_1_945ACFB1FEBC7A2C;
namespace RPG::GameCore { class PropertyAdsorptionConfig; }
namespace SimpleJSON { class JSONNode; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_1C30CE192ABE4C54_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B91F0D0)
#define CLASS_1_1C30CE192ABE4C54_GET_ALIASEVALUATOR_OFFSET UNITYSDK_OFFSET(0x1B91D960)
#define CLASS_1_1C30CE192ABE4C54_METHOD_1_02C287422B386659_OFFSET UNITYSDK_OFFSET(0x1B91DAC0)
#define CLASS_1_1C30CE192ABE4C54_METHOD_1_1DB96A2758C8B527_OFFSET UNITYSDK_OFFSET(0x1B91E670)
#define CLASS_1_1C30CE192ABE4C54_METHOD_1_357087ACCACF9334_OFFSET UNITYSDK_OFFSET(0x1B91E7A0)
#define CLASS_1_1C30CE192ABE4C54_METHOD_1_3C969CD55DAD126C_OFFSET UNITYSDK_OFFSET(0x1B91E830)
#define CLASS_1_1C30CE192ABE4C54_METHOD_1_6249445325A6227E_OFFSET UNITYSDK_OFFSET(0x1B91DE80)
#define CLASS_1_1C30CE192ABE4C54_METHOD_1_65CF685B19AB5EC4_OFFSET UNITYSDK_OFFSET(0x1B91E580)
#define CLASS_1_1C30CE192ABE4C54_METHOD_1_6D49D2D675B48A6A_OFFSET UNITYSDK_OFFSET(0x1B91E800)
#define CLASS_1_1C30CE192ABE4C54_METHOD_1_7ED0D1E24E8DA316_OFFSET UNITYSDK_OFFSET(0x1B91DC20)
#define CLASS_1_1C30CE192ABE4C54_METHOD_1_833B865BB8CBD7BD_OFFSET UNITYSDK_OFFSET(0x1B91F130)
#define CLASS_1_1C30CE192ABE4C54_METHOD_1_8C0940EDCE7AA0CE_OFFSET UNITYSDK_OFFSET(0x1B91DCC0)
#define CLASS_1_1C30CE192ABE4C54_METHOD_1_A1102AC2D9D115F4_OFFSET UNITYSDK_OFFSET(0x1B91F540)
#define CLASS_1_1C30CE192ABE4C54_METHOD_1_DE7CE8189856BFFB_OFFSET UNITYSDK_OFFSET(0x1B91D980)
#define CLASS_1_1C30CE192ABE4C54_METHOD_1_E411BCC5E73CE129_OFFSET UNITYSDK_OFFSET(0x1B91ED70)
#define CLASS_1_1C30CE192ABE4C54_METHOD_1_EE4C5F6B5F6CB7AD_OFFSET UNITYSDK_OFFSET(0x1B91DE30)
#define CLASS_1_1C30CE192ABE4C54_SET_ALIASEVALUATOR_OFFSET UNITYSDK_OFFSET(0x1B91D970)
#define CLASS_1_1C30CE192ABE4C54__CTOR_OFFSET UNITYSDK_OFFSET(0x1B920D50)

inline static constexpr unsigned int Class_1_1C30CE192ABE4C54_TypeDefinitionIndex = 10493;

class Class_1_1C30CE192ABE4C54 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_9* _AliasEvaluator_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::Class_1_1C30CE192ABE4C54_Class_0_16E7307DCC43CB2C_1*>* Field_1_1; // 0x18
	::System::Action_3<::RPG::GameCore::StringHash, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C30CE192ABE4C54__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_9* get_AliasEvaluator()
	{
		return ((::Class_0_16E4307DCC419505_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C30CE192ABE4C54_GET_ALIASEVALUATOR_OFFSET))(this);
	}

	::System::Void set_AliasEvaluator(::Class_0_16E4307DCC419505_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_9*))((::PBYTE)hIl2Cpp + CLASS_1_1C30CE192ABE4C54_SET_ALIASEVALUATOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_DE7CE8189856BFFB(::RPG::GameCore::StringHash a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + CLASS_1_1C30CE192ABE4C54_METHOD_1_DE7CE8189856BFFB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_02C287422B386659(::RPG::GameCore::StringHash a1, ::RPG::GameCore::FixPoint& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_1_1C30CE192ABE4C54_METHOD_1_02C287422B386659_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_7ED0D1E24E8DA316(::RPG::GameCore::StringHash a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + CLASS_1_1C30CE192ABE4C54_METHOD_1_7ED0D1E24E8DA316_OFFSET))(this, a1);
	}

	::Struct_2_B84868A9FB142439 Method_1_8C0940EDCE7AA0CE(::RPG::GameCore::StringHash a1)
	{
		return ((::Struct_2_B84868A9FB142439(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + CLASS_1_1C30CE192ABE4C54_METHOD_1_8C0940EDCE7AA0CE_OFFSET))(this, a1);
	}

	::System::Void Method_1_EE4C5F6B5F6CB7AD(::RPG::GameCore::StringHash a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_1C30CE192ABE4C54_METHOD_1_EE4C5F6B5F6CB7AD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6249445325A6227E(::Struct_2_DF90B2BD73749811 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_DF90B2BD73749811))((::PBYTE)hIl2Cpp + CLASS_1_1C30CE192ABE4C54_METHOD_1_6249445325A6227E_OFFSET))(this, a1);
	}

	::System::Void Method_1_65CF685B19AB5EC4(::Struct_2_8753CC6334E73CD4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_8753CC6334E73CD4))((::PBYTE)hIl2Cpp + CLASS_1_1C30CE192ABE4C54_METHOD_1_65CF685B19AB5EC4_OFFSET))(this, a1);
	}

	::System::Void Method_1_1DB96A2758C8B527(::Struct_2_1551692CEF36E660 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_1551692CEF36E660))((::PBYTE)hIl2Cpp + CLASS_1_1C30CE192ABE4C54_METHOD_1_1DB96A2758C8B527_OFFSET))(this, a1);
	}

	::System::Void Method_1_357087ACCACF9334(::RPG::GameCore::StringHash a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + CLASS_1_1C30CE192ABE4C54_METHOD_1_357087ACCACF9334_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6D49D2D675B48A6A(::RPG::GameCore::StringHash a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + CLASS_1_1C30CE192ABE4C54_METHOD_1_6D49D2D675B48A6A_OFFSET))(this, a1);
	}

	::System::Void Method_1_3C969CD55DAD126C(::RPG::GameCore::StringHash a1, ::RPG::GameCore::FixPoint a2, ::Class_1_945ACFB1FEBC7A2C* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint, ::Class_1_945ACFB1FEBC7A2C*))((::PBYTE)hIl2Cpp + CLASS_1_1C30CE192ABE4C54_METHOD_1_3C969CD55DAD126C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_E411BCC5E73CE129(::Class_1_1C30CE192ABE4C54* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1C30CE192ABE4C54*))((::PBYTE)hIl2Cpp + CLASS_1_1C30CE192ABE4C54_METHOD_1_E411BCC5E73CE129_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C30CE192ABE4C54_DISPOSE_OFFSET))(this);
	}

	static ::RPG::GameCore::PropertyAdsorptionConfig* Method_1_833B865BB8CBD7BD(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::PropertyAdsorptionConfig*(*)(::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_1C30CE192ABE4C54_METHOD_1_833B865BB8CBD7BD_OFFSET))(a1);
	}

	::System::Void Method_1_A1102AC2D9D115F4(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_1C30CE192ABE4C54_METHOD_1_A1102AC2D9D115F4_OFFSET))(this, a1);
	}
};
