#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class CameraPositionData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_PERFORMERPOSITIONDATA_GET_CAMERADATAS_OFFSET UNITYSDK_OFFSET(0x191B24D0)
#define MOLEMOLE_PERFORMERPOSITIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x191B24E0)

namespace MoleMole
{
	inline static constexpr unsigned int PerformerPositionData_TypeDefinitionIndex = 62103;

	class PerformerPositionData : public ::System::Object
	{
	public:
		::System::Int32 PerformerId; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::CameraPositionData*>* _cameraDatas; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMERPOSITIONDATA__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::CameraPositionData*>* get_CameraDatas()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::CameraPositionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMERPOSITIONDATA_GET_CAMERADATAS_OFFSET))(this);
		}
	};
}
