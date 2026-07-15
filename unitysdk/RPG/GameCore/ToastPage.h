#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/ToastType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_TOASTPAGE_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1C156750)
#define RPG_GAMECORE_TOASTPAGE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C156710)
#define RPG_GAMECORE_TOASTPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C156740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ToastPage_TypeDefinitionIndex = 19522;

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

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ToastPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ToastPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTPAGE_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ToastPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ToastPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTPAGE_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
