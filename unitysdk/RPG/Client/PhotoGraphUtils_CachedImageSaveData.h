#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_PHOTOGRAPHUTILS_CACHEDIMAGESAVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9F69D50)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphUtils_CachedImageSaveData_TypeDefinitionIndex = 56766;

	class PhotoGraphUtils_CachedImageSaveData : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* Callback; // 0x10
		::Il2CppArray<::System::Byte>* MediaBytes; // 0x18
		::System::String* Desc; // 0x20
		::System::String* Title; // 0x28
		::System::String* FileName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_CACHEDIMAGESAVEDATA__CTOR_OFFSET))(this);
		}
	};
}
