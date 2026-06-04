#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

class Class_3_8FE15D155B05EF4E;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define BOUNDARYCAPTUREPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0xB03AEE0)

inline static constexpr unsigned int BoundaryCaptureProxy_TypeDefinitionIndex = 44775;

class BoundaryCaptureProxy : public ::RPG::Client::TAMonoPlugin_1<::Class_3_8FE15D155B05EF4E*>
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* targetObjects; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDARYCAPTUREPROXY__CTOR_OFFSET))(this);
	}
};
