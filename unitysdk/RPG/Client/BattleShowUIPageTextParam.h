#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATTLESHOWUIPAGETEXTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xB417AF0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleShowUIPageTextParam_TypeDefinitionIndex = 67152;

	class BattleShowUIPageTextParam : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* ParamList; // 0x10
		::System::String* SDFPath; // 0x18
		::System::String* TextPath; // 0x20
		::RPG::Client::TextID TextContent; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESHOWUIPAGETEXTPARAM__CTOR_OFFSET))(this);
		}
	};
}
