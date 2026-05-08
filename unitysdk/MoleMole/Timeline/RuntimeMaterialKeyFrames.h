#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline { class KeyframeMBP; }
namespace MoleMole::Timeline { class KeyframeMBPList; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALKEYFRAMES_METHOD_1_EB476E77D9330246_OFFSET UNITYSDK_OFFSET(0x10E56490)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALKEYFRAMES__CTOR_OFFSET UNITYSDK_OFFSET(0x10E563B0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RuntimeMaterialKeyFrames_TypeDefinitionIndex = 57970;

	class RuntimeMaterialKeyFrames : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*>* keyFramesDic; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::Timeline::KeyframeMBPList*>* keyFramesList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALKEYFRAMES__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_EB476E77D9330246(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALKEYFRAMES_METHOD_1_EB476E77D9330246_OFFSET))(this, a1);
		}
	};
}
