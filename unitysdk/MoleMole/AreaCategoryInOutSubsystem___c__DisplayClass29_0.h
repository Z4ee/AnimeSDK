#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/SceneConfigRuntimeDataArea.h"
#include "unitysdk/Struct_2_903FDA347BBAD2AB.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0x116C6B80)
#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM___C__DISPLAYCLASS29_0__GETAREABYPOSITIONASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x116C6B90)

namespace MoleMole
{
	inline static constexpr unsigned int AreaCategoryInOutSubsystem___c__DisplayClass29_0_TypeDefinitionIndex = 68258;

	class AreaCategoryInOutSubsystem___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::System::Threading::CancellationToken cancellationToken; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::Config::SceneConfigRuntimeDataArea>* areas; // 0x18
		::UnityEngine::Vector3 position; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::Struct_2_903FDA347BBAD2AB _GetAreaByPositionAsync_b__0()
		{
			return ((::Struct_2_903FDA347BBAD2AB(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM___C__DISPLAYCLASS29_0__GETAREABYPOSITIONASYNC_B__0_OFFSET))(this);
		}
	};
}
