#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_BUNDLEUPDATEPOSTFILEOPITEM_EXEC_OFFSET UNITYSDK_OFFSET(0xB455AD0)
#define RPG_CLIENT_BUNDLEUPDATEPOSTFILEOPITEM_GETSRCFULLPATH_OFFSET UNITYSDK_OFFSET(0xB455A90)
#define RPG_CLIENT_BUNDLEUPDATEPOSTFILEOPITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB455BC0)

namespace RPG::Client
{
	inline static constexpr unsigned int BundleUpdatePostFileOpItem_TypeDefinitionIndex = 57231;

	class BundleUpdatePostFileOpItem : public ::System::Object
	{
	public:
		::System::String* SrcPath; // 0x10
		::System::String* DestPath; // 0x18
		::System::String* Action; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUNDLEUPDATEPOSTFILEOPITEM__CTOR_OFFSET))(this);
		}

		::System::String* GetSrcFullPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUNDLEUPDATEPOSTFILEOPITEM_GETSRCFULLPATH_OFFSET))(this);
		}

		::System::Boolean Exec()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUNDLEUPDATEPOSTFILEOPITEM_EXEC_OFFSET))(this);
		}
	};
}
