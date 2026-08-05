#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MatCapBlendMode.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEMATCAPBLENDMODE_GETCLONEFROMENUM_OFFSET UNITYSDK_OFFSET(0x118E1C50)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEMATCAPBLENDMODE_SYNCENABLE_1_OFFSET UNITYSDK_OFFSET(0x752E00)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEMATCAPBLENDMODE_SYNCENABLE_OFFSET UNITYSDK_OFFSET(0x752D90)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEMATCAPBLENDMODE_SYNCVALUE_1_OFFSET UNITYSDK_OFFSET(0x752D30)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEMATCAPBLENDMODE_SYNCVALUE_OFFSET UNITYSDK_OFFSET(0x752CD0)

namespace MoleMole::MaterialPropertyModifierEnumDefine
{
	inline static constexpr unsigned int MaterialPropertyModifierValueMatCapBlendMode_TypeDefinitionIndex = 60520;

	struct alignas(1) MaterialPropertyModifierValueMatCapBlendMode
	{
		::System::Boolean active; // 0x10
		::System::Boolean enable; // 0x11
		::MoleMole::MaterialPropertyModifierEnumDefine::MatCapBlendMode value; // 0x12

		/*
		::System::Void SyncValue(::MoleMole::StaticFloatMaterialModifier& to)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::StaticFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEMATCAPBLENDMODE_SYNCVALUE_OFFSET))(this, to);
		}
		*/

		/*
		::System::Void SyncValue_1(::MoleMole::StaticKeywordFloatMaterialModifier& to)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::StaticKeywordFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEMATCAPBLENDMODE_SYNCVALUE_1_OFFSET))(this, to);
		}
		*/

		/*
		::System::Void SyncEnable(::MoleMole::StaticFloatMaterialModifier& to, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::StaticFloatMaterialModifier&, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEMATCAPBLENDMODE_SYNCENABLE_OFFSET))(this, to, stop);
		}
		*/

		/*
		::System::Void SyncEnable_1(::MoleMole::StaticKeywordFloatMaterialModifier& to, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::StaticKeywordFloatMaterialModifier&, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEMATCAPBLENDMODE_SYNCENABLE_1_OFFSET))(this, to, stop);
		}
		*/

		static ::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMatCapBlendMode GetCloneFromEnum(::System::Boolean useIt, ::MoleMole::MaterialPropertyModifierEnumDefine::MatCapBlendMode enumVal)
		{
			return ((::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMatCapBlendMode(*)(::System::Boolean, ::MoleMole::MaterialPropertyModifierEnumDefine::MatCapBlendMode))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEMATCAPBLENDMODE_GETCLONEFROMENUM_OFFSET))(useIt, enumVal);
		}
	};
}
