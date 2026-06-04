#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_359;
class Class_0_16E4307DCC419505_360;
class Class_1_090AB0EAA610410E;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define RPG_AVATARSYSTEM_AVATAR_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB06D680)
#define RPG_AVATARSYSTEM_AVATAR_EXPORTPROFILE_OFFSET UNITYSDK_OFFSET(0xB06D1A0)
#define RPG_AVATARSYSTEM_AVATAR_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xB06CAD0)
#define RPG_AVATARSYSTEM_AVATAR_GET_PROFILE_OFFSET UNITYSDK_OFFSET(0xB06CB10)
#define RPG_AVATARSYSTEM_AVATAR_GET_VERSION_OFFSET UNITYSDK_OFFSET(0xB06CAF0)
#define RPG_AVATARSYSTEM_AVATAR_IMPORTPROFILE_OFFSET UNITYSDK_OFFSET(0xB06CB90)
#define RPG_AVATARSYSTEM_AVATAR_SET_PROFILE_OFFSET UNITYSDK_OFFSET(0xB06CB20)
#define RPG_AVATARSYSTEM_AVATAR_SET_VERSION_OFFSET UNITYSDK_OFFSET(0xB06CB00)
#define RPG_AVATARSYSTEM_AVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0xB06CB30)
#define RPG_AVATARSYSTEM_AVATAR__INCREASEVERSION_OFFSET UNITYSDK_OFFSET(0xB06D140)

namespace RPG::AvatarSystem
{
	inline static constexpr unsigned int Avatar_TypeDefinitionIndex = 48514;

	class Avatar : public ::System::Object
	{
	public:
		::Class_1_090AB0EAA610410E* _Profile_k__BackingField; // 0x10
		::System::Collections::Generic::IReadOnlyDictionary_2<::System::Type*, ::Class_0_16E4307DCC419505_359*>* _Components; // 0x18
		::Struct_2_AAD4F4215611A944 _Identifier_k__BackingField; // 0x20
		::System::UInt32 _Version_k__BackingField; // 0x38

		::System::Void _ctor(::Struct_2_AAD4F4215611A944& a1, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::Type*, ::Class_0_16E4307DCC419505_359*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_AAD4F4215611A944&, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::Type*, ::Class_0_16E4307DCC419505_359*>*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAR__CTOR_OFFSET))(this, a1, a2);
		}

		::Struct_2_AAD4F4215611A944 get_Identifier()
		{
			return ((::Struct_2_AAD4F4215611A944(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAR_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::UInt32 get_Version()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAR_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAR_SET_VERSION_OFFSET))(this, a1);
		}

		::Class_1_090AB0EAA610410E* get_Profile()
		{
			return ((::Class_1_090AB0EAA610410E*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAR_GET_PROFILE_OFFSET))(this);
		}

		::System::Void set_Profile(::Class_1_090AB0EAA610410E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_090AB0EAA610410E*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAR_SET_PROFILE_OFFSET))(this, a1);
		}

		::System::Void ImportProfile(::Class_1_090AB0EAA610410E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_090AB0EAA610410E*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAR_IMPORTPROFILE_OFFSET))(this, a1);
		}

		::System::Void ExportProfile(::Class_0_16E4307DCC419505_360* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_360*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAR_EXPORTPROFILE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAR_DISPOSE_OFFSET))(this);
		}

		::System::Void _IncreaseVersion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAR__INCREASEVERSION_OFFSET))(this);
		}
	};
}
