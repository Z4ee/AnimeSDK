#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class IDisposable; }

#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYSIGNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD6736B0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYSIGNAL_PUBLISH_OFFSET UNITYSDK_OFFSET(0xD672720)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYSIGNAL_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0xD672170)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYSIGNAL__CTOR_OFFSET UNITYSDK_OFFSET(0xD671D00)

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftDiySignal_TypeDefinitionIndex = 79618;

	class MechCraftDiySignal : public ::System::Object
	{
	public:
		::System::Action* _Callbacks; // 0x10
		::System::Boolean _Disposed; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYSIGNAL__CTOR_OFFSET))(this);
		}

		::System::IDisposable* Subscribe(::System::Action* a1)
		{
			return ((::System::IDisposable*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYSIGNAL_SUBSCRIBE_OFFSET))(this, a1);
		}

		::System::Void Publish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYSIGNAL_PUBLISH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYSIGNAL_DISPOSE_OFFSET))(this);
		}
	};
}
