#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/FpsRecord.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_FPSCALCUTILITY_BEGINRECORDFPS_OFFSET UNITYSDK_OFFSET(0x1D970460)
#define FOUNDATION_FPSCALCUTILITY_ENDRECORDFPS_OFFSET UNITYSDK_OFFSET(0x1D970510)
#define FOUNDATION_FPSCALCUTILITY_GETRECORDFPS_OFFSET UNITYSDK_OFFSET(0x1D970680)
#define FOUNDATION_FPSCALCUTILITY_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D9707D0)
#define FOUNDATION_FPSCALCUTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D970C40)
#define FOUNDATION_FPSCALCUTILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D970C30)

namespace Foundation
{
	inline static constexpr unsigned int FpsCalcUtility_TypeDefinitionIndex = 8126;

	class FpsCalcUtility : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Single>** StaticGet__lastIntervals()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(FpsCalcUtility_TypeDefinitionIndex)->GetStaticField(0x6DB0);
		}
		static ::System::Single* StaticGet__maxFps()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(FpsCalcUtility_TypeDefinitionIndex)->GetStaticField(0x3710);
		}
		static ::System::Single* StaticGet__minFps()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(FpsCalcUtility_TypeDefinitionIndex)->GetStaticField(0x3714);
		}
		static ::System::Int32* StaticGet__recordCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FpsCalcUtility_TypeDefinitionIndex)->GetStaticField(0x3718);
		}
		static ::System::Int32* StaticGet__jankCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FpsCalcUtility_TypeDefinitionIndex)->GetStaticField(0x371C);
		}
		static ::System::Single* StaticGet__time()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(FpsCalcUtility_TypeDefinitionIndex)->GetStaticField(0x3720);
		}
		static ::System::Boolean* StaticGet__isRecording()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FpsCalcUtility_TypeDefinitionIndex)->GetStaticField(0x3724);
		}
		static ::System::Single* StaticGet_updateInterval()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(FpsCalcUtility_TypeDefinitionIndex)->GetStaticField(0x3728);
		}
		static ::System::Single* StaticGet_fps()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(FpsCalcUtility_TypeDefinitionIndex)->GetStaticField(0x372C);
		}
		static ::System::Single* StaticGet__timeleft()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(FpsCalcUtility_TypeDefinitionIndex)->GetStaticField(0x3730);
		}
		static ::System::Single* StaticGet__recordTotalFps()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(FpsCalcUtility_TypeDefinitionIndex)->GetStaticField(0x3734);
		}
		static ::System::Int32* StaticGet__frames()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FpsCalcUtility_TypeDefinitionIndex)->GetStaticField(0x3738);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_FPSCALCUTILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_FPSCALCUTILITY__CCTOR_OFFSET))();
		}

		static ::System::Void BeginRecordFps()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_FPSCALCUTILITY_BEGINRECORDFPS_OFFSET))();
		}

		static ::Foundation::FpsRecord EndRecordFps()
		{
			return ((::Foundation::FpsRecord(*)())((::PBYTE)hIl2Cpp + FOUNDATION_FPSCALCUTILITY_ENDRECORDFPS_OFFSET))();
		}

		static ::Foundation::FpsRecord GetRecordFps()
		{
			return ((::Foundation::FpsRecord(*)())((::PBYTE)hIl2Cpp + FOUNDATION_FPSCALCUTILITY_GETRECORDFPS_OFFSET))();
		}

		static ::System::Void Update()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_FPSCALCUTILITY_UPDATE_OFFSET))();
		}
	};
}
