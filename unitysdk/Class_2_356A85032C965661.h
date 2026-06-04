#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionCountDownPreviewMode.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/Struct_2_BE9205D119086684_1.h"

class Class_0_16E4307DCC419505_401;
namespace RPG::GameCore { class BattleActionEventRow; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_356A85032C965661_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1064AFE0)
#define CLASS_2_356A85032C965661_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1064BC90)
#define CLASS_2_356A85032C965661_GET_ROWCONFIG_OFFSET UNITYSDK_OFFSET(0x1064BCB0)
#define CLASS_2_356A85032C965661_METHOD_2_045ADCAA80288B1B_OFFSET UNITYSDK_OFFSET(0x1064BB60)
#define CLASS_2_356A85032C965661_METHOD_2_1FC4CAF1D31EC204_OFFSET UNITYSDK_OFFSET(0x1064ABC0)
#define CLASS_2_356A85032C965661_METHOD_2_286A0309A4AE3440_OFFSET UNITYSDK_OFFSET(0x1064B270)
#define CLASS_2_356A85032C965661_METHOD_2_4567F7C89A1CD756_OFFSET UNITYSDK_OFFSET(0x1064B630)
#define CLASS_2_356A85032C965661_METHOD_2_80B07A5EC6B8F9F8_OFFSET UNITYSDK_OFFSET(0x1064B8A0)
#define CLASS_2_356A85032C965661_METHOD_2_8714CF4AE9195CA2_OFFSET UNITYSDK_OFFSET(0x1064B3E0)
#define CLASS_2_356A85032C965661_METHOD_2_8EFA7AE8C875AA71_OFFSET UNITYSDK_OFFSET(0x1064B780)
#define CLASS_2_356A85032C965661_METHOD_2_990F767745863EC7_OFFSET UNITYSDK_OFFSET(0x1064BAC0)
#define CLASS_2_356A85032C965661_METHOD_2_A9DAF3FE2888211B_OFFSET UNITYSDK_OFFSET(0x1064AF00)
#define CLASS_2_356A85032C965661_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x1064B220)
#define CLASS_2_356A85032C965661_METHOD_2_C9F59B9D8CCA4DFF_1_OFFSET UNITYSDK_OFFSET(0x1064B040)
#define CLASS_2_356A85032C965661_METHOD_2_C9F59B9D8CCA4DFF_OFFSET UNITYSDK_OFFSET(0x1064AD20)
#define CLASS_2_356A85032C965661_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1064BA70)
#define CLASS_2_356A85032C965661_METHOD_2_DFB814365CC3427C_OFFSET UNITYSDK_OFFSET(0x1064B6D0)
#define CLASS_2_356A85032C965661_SET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1064BCA0)
#define CLASS_2_356A85032C965661_SET_ROWCONFIG_OFFSET UNITYSDK_OFFSET(0x1064BCC0)
#define CLASS_2_356A85032C965661__CTOR_OFFSET UNITYSDK_OFFSET(0x1064AAE0)
#define CLASS_2_356A85032C965661__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x1064AB20)
#define CLASS_2_356A85032C965661___IFIXBASEPROXY__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x1064BCD0)

inline static constexpr unsigned int Class_2_356A85032C965661_TypeDefinitionIndex = 53814;

class Class_2_356A85032C965661 : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_0; // 0x18
	::System::String* _Description_k__BackingField; // 0x20
	::RPG::GameCore::GameEntity* Field_2_2; // 0x28
	::RPG::GameCore::BattleActionEventRow* _RowConfig_k__BackingField; // 0x30
	::System::Boolean Field_2_4; // 0x38
	::System::Boolean Field_2_5; // 0x39
	::System::Int32 Field_2_6; // 0x3C
	::System::UInt32 Field_2_7; // 0x40
	::System::Int32 Field_2_8; // 0x44
	::System::Int32 Field_2_9; // 0x48
	::RPG::GameCore::ActionCountDownPreviewMode Field_2_10; // 0x4C
	::System::Int32 Field_2_11; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_356A85032C965661__CTOR_OFFSET))(this);
	}

	::System::Void _OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_356A85032C965661__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_356A85032C965661_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_A9DAF3FE2888211B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_356A85032C965661_METHOD_2_A9DAF3FE2888211B_OFFSET))(this, a1);
	}

	::System::Void Method_2_C9F59B9D8CCA4DFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_356A85032C965661_METHOD_2_C9F59B9D8CCA4DFF_OFFSET))(this);
	}

	::System::Void Method_2_C9F59B9D8CCA4DFF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_356A85032C965661_METHOD_2_C9F59B9D8CCA4DFF_1_OFFSET))(this);
	}

	::System::Void Method_2_286A0309A4AE3440(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_356A85032C965661_METHOD_2_286A0309A4AE3440_OFFSET))(this, a1);
	}

	::System::Void Method_2_4567F7C89A1CD756(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_356A85032C965661_METHOD_2_4567F7C89A1CD756_OFFSET))(this, a1);
	}

	::System::Void Method_2_DFB814365CC3427C(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_356A85032C965661_METHOD_2_DFB814365CC3427C_OFFSET))(this, a1);
	}

	::System::Void Method_2_8EFA7AE8C875AA71(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_356A85032C965661_METHOD_2_8EFA7AE8C875AA71_OFFSET))(this, a1);
	}

	::System::Void Method_2_8714CF4AE9195CA2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_356A85032C965661_METHOD_2_8714CF4AE9195CA2_OFFSET))(this);
	}

	::System::Void Method_2_80B07A5EC6B8F9F8(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_356A85032C965661_METHOD_2_80B07A5EC6B8F9F8_OFFSET))(this, a1);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_356A85032C965661_METHOD_2_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_356A85032C965661_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_990F767745863EC7(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_356A85032C965661_METHOD_2_990F767745863EC7_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_1FC4CAF1D31EC204()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_356A85032C965661_METHOD_2_1FC4CAF1D31EC204_OFFSET))(this);
	}

	::System::Boolean Method_2_045ADCAA80288B1B(::Struct_2_BE9205D119086684_1 a1, ::System::Int32& a2, ::System::Boolean& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_BE9205D119086684_1, ::System::Int32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_2_356A85032C965661_METHOD_2_045ADCAA80288B1B_OFFSET))(this, a1, a2, a3);
	}

	::System::String* get_Description()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_356A85032C965661_GET_DESCRIPTION_OFFSET))(this);
	}

	::System::Void set_Description(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_356A85032C965661_SET_DESCRIPTION_OFFSET))(this, a1);
	}

	::RPG::GameCore::BattleActionEventRow* get_RowConfig()
	{
		return ((::RPG::GameCore::BattleActionEventRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_356A85032C965661_GET_ROWCONFIG_OFFSET))(this);
	}

	::System::Void set_RowConfig(::RPG::GameCore::BattleActionEventRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleActionEventRow*))((::PBYTE)hIl2Cpp + CLASS_2_356A85032C965661_SET_ROWCONFIG_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_356A85032C965661___IFIXBASEPROXY__ONINITOWNERREF_OFFSET))(this);
	}
};
