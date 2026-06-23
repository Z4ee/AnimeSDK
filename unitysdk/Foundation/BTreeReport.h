#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FOUNDATION_BTREEREPORT_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1DA307B0)
#define FOUNDATION_BTREEREPORT_RECORD_OFFSET UNITYSDK_OFFSET(0x1DA30A10)
#define FOUNDATION_BTREEREPORT_RESET_OFFSET UNITYSDK_OFFSET(0x1DA30C50)
#define FOUNDATION_BTREEREPORT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1DA30A90)
#define FOUNDATION_BTREEREPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA30910)

namespace Foundation
{
	inline static constexpr unsigned int BTreeReport_TypeDefinitionIndex = 8162;

	class BTreeReport : public ::System::Object
	{
	public:
		static ::Foundation::BTreeReport** StaticGet__instance()
		{
			return (::Foundation::BTreeReport**)Il2CppClass::FromTypeDefinitionIndex(BTreeReport_TypeDefinitionIndex)->GetStaticField(0x72B0);
		}
		// static const ::System::Int32 MAX_SIZE = 0x78; // 0x0
		// static const ::System::Int32 X_OFFSET = 0x5; // 0x0
		// static const ::System::Int32 Y_SCALE = 0x3; // 0x0
		// static const ::System::Int32 TAIL_INDEX = 0x77; // 0x0
		::Il2CppArray<::UnityEngine::Vector3>* TimeQueue; // 0x10
		::System::Action* OnUpdate; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* BTreeMap; // 0x20
		::System::Single TotalBTreeTime; // 0x28
		::System::Single MaxTotalBTreeTime; // 0x2C
		::System::Int32 curQueueIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BTREEREPORT__CTOR_OFFSET))(this);
		}

		static ::Foundation::BTreeReport* get_Instance()
		{
			return ((::Foundation::BTreeReport*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_BTREEREPORT_GET_INSTANCE_OFFSET))();
		}

		::System::Void Record(::System::UInt32 id, ::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_BTREEREPORT_RECORD_OFFSET))(this, id, time);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BTREEREPORT_UPDATE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BTREEREPORT_RESET_OFFSET))(this);
		}
	};
}
