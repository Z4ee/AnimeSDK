#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define RPG_GAMECORE_TOASTPILE_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1909F5A0)
#define RPG_GAMECORE_TOASTPILE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1909F520)
#define RPG_GAMECORE_TOASTPILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1909F570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ToastPile_TypeDefinitionIndex = 22739;

	class ToastPile : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* ImgPath; // 0x18
		::RPG::Client::TextID DescTextID; // 0x20
		::RPG::GameCore::DynamicString* DescTextKey; // 0x30
		::System::String* TextIDParam; // 0x38
		::RPG::GameCore::DynamicFloat* TextIDFloatParam; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTPILE__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ToastPile*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ToastPile*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTPILE_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ToastPile* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ToastPile*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTPILE_FROMBINARYIMPL_OFFSET))(array, val);
		}
	};
}
