#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STAGEPVSRUNTIMEDEBUGEXPORTDATA_METHOD_2_6795175FA1385078_OFFSET UNITYSDK_OFFSET(0x19CADFB0)
#define RPG_GAMECORE_STAGEPVSRUNTIMEDEBUGEXPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19CAE0A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StagePVSRuntimeDebugExportData_TypeDefinitionIndex = 18191;

	class StagePVSRuntimeDebugExportData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::MVector3>* MissingPoints; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSRUNTIMEDEBUGEXPORTDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6795175FA1385078(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StagePVSRuntimeDebugExportData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StagePVSRuntimeDebugExportData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSRUNTIMEDEBUGEXPORTDATA_METHOD_2_6795175FA1385078_OFFSET))(a1, a2);
		}
	};
}
