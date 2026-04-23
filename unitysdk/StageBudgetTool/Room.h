#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace StageBudgetTool { class Prism; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define STAGEBUDGETTOOL_ROOM_METHOD_1_66FF6A49D33160A6_OFFSET UNITYSDK_OFFSET(0xB94F7C0)
#define STAGEBUDGETTOOL_ROOM__CTOR_OFFSET UNITYSDK_OFFSET(0xB94FA40)

namespace StageBudgetTool
{
	inline static constexpr unsigned int Room_TypeDefinitionIndex = 44494;

	class Room : public ::System::Object
	{
	public:
		::System::String* Alias; // 0x10
		::StageBudgetTool::Prism* BoundPrism; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* BlockAliasList; // 0x20
		::System::Collections::Generic::List_1<::System::String*>* VolumeAliasList; // 0x28
		::UnityEngine::Transform* transform; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEBUDGETTOOL_ROOM__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_66FF6A49D33160A6(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STAGEBUDGETTOOL_ROOM_METHOD_1_66FF6A49D33160A6_OFFSET))(this, a1);
		}
	};
}
