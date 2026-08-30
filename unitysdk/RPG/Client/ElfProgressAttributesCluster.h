#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ElfProgressAttributeData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFPROGRESSATTRIBUTESCLUSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC83B30)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfProgressAttributesCluster_TypeDefinitionIndex = 63779;

	class ElfProgressAttributesCluster : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ElfProgressAttributeData*>* Attributes; // 0x10
		::RPG::Client::ElfProgressAttributeData* SummaryAttribute; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSATTRIBUTESCLUSTER__CTOR_OFFSET))(this);
		}
	};
}
