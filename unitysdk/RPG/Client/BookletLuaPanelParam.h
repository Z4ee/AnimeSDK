#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_BOOKLETLUAPANELPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xC966E50)

namespace RPG::Client
{
	inline static constexpr unsigned int BookletLuaPanelParam_TypeDefinitionIndex = 72318;

	class BookletLuaPanelParam : public ::System::Object
	{
	public:
		::System::String* BinderClassPath; // 0x10
		::UnityEngine::Transform* Root; // 0x18
		::System::String* PanelClassPath; // 0x20
		::System::UInt32 ID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETLUAPANELPARAM__CTOR_OFFSET))(this);
		}
	};
}
