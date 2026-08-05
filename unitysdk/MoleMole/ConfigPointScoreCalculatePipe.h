#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigPointScoreCalacutor.h"
#include "unitysdk/Struct_2_46F3CFD626EFE3F5.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGPOINTSCORECALCULATEPIPE_METHOD_1_25D73DC023DD8024_OFFSET UNITYSDK_OFFSET(0x1B81D150)
#define MOLEMOLE_CONFIGPOINTSCORECALCULATEPIPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B81D140)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigPointScoreCalculatePipe_TypeDefinitionIndex = 52406;

	class ConfigPointScoreCalculatePipe : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::ConfigPointScoreCalacutor>* calculators; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPOINTSCORECALCULATEPIPE__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_25D73DC023DD8024(::Struct_2_46F3CFD626EFE3F5& a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_46F3CFD626EFE3F5&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPOINTSCORECALCULATEPIPE_METHOD_1_25D73DC023DD8024_OFFSET))(this, a1);
		}
	};
}
