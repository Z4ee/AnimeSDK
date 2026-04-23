#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_BOOKLETLUAPANELPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x9EA3A80)

namespace RPG::Client
{
	inline static constexpr unsigned int BookletLuaPanelParam_TypeDefinitionIndex = 66693;

	class BookletLuaPanelParam : public ::System::Object
	{
	public:
		::UnityEngine::Transform* Root; // 0x10
		::System::String* PanelClassPath; // 0x18
		::System::String* BinderClassPath; // 0x20
		::System::UInt32 ID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETLUAPANELPARAM__CTOR_OFFSET))(this);
		}
	};
}
