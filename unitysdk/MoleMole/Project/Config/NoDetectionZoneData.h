#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Project/Config/PointBaseData.h"

namespace MoleMole::Project::Config { class CollisionShapeData; }
namespace MoleMole::Project::Config { class NoDetectionPointData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_PROJECT_CONFIG_NODETECTIONZONEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3B99F0)

namespace MoleMole::Project::Config
{
	inline static constexpr unsigned int NoDetectionZoneData_TypeDefinitionIndex = 11193;

	class NoDetectionZoneData : public ::MoleMole::Project::Config::PointBaseData
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Project::Config::NoDetectionPointData*>* controlPoints; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::Project::Config::CollisionShapeData*>* collisionShapes; // 0x28
		::System::String* saveMeshPath; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_NODETECTIONZONEDATA__CTOR_OFFSET))(this);
		}
	};
}
