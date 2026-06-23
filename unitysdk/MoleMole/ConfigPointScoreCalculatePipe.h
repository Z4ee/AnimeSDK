#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigPointScoreCalacutor.h"
#include "unitysdk/Struct_2_46F3CFD626EFE3F5.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGPOINTSCORECALCULATEPIPE_METHOD_1_6420BCE09A2E1435_OFFSET UNITYSDK_OFFSET(0x1A00DD80)
#define MOLEMOLE_CONFIGPOINTSCORECALCULATEPIPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A00DD70)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigPointScoreCalculatePipe_TypeDefinitionIndex = 77348;

	class ConfigPointScoreCalculatePipe : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::ConfigPointScoreCalacutor>* calculators; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPOINTSCORECALCULATEPIPE__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_6420BCE09A2E1435(::Struct_2_46F3CFD626EFE3F5& a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_46F3CFD626EFE3F5&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPOINTSCORECALCULATEPIPE_METHOD_1_6420BCE09A2E1435_OFFSET))(this, a1);
		}
	};
}
