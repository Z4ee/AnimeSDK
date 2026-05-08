#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E1E8F78EF830D7DA.h"
#include "unitysdk/MoleMole/Config/IndicatorLightType.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/Struct_2_6E23A591AC26A31E.h"
#include "unitysdk/Struct_2_C2FD185AAA4AC980.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_3_EB0B97B7E66ACE0E_Class_1_FB0A08A3A3558640;
namespace MoleMole::Config { class ConfigHollowChessboardIndicatorLight; }
namespace MoleMole::Config { class IndicatorLightsPreset; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_EB0B97B7E66ACE0E_METHOD_3_151568AAE207BCE4_OFFSET UNITYSDK_OFFSET(0x127CDAA0)
#define CLASS_3_EB0B97B7E66ACE0E_METHOD_3_2F04E40533CD3AB1_OFFSET UNITYSDK_OFFSET(0x127CDB50)
#define CLASS_3_EB0B97B7E66ACE0E_METHOD_3_35BAAC83AC1968DF_OFFSET UNITYSDK_OFFSET(0x127CD6E0)
#define CLASS_3_EB0B97B7E66ACE0E_METHOD_3_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x127CD640)
#define CLASS_3_EB0B97B7E66ACE0E_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x127CDAF0)
#define CLASS_3_EB0B97B7E66ACE0E_METHOD_3_CC11F98BFDAC025C_OFFSET UNITYSDK_OFFSET(0x127CDA40)
#define CLASS_3_EB0B97B7E66ACE0E_METHOD_3_D54259CF489D5811_OFFSET UNITYSDK_OFFSET(0x127CDD10)
#define CLASS_3_EB0B97B7E66ACE0E_METHOD_3_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x127CD5F0)
#define CLASS_3_EB0B97B7E66ACE0E__CTOR_OFFSET UNITYSDK_OFFSET(0x127CD550)

inline static constexpr unsigned int Class_3_EB0B97B7E66ACE0E_TypeDefinitionIndex = 47342;

class Class_3_EB0B97B7E66ACE0E : public ::Class_2_E1E8F78EF830D7DA
{
public:
	::System::Collections::Generic::List_1<::Class_3_EB0B97B7E66ACE0E_Class_1_FB0A08A3A3558640*>* Field_3_0; // 0x28
	::UnityEngine::Color Field_3_1; // 0x30
	::UnityEngine::Color Field_3_5; // 0x40
	::UnityEngine::Color Field_3_2; // 0x50
	::UnityEngine::Color Field_3_4; // 0x60
	::UnityEngine::Color Field_3_3; // 0x70

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_EB0B97B7E66ACE0E__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EB0B97B7E66ACE0E_METHOD_3_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::System::Void Method_3_35BAAC83AC1968DF(::Struct_2_6E23A591AC26A31E& a1, ::System::Single a2, ::MoleMole::HollowChessboard::HollowCell a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_6E23A591AC26A31E&, ::System::Single, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_EB0B97B7E66ACE0E_METHOD_3_35BAAC83AC1968DF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EB0B97B7E66ACE0E_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_151568AAE207BCE4(::MoleMole::Config::IndicatorLightType a1, ::UnityEngine::Color a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::IndicatorLightType, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_3_EB0B97B7E66ACE0E_METHOD_3_151568AAE207BCE4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_2F04E40533CD3AB1(::MoleMole::Config::IndicatorLightsPreset* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::IndicatorLightsPreset*))((::PBYTE)hIl2Cpp + CLASS_3_EB0B97B7E66ACE0E_METHOD_3_2F04E40533CD3AB1_OFFSET))(this, a1);
	}

	::System::Void Method_3_D54259CF489D5811(::Struct_2_C2FD185AAA4AC980 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_C2FD185AAA4AC980))((::PBYTE)hIl2Cpp + CLASS_3_EB0B97B7E66ACE0E_METHOD_3_D54259CF489D5811_OFFSET))(this, a1);
	}

	::System::Void Method_3_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EB0B97B7E66ACE0E_METHOD_3_89D1F247B9D324EE_OFFSET))(this);
	}

	static ::MoleMole::Config::ConfigHollowChessboardIndicatorLight* Method_3_CC11F98BFDAC025C()
	{
		return ((::MoleMole::Config::ConfigHollowChessboardIndicatorLight*(*)())((::PBYTE)hIl2Cpp + CLASS_3_EB0B97B7E66ACE0E_METHOD_3_CC11F98BFDAC025C_OFFSET))();
	}
};
