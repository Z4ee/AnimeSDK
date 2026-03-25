#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PHOTOGRAPHAVATARCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x174A8830)
#define RPG_GAMECORE_PHOTOGRAPHAVATARCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x174A8980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphAvatarConfigRow_TypeDefinitionIndex = 13227;

	class PhotoGraphAvatarConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EmotionConfigList; // 0x10
		::System::UInt32 AvatarID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAVATARCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PhotoGraphAvatarConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphAvatarConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAVATARCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
