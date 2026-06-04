#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_360;
class Class_0_16E4307DCC419505_708;
class Class_1_090AB0EAA610410E;
namespace RPG::AvatarSystem { class Avatar; }

#define RPG_CLIENT_PREVIEWAVATARPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC4B77C0)
#define RPG_CLIENT_PREVIEWAVATARPROXY_EXPORTPROFILE_OFFSET UNITYSDK_OFFSET(0xC4B76F0)
#define RPG_CLIENT_PREVIEWAVATARPROXY_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xC4B74C0)
#define RPG_CLIENT_PREVIEWAVATARPROXY_GET_VERSION_OFFSET UNITYSDK_OFFSET(0xC4B74F0)
#define RPG_CLIENT_PREVIEWAVATARPROXY_IMPORTPROFILE_OFFSET UNITYSDK_OFFSET(0xC4B7680)
#define RPG_CLIENT_PREVIEWAVATARPROXY_RESET_OFFSET UNITYSDK_OFFSET(0xC4B7760)
#define RPG_CLIENT_PREVIEWAVATARPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0xC4B75F0)
#define RPG_CLIENT_PREVIEWAVATARPROXY__ENSURENOTDISPOSED_OFFSET UNITYSDK_OFFSET(0xC4B7550)

namespace RPG::Client
{
	inline static constexpr unsigned int PreviewAvatarProxy_TypeDefinitionIndex = 58645;

	class PreviewAvatarProxy : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_708* _Pool; // 0x10
		::RPG::AvatarSystem::Avatar* _Origin; // 0x18
		::System::Boolean _Disposed; // 0x20

		::System::Void _ctor(::RPG::AvatarSystem::Avatar* a1, ::Class_0_16E4307DCC419505_708* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::Avatar*, ::Class_0_16E4307DCC419505_708*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREVIEWAVATARPROXY__CTOR_OFFSET))(this, a1, a2);
		}

		::Struct_2_AAD4F4215611A944 get_Identifier()
		{
			return ((::Struct_2_AAD4F4215611A944(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREVIEWAVATARPROXY_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::UInt32 get_Version()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREVIEWAVATARPROXY_GET_VERSION_OFFSET))(this);
		}

		::System::Void ImportProfile(::Class_1_090AB0EAA610410E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_090AB0EAA610410E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREVIEWAVATARPROXY_IMPORTPROFILE_OFFSET))(this, a1);
		}

		::System::Void ExportProfile(::Class_0_16E4307DCC419505_360* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_360*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREVIEWAVATARPROXY_EXPORTPROFILE_OFFSET))(this, a1);
		}

		::System::Void Reset(::Class_1_090AB0EAA610410E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_090AB0EAA610410E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREVIEWAVATARPROXY_RESET_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREVIEWAVATARPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void _EnsureNotDisposed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREVIEWAVATARPROXY__ENSURENOTDISPOSED_OFFSET))(this);
		}
	};
}
