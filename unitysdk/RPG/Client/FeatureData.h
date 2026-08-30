#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AssemNPC; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FEATUREDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0xD044000)
#define RPG_CLIENT_FEATUREDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD044040)

namespace RPG::Client
{
	inline static constexpr unsigned int FeatureData_TypeDefinitionIndex = 60139;

	class FeatureData : public ::System::Object
	{
	public:
		::System::String* FeatureID; // 0x10
		::RPG::GameCore::NPCBodySize BodySize; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::AssemNPC*>* AssemNPCList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATUREDATA__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATUREDATA_TOSTRING_OFFSET))(this);
		}
	};
}
