#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_41E07A9DDAB7FC78.h"
#include "unitysdk/Enum_3_75A1C8C41006A504.h"

class Class_1_D17272E82AE804C2_443;
class Class_1_D17272E82AE804C2_470;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBADDSUMMARIZER_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x1BC5A870)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBADDSUMMARIZER_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x1BC5AD10)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBADDSUMMARIZER_UPDATEORB_OFFSET UNITYSDK_OFFSET(0x1BC5A8D0)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBADDSUMMARIZER_UPDATEPRESENT_OFFSET UNITYSDK_OFFSET(0x1BC5AAF0)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBADDSUMMARIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC5ADC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightOrbServerData_OrbAddSummarizer_TypeDefinitionIndex = 64505;

	class GridFightOrbServerData_OrbAddSummarizer : public ::Class_1_41E07A9DDAB7FC78
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* Orbs; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* Presents; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBADDSUMMARIZER__CTOR_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::Enum_3_75A1C8C41006A504 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A1C8C41006A504))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBADDSUMMARIZER_ISCONCERNEDWITH_OFFSET))(this, a1);
		}

		::System::Void UpdateOrb(::Class_1_D17272E82AE804C2_470* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_470*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBADDSUMMARIZER_UPDATEORB_OFFSET))(this, a1);
		}

		::System::Void UpdatePresent(::Class_1_D17272E82AE804C2_443* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_443*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBADDSUMMARIZER_UPDATEPRESENT_OFFSET))(this, a1);
		}

		::System::Void UpdateAfter(::Enum_3_75A1C8C41006A504 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_75A1C8C41006A504))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBADDSUMMARIZER_UPDATEAFTER_OFFSET))(this, a1);
		}
	};
}
