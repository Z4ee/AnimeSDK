#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DigitalOpus::MB::Core { class MatAndTransformToMerged; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define DIGITALOPUS_MB_CORE_MATSANDGOS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F55A980)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MatsAndGOs_TypeDefinitionIndex = 94635;

	class MatsAndGOs : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MatAndTransformToMerged*>* mats; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* gos; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MATSANDGOS__CTOR_OFFSET))(this);
		}
	};
}
