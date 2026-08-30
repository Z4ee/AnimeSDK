#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_ASSETSPATHDICT__CTOR_OFFSET UNITYSDK_OFFSET(0xC781A30)

namespace RPG::Client
{
	inline static constexpr unsigned int AssetsPathDict_TypeDefinitionIndex = 60147;

	class AssetsPathDict : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::System::String* Path; // 0x18
		::System::UInt64 rootBone; // 0x20
		::Il2CppArray<::System::UInt64>* boneIndexArr; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSPATHDICT__CTOR_OFFSET))(this);
		}
	};
}
