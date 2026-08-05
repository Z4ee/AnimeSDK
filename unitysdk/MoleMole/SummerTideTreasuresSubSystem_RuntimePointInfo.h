#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_208CC9941471731A_1049;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_RUNTIMEPOINTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x14507ED0)

namespace MoleMole
{
	inline static constexpr unsigned int SummerTideTreasuresSubSystem_RuntimePointInfo_TypeDefinitionIndex = 80765;

	class SummerTideTreasuresSubSystem_RuntimePointInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* activeMonster; // 0x10
		::System::String* pointID; // 0x18
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1049*>* configs; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* activeMonsterConfigID; // 0x28
		::UnityEngine::Vector3 Position; // 0x30
		::System::Int32 validState; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_RUNTIMEPOINTINFO__CTOR_OFFSET))(this);
		}
	};
}
