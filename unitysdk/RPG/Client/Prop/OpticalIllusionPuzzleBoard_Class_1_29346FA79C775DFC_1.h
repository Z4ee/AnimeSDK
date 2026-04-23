#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_CLASS_1_29346FA79C775DFC_1__CTOR_OFFSET UNITYSDK_OFFSET(0xAE75170)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int OpticalIllusionPuzzleBoard_Class_1_29346FA79C775DFC_1_TypeDefinitionIndex = 72200;

	class OpticalIllusionPuzzleBoard_Class_1_29346FA79C775DFC_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* Field_1_1; // 0x10
		::System::UInt32 Field_1_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_CLASS_1_29346FA79C775DFC_1__CTOR_OFFSET))(this);
		}
	};
}
