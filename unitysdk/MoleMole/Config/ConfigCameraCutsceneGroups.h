#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGCAMERACUTSCENEGROUPS__CTOR_OFFSET UNITYSDK_OFFSET(0x1485E950)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraCutsceneGroups_TypeDefinitionIndex = 41628;

	class ConfigCameraCutsceneGroups : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* cameraCutsceneGroups; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERACUTSCENEGROUPS__CTOR_OFFSET))(this);
		}
	};
}
