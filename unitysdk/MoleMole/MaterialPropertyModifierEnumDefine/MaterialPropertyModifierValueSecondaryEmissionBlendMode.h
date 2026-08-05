#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/SecondaryEmissionBlendMode.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUESECONDARYEMISSIONBLENDMODE_GETCLONEFROMENUM_OFFSET UNITYSDK_OFFSET(0x1908EA00)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUESECONDARYEMISSIONBLENDMODE_SYNCENABLE_1_OFFSET UNITYSDK_OFFSET(0x88E410)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUESECONDARYEMISSIONBLENDMODE_SYNCENABLE_OFFSET UNITYSDK_OFFSET(0x88E3A0)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUESECONDARYEMISSIONBLENDMODE_SYNCVALUE_1_OFFSET UNITYSDK_OFFSET(0x88E340)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUESECONDARYEMISSIONBLENDMODE_SYNCVALUE_OFFSET UNITYSDK_OFFSET(0x88E2E0)

namespace MoleMole::MaterialPropertyModifierEnumDefine
{
	inline static constexpr unsigned int MaterialPropertyModifierValueSecondaryEmissionBlendMode_TypeDefinitionIndex = 63673;

	struct alignas(1) MaterialPropertyModifierValueSecondaryEmissionBlendMode
	{
		::System::Boolean active; // 0x10
		::System::Boolean enable; // 0x11
		::MoleMole::MaterialPropertyModifierEnumDefine::SecondaryEmissionBlendMode value; // 0x12

		/*
		::System::Void SyncValue(::MoleMole::StaticFloatMaterialModifier& to)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::StaticFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUESECONDARYEMISSIONBLENDMODE_SYNCVALUE_OFFSET))(this, to);
		}
		*/

		/*
		::System::Void SyncValue_1(::MoleMole::StaticKeywordFloatMaterialModifier& to)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::StaticKeywordFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUESECONDARYEMISSIONBLENDMODE_SYNCVALUE_1_OFFSET))(this, to);
		}
		*/

		/*
		::System::Void SyncEnable(::MoleMole::StaticFloatMaterialModifier& to, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::StaticFloatMaterialModifier&, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUESECONDARYEMISSIONBLENDMODE_SYNCENABLE_OFFSET))(this, to, stop);
		}
		*/

		/*
		::System::Void SyncEnable_1(::MoleMole::StaticKeywordFloatMaterialModifier& to, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::StaticKeywordFloatMaterialModifier&, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUESECONDARYEMISSIONBLENDMODE_SYNCENABLE_1_OFFSET))(this, to, stop);
		}
		*/

		static ::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueSecondaryEmissionBlendMode GetCloneFromEnum(::System::Boolean useIt, ::MoleMole::MaterialPropertyModifierEnumDefine::SecondaryEmissionBlendMode enumVal)
		{
			return ((::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueSecondaryEmissionBlendMode(*)(::System::Boolean, ::MoleMole::MaterialPropertyModifierEnumDefine::SecondaryEmissionBlendMode))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUESECONDARYEMISSIONBLENDMODE_GETCLONEFROMENUM_OFFSET))(useIt, enumVal);
		}
	};
}
