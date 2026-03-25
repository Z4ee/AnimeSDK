#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/ToastType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_TOASTPAGE_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1788A090)
#define RPG_GAMECORE_TOASTPAGE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x178A2380)
#define RPG_GAMECORE_TOASTPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1788A060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ToastPage_TypeDefinitionIndex = 18591;

	class ToastPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ToastType Type; // 0x18
		::RPG::Client::TextID MessageOne; // 0x20
		::RPG::GameCore::DynamicString* MessageOne_DS; // 0x30
		::RPG::Client::TextID MessageTwo; // 0x38
		::RPG::GameCore::DynamicString* MessageTwo_DS; // 0x48
		::System::Boolean CanInterrupt; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ToastPage*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ToastPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTPAGE_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ToastPage* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ToastPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTPAGE_FROMBINARYIMPL_OFFSET))(array, val);
		}
	};
}
