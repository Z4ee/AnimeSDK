#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/ScreenMaskUVType.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUESCREENMASKUVTYPE_GETCLONEFROMENUM_OFFSET UNITYSDK_OFFSET(0x13849200)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUESCREENMASKUVTYPE_SYNCENABLE_1_OFFSET UNITYSDK_OFFSET(0x7D3540)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUESCREENMASKUVTYPE_SYNCENABLE_OFFSET UNITYSDK_OFFSET(0x7D34D0)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUESCREENMASKUVTYPE_SYNCVALUE_1_OFFSET UNITYSDK_OFFSET(0x7D3470)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUESCREENMASKUVTYPE_SYNCVALUE_OFFSET UNITYSDK_OFFSET(0x7D3410)

namespace MoleMole::MaterialPropertyModifierEnumDefine
{
	inline static constexpr unsigned int MaterialPropertyModifierValueScreenMaskUVType_TypeDefinitionIndex = 47541;

	struct alignas(1) MaterialPropertyModifierValueScreenMaskUVType
	{
		::System::Boolean active; // 0x10
		::System::Boolean enable; // 0x11
		::MoleMole::MaterialPropertyModifierEnumDefine::ScreenMaskUVType value; // 0x12

		/*
		::System::Void SyncValue(::MoleMole::StaticFloatMaterialModifier& to)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::StaticFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUESCREENMASKUVTYPE_SYNCVALUE_OFFSET))(this, to);
		}
		*/

		/*
		::System::Void SyncValue_1(::MoleMole::StaticKeywordFloatMaterialModifier& to)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::StaticKeywordFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUESCREENMASKUVTYPE_SYNCVALUE_1_OFFSET))(this, to);
		}
		*/

		/*
		::System::Void SyncEnable(::MoleMole::StaticFloatMaterialModifier& to, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::StaticFloatMaterialModifier&, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUESCREENMASKUVTYPE_SYNCENABLE_OFFSET))(this, to, stop);
		}
		*/

		/*
		::System::Void SyncEnable_1(::MoleMole::StaticKeywordFloatMaterialModifier& to, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::StaticKeywordFloatMaterialModifier&, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUESCREENMASKUVTYPE_SYNCENABLE_1_OFFSET))(this, to, stop);
		}
		*/

		static ::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueScreenMaskUVType GetCloneFromEnum(::System::Boolean useIt, ::MoleMole::MaterialPropertyModifierEnumDefine::ScreenMaskUVType enumVal)
		{
			return ((::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueScreenMaskUVType(*)(::System::Boolean, ::MoleMole::MaterialPropertyModifierEnumDefine::ScreenMaskUVType))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUESCREENMASKUVTYPE_GETCLONEFROMENUM_OFFSET))(useIt, enumVal);
		}
	};
}
