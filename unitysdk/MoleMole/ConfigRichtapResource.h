#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class ConfigRichtapResource_Resource; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGRICHTAPRESOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA83E90)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigRichtapResource_TypeDefinitionIndex = 69753;

	class ConfigRichtapResource : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigRichtapResource_Resource*>* richtapResources; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGRICHTAPRESOURCE__CTOR_OFFSET))(this);
		}
	};
}
