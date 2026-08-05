#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/ChannelEnumType.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUECHANNELENUMTYPE_GETCLONEFROMENUM_OFFSET UNITYSDK_OFFSET(0x13A95760)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUECHANNELENUMTYPE_SYNCENABLE_1_OFFSET UNITYSDK_OFFSET(0x7DA0D0)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUECHANNELENUMTYPE_SYNCENABLE_OFFSET UNITYSDK_OFFSET(0x7DA060)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUECHANNELENUMTYPE_SYNCVALUE_1_OFFSET UNITYSDK_OFFSET(0x7DA000)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUECHANNELENUMTYPE_SYNCVALUE_OFFSET UNITYSDK_OFFSET(0x7D9FA0)

namespace MoleMole::MaterialPropertyModifierEnumDefine
{
	inline static constexpr unsigned int MaterialPropertyModifierValueChannelEnumType_TypeDefinitionIndex = 46482;

	struct alignas(1) MaterialPropertyModifierValueChannelEnumType
	{
		::System::Boolean active; // 0x10
		::System::Boolean enable; // 0x11
		::MoleMole::MaterialPropertyModifierEnumDefine::ChannelEnumType value; // 0x12

		/*
		::System::Void SyncValue(::MoleMole::StaticFloatMaterialModifier& to)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::StaticFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUECHANNELENUMTYPE_SYNCVALUE_OFFSET))(this, to);
		}
		*/

		/*
		::System::Void SyncValue_1(::MoleMole::StaticKeywordFloatMaterialModifier& to)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::StaticKeywordFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUECHANNELENUMTYPE_SYNCVALUE_1_OFFSET))(this, to);
		}
		*/

		/*
		::System::Void SyncEnable(::MoleMole::StaticFloatMaterialModifier& to, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::StaticFloatMaterialModifier&, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUECHANNELENUMTYPE_SYNCENABLE_OFFSET))(this, to, stop);
		}
		*/

		/*
		::System::Void SyncEnable_1(::MoleMole::StaticKeywordFloatMaterialModifier& to, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::StaticKeywordFloatMaterialModifier&, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUECHANNELENUMTYPE_SYNCENABLE_1_OFFSET))(this, to, stop);
		}
		*/

		static ::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueChannelEnumType GetCloneFromEnum(::System::Boolean useIt, ::MoleMole::MaterialPropertyModifierEnumDefine::ChannelEnumType enumVal)
		{
			return ((::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueChannelEnumType(*)(::System::Boolean, ::MoleMole::MaterialPropertyModifierEnumDefine::ChannelEnumType))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUECHANNELENUMTYPE_GETCLONEFROMENUM_OFFSET))(useIt, enumVal);
		}
	};
}
