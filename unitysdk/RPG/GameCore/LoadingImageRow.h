#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LOADINGIMAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DD73D60)
#define RPG_GAMECORE_LOADINGIMAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD742D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoadingImageRow_TypeDefinitionIndex = 13880;

	class LoadingImageRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::System::UInt32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGIMAGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoadingImageRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoadingImageRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGIMAGEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
