#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarRowWrapperExtraParam.h"
#include "unitysdk/RPG/GameCore/EAvatarCommonRowWrap.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IAvatarCommonRowWrap; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_AVATARCOMMONROWWRAP_GETALLWRAPDATA_OFFSET UNITYSDK_OFFSET(0x16F96910)
#define RPG_GAMECORE_AVATARCOMMONROWWRAP_GETAVATARINDEXNAME_OFFSET UNITYSDK_OFFSET(0x16F97210)
#define RPG_GAMECORE_AVATARCOMMONROWWRAP_GETWRAPDATA_OFFSET UNITYSDK_OFFSET(0x16F963E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarCommonRowWrap_TypeDefinitionIndex = 22646;

	class AvatarCommonRowWrap : public ::System::Object
	{
	public:
		static ::RPG::GameCore::IAvatarCommonRowWrap* GetWrapData(::System::UInt32 nConfigID, ::System::UInt32 enhancedID, ::RPG::GameCore::EAvatarCommonRowWrap eMask, ::System::Boolean bAutoRecycle, ::RPG::GameCore::AvatarRowWrapperExtraParam extraParam, ::System::Boolean outputError)
		{
			return ((::RPG::GameCore::IAvatarCommonRowWrap*(*)(::System::UInt32, ::System::UInt32, ::RPG::GameCore::EAvatarCommonRowWrap, ::System::Boolean, ::RPG::GameCore::AvatarRowWrapperExtraParam, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARCOMMONROWWRAP_GETWRAPDATA_OFFSET))(nConfigID, enhancedID, eMask, bAutoRecycle, extraParam, outputError);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::IAvatarCommonRowWrap*>* GetAllWrapData(::RPG::GameCore::EAvatarCommonRowWrap eMask, ::System::Boolean bAutoRecycle)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::IAvatarCommonRowWrap*>*(*)(::RPG::GameCore::EAvatarCommonRowWrap, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARCOMMONROWWRAP_GETALLWRAPDATA_OFFSET))(eMask, bAutoRecycle);
		}

		static ::System::String* GetAvatarIndexName(::RPG::GameCore::IAvatarCommonRowWrap* avatarCommonRowWrap, ::System::Boolean hideDefaultEnhanceID)
		{
			return ((::System::String*(*)(::RPG::GameCore::IAvatarCommonRowWrap*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARCOMMONROWWRAP_GETAVATARINDEXNAME_OFFSET))(avatarCommonRowWrap, hideDefaultEnhanceID);
		}
	};
}
