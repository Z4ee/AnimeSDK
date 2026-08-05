#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/ProtoScript/DirectType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGECHESSBOARD_GET_DEFAULTKEY_OFFSET UNITYSDK_OFFSET(0x14375DF0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGECHESSBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x14375E30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChangeChessboard_TypeDefinitionIndex = 44161;

	class ConfigHollowChangeChessboard : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		// static const ::System::String* DEFAULT_KEY; // 0x0
		::System::Collections::Generic::Dictionary_2<::ProtoScript::DirectType, ::System::String*>* RandomKeyDict; // 0x58
		::System::Collections::Generic::Dictionary_2<::ProtoScript::DirectType, ::System::String*>* AccelerationRandomKeyDict; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGECHESSBOARD__CTOR_OFFSET))(this);
		}

		::System::String* get_DefaultKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGECHESSBOARD_GET_DEFAULTKEY_OFFSET))(this);
		}
	};
}
