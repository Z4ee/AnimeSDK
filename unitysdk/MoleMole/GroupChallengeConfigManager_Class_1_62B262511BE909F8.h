#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_380E15D819BCBADA;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_CLASS_1_62B262511BE909F8_METHOD_1_5110E061C0DF5692_OFFSET UNITYSDK_OFFSET(0x125CEA30)
#define MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_CLASS_1_62B262511BE909F8__CTOR_OFFSET UNITYSDK_OFFSET(0x125CEA20)

namespace MoleMole
{
	inline static constexpr unsigned int GroupChallengeConfigManager_Class_1_62B262511BE909F8_TypeDefinitionIndex = 74646;

	class GroupChallengeConfigManager_Class_1_62B262511BE909F8 : public ::System::Object
	{
	public:
		::System::Action_1<::Class_1_380E15D819BCBADA*>* Field_1_3; // 0x10
		::System::Action_1<::System::Single>* Field_1_0; // 0x18
		::System::Single Field_1_1; // 0x20
		::System::Int32 Field_1_2; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_CLASS_1_62B262511BE909F8__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_5110E061C0DF5692(::Class_1_380E15D819BCBADA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_380E15D819BCBADA*))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_CLASS_1_62B262511BE909F8_METHOD_1_5110E061C0DF5692_OFFSET))(this, a1);
		}
	};
}
