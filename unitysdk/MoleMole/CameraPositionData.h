#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class GameObjectPositionData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CAMERAPOSITIONDATA_GET_GAMEOBJECTDATAS_OFFSET UNITYSDK_OFFSET(0x144C5CF0)
#define MOLEMOLE_CAMERAPOSITIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x144C5D00)

namespace MoleMole
{
	inline static constexpr unsigned int CameraPositionData_TypeDefinitionIndex = 52421;

	class CameraPositionData : public ::System::Object
	{
	public:
		::System::Int32 CameraId; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::GameObjectPositionData*>* _gameObjectDatas; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAPOSITIONDATA__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::GameObjectPositionData*>* get_GameObjectDatas()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::GameObjectPositionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAPOSITIONDATA_GET_GAMEOBJECTDATAS_OFFSET))(this);
		}
	};
}
