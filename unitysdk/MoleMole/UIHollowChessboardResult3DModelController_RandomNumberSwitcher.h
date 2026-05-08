#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HueAndSaturationGroup;
namespace System { class Random; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_RANDOMNUMBERSWITCHER_GENERATEDIFFERENTRANDOM_OFFSET UNITYSDK_OFFSET(0x1525EF80)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_RANDOMNUMBERSWITCHER_GETRANDOMHUEANDSATURATIONGROUP_OFFSET UNITYSDK_OFFSET(0x1525F150)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_RANDOMNUMBERSWITCHER_SWITCHRANDOMNUMBER_OFFSET UNITYSDK_OFFSET(0x1525F000)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_RANDOMNUMBERSWITCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x1525F230)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowChessboardResult3DModelController_RandomNumberSwitcher_TypeDefinitionIndex = 39433;

	class UIHollowChessboardResult3DModelController_RandomNumberSwitcher : public ::System::Object
	{
	public:
		::System::Random* random; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_RANDOMNUMBERSWITCHER__CTOR_OFFSET))(this);
		}

		::System::Int32 GenerateDifferentRandom(::System::Int32 previousValue, ::System::Int32 minValue, ::System::Int32 maxValue)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_RANDOMNUMBERSWITCHER_GENERATEDIFFERENTRANDOM_OFFSET))(this, previousValue, minValue, maxValue);
		}

		::System::Void SwitchRandomNumber(::System::Int32& lastLeftCache, ::System::Int32& lastRightCache)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_RANDOMNUMBERSWITCHER_SWITCHRANDOMNUMBER_OFFSET))(this, lastLeftCache, lastRightCache);
		}

		::HueAndSaturationGroup* GetRandomHueAndSaturationGroup(::System::Collections::Generic::List_1<::HueAndSaturationGroup*>* leftHueAndGroupInfos)
		{
			return ((::HueAndSaturationGroup*(*)(::PVOID, ::System::Collections::Generic::List_1<::HueAndSaturationGroup*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_RANDOMNUMBERSWITCHER_GETRANDOMHUEANDSATURATIONGROUP_OFFSET))(this, leftHueAndGroupInfos);
		}
	};
}
