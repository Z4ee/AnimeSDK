#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IntroDataRow; }

#define RPG_CLIENT_INTRODUCE_INTRODUCEVIEWMODEL_GET_DESC_OFFSET UNITYSDK_OFFSET(0xD406B90)
#define RPG_CLIENT_INTRODUCE_INTRODUCEVIEWMODEL_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xD406B20)
#define RPG_CLIENT_INTRODUCE_INTRODUCEVIEWMODEL_TRYCREATE_OFFSET UNITYSDK_OFFSET(0xD406A70)
#define RPG_CLIENT_INTRODUCE_INTRODUCEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xD406C10)

namespace RPG::Client::Introduce
{
	inline static constexpr unsigned int IntroduceViewModel_TypeDefinitionIndex = 79158;

	class IntroduceViewModel : public ::System::Object
	{
	public:
		::RPG::GameCore::IntroDataRow* _Row; // 0x10

		::System::Void _ctor(::RPG::GameCore::IntroDataRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IntroDataRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INTRODUCE_INTRODUCEVIEWMODEL__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INTRODUCE_INTRODUCEVIEWMODEL_GET_TITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INTRODUCE_INTRODUCEVIEWMODEL_GET_DESC_OFFSET))(this);
		}

		static ::RPG::Client::Introduce::IntroduceViewModel* TryCreate(::System::UInt32 a1)
		{
			return ((::RPG::Client::Introduce::IntroduceViewModel*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_INTRODUCE_INTRODUCEVIEWMODEL_TRYCREATE_OFFSET))(a1);
		}
	};
}
