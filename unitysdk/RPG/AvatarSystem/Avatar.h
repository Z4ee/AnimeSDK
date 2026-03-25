#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_340;
class Class_0_16E4307DCC419505_341;
class Class_1_090AB0EAA610410E;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define RPG_AVATARSYSTEM_AVATAR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8EBC9F0)
#define RPG_AVATARSYSTEM_AVATAR_EXPORTPROFILE_OFFSET UNITYSDK_OFFSET(0x8EBC530)
#define RPG_AVATARSYSTEM_AVATAR_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x8EBBE60)
#define RPG_AVATARSYSTEM_AVATAR_GET_PROFILE_OFFSET UNITYSDK_OFFSET(0x8EBBEA0)
#define RPG_AVATARSYSTEM_AVATAR_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x8EBBE80)
#define RPG_AVATARSYSTEM_AVATAR_IMPORTPROFILE_OFFSET UNITYSDK_OFFSET(0x8EBBF20)
#define RPG_AVATARSYSTEM_AVATAR_SET_PROFILE_OFFSET UNITYSDK_OFFSET(0x8EBBEB0)
#define RPG_AVATARSYSTEM_AVATAR_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x8EBBE90)
#define RPG_AVATARSYSTEM_AVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x8EBBEC0)
#define RPG_AVATARSYSTEM_AVATAR__INCREASEVERSION_OFFSET UNITYSDK_OFFSET(0x8EBC4D0)

namespace RPG::AvatarSystem
{
	inline static constexpr unsigned int Avatar_TypeDefinitionIndex = 41940;

	class Avatar : public ::System::Object
	{
	public:
		::Class_1_090AB0EAA610410E* _Profile_k__BackingField; // 0x10
		::System::Collections::Generic::IReadOnlyDictionary_2<::System::Type*, ::Class_0_16E4307DCC419505_340*>* _Components; // 0x18
		::System::UInt32 _Version_k__BackingField; // 0x20
		::Struct_2_AAD4F4215611A944 _Identifier_k__BackingField; // 0x24

		::System::Void _ctor(::Struct_2_AAD4F4215611A944& identifier, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::Type*, ::Class_0_16E4307DCC419505_340*>* components)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_AAD4F4215611A944&, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::Type*, ::Class_0_16E4307DCC419505_340*>*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAR__CTOR_OFFSET))(this, identifier, components);
		}

		::Struct_2_AAD4F4215611A944 get_Identifier()
		{
			return ((::Struct_2_AAD4F4215611A944(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAR_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::UInt32 get_Version()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAR_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAR_SET_VERSION_OFFSET))(this, value);
		}

		::Class_1_090AB0EAA610410E* get_Profile()
		{
			return ((::Class_1_090AB0EAA610410E*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAR_GET_PROFILE_OFFSET))(this);
		}

		::System::Void set_Profile(::Class_1_090AB0EAA610410E* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_090AB0EAA610410E*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAR_SET_PROFILE_OFFSET))(this, value);
		}

		::System::Void ImportProfile(::Class_1_090AB0EAA610410E* profile)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_090AB0EAA610410E*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAR_IMPORTPROFILE_OFFSET))(this, profile);
		}

		::System::Void ExportProfile(::Class_0_16E4307DCC419505_341* builder)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_341*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAR_EXPORTPROFILE_OFFSET))(this, builder);
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
