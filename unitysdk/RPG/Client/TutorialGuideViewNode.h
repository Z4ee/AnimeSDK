#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TutorialGuideViewNodeComponentType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Component; }

#define RPG_CLIENT_TUTORIALGUIDEVIEWNODE_GETCOMPONENTTYPE_OFFSET UNITYSDK_OFFSET(0xB39BA00)
#define RPG_CLIENT_TUTORIALGUIDEVIEWNODE__CTOR_OFFSET UNITYSDK_OFFSET(0xB39B9F0)

namespace RPG::Client
{
	inline static constexpr unsigned int TutorialGuideViewNode_TypeDefinitionIndex = 62893;

	class TutorialGuideViewNode : public ::System::Object
	{
	public:
		::System::String* NodeName; // 0x10
		::UnityEngine::Component* Component; // 0x18
		::RPG::Client::TutorialGuideViewNodeComponentType Type; // 0x20

		::System::Void _ctor(::System::String* name, ::RPG::Client::TutorialGuideViewNodeComponentType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::TutorialGuideViewNodeComponentType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEVIEWNODE__CTOR_OFFSET))(this, name, type);
		}

		::System::Type* GetComponentType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEVIEWNODE_GETCOMPONENTTYPE_OFFSET))(this);
		}
	};
}
