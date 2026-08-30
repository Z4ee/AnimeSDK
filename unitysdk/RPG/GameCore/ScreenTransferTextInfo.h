#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ScreenTransferSingleTextInfo; }

#define RPG_GAMECORE_SCREENTRANSFERTEXTINFO_METHOD_2_80830381444B2D23_OFFSET UNITYSDK_OFFSET(0x1DB49EE0)
#define RPG_GAMECORE_SCREENTRANSFERTEXTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB4A090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ScreenTransferTextInfo_TypeDefinitionIndex = 20619;

	class ScreenTransferTextInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean NotAuto; // 0x10
		::System::Boolean PlayVoice; // 0x11
		::Il2CppArray<::RPG::GameCore::ScreenTransferSingleTextInfo*>* TextList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCREENTRANSFERTEXTINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_80830381444B2D23(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ScreenTransferTextInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ScreenTransferTextInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCREENTRANSFERTEXTINFO_METHOD_2_80830381444B2D23_OFFSET))(a1, a2);
		}
	};
}
