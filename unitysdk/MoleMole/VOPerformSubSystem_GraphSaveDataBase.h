#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_VOPERFORMSUBSYSTEM_GRAPHSAVEDATABASE_FINISH_OFFSET UNITYSDK_OFFSET(0x1277E5D0)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_GRAPHSAVEDATABASE_GETTAGUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1277E520)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_GRAPHSAVEDATABASE_GET_TAGUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1277E480)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_GRAPHSAVEDATABASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1277E5C0)

namespace MoleMole
{
	inline static constexpr unsigned int VOPerformSubSystem_GraphSaveDataBase_TypeDefinitionIndex = 54621;

	class VOPerformSubSystem_GraphSaveDataBase : public ::System::Object
	{
	public:
		::System::String* DataTag; // 0x10
		::System::UInt32 GroupId; // 0x18

		::System::Void _ctor(::System::String* tag, ::System::UInt32 groupId)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_GRAPHSAVEDATABASE__CTOR_OFFSET))(this, tag, groupId);
		}

		::System::String* get_TagUniqueId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_GRAPHSAVEDATABASE_GET_TAGUNIQUEID_OFFSET))(this);
		}

		static ::System::String* GetTagUniqueId(::System::String* tag, ::System::UInt32 groupId)
		{
			return ((::System::String*(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_GRAPHSAVEDATABASE_GETTAGUNIQUEID_OFFSET))(tag, groupId);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_GRAPHSAVEDATABASE_FINISH_OFFSET))(this);
		}
	};
}
