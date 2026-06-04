#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarRowWrapperExtraParam.h"
#include "unitysdk/RPG/GameCore/EAvatarCommonRowWrap.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IAvatarCommonRowWrap; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_AVATARCOMMONROWWRAP_GETALLWRAPDATA_OFFSET UNITYSDK_OFFSET(0xCD11AA0)
#define RPG_GAMECORE_AVATARCOMMONROWWRAP_GETAVATARINDEXNAME_OFFSET UNITYSDK_OFFSET(0xCD12380)
#define RPG_GAMECORE_AVATARCOMMONROWWRAP_GETWRAPDATA_OFFSET UNITYSDK_OFFSET(0xCD11630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarCommonRowWrap_TypeDefinitionIndex = 52790;

	class AvatarCommonRowWrap : public ::System::Object
	{
	public:
		static ::RPG::GameCore::IAvatarCommonRowWrap* GetWrapData(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::GameCore::EAvatarCommonRowWrap a4, ::System::Boolean a5, ::RPG::GameCore::AvatarRowWrapperExtraParam a6, ::System::Boolean a7)
		{
			return ((::RPG::GameCore::IAvatarCommonRowWrap*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::EAvatarCommonRowWrap, ::System::Boolean, ::RPG::GameCore::AvatarRowWrapperExtraParam, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARCOMMONROWWRAP_GETWRAPDATA_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::IAvatarCommonRowWrap*>* GetAllWrapData(::RPG::GameCore::EAvatarCommonRowWrap a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::IAvatarCommonRowWrap*>*(*)(::RPG::GameCore::EAvatarCommonRowWrap, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARCOMMONROWWRAP_GETALLWRAPDATA_OFFSET))(a1, a2);
		}

		static ::System::String* GetAvatarIndexName(::RPG::GameCore::IAvatarCommonRowWrap* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::RPG::GameCore::IAvatarCommonRowWrap*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARCOMMONROWWRAP_GETAVATARINDEXNAME_OFFSET))(a1, a2);
		}
	};
}
