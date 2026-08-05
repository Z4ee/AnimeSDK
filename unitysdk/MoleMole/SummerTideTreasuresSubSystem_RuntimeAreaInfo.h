#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_64E681E70DA96DB7.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_514;
namespace MoleMole { class SummerTideTreasuresSubSystem_RuntimePointInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_RUNTIMEAREAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x13861090)

namespace MoleMole
{
	inline static constexpr unsigned int SummerTideTreasuresSubSystem_RuntimeAreaInfo_TypeDefinitionIndex = 80758;

	class SummerTideTreasuresSubSystem_RuntimeAreaInfo : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_514* config; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::SummerTideTreasuresSubSystem_RuntimePointInfo*>* points; // 0x18
		::System::Int32 curWeight; // 0x20
		::System::Boolean isValid; // 0x24
		::System::Boolean isValidWithoutDistance; // 0x25
		::Enum_3_64E681E70DA96DB7 areaType; // 0x28
		::System::Int32 areaID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_RUNTIMEAREAINFO__CTOR_OFFSET))(this);
		}
	};
}
