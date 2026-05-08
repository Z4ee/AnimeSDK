#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWPATHICONTEXTUREID__CTOR_OFFSET UNITYSDK_OFFSET(0x186BB800)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowPathIconTextureID_TypeDefinitionIndex = 74041;

	class ConfigHollowPathIconTextureID : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::Int32>* PathIconTextureId; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWPATHICONTEXTUREID__CTOR_OFFSET))(this);
		}
	};
}
