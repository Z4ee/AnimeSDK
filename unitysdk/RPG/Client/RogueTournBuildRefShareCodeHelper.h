#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournBuildRefShareCodeS11nErrorType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_893;
class Class_0_16E4307DCC419505_897;
class Class_0_16E4307DCC419505_898;
class Class_1_BD52D1CC7132DA5B;
class Class_1_E7EDAB23D97798C5_2;
namespace RPG::Client { class IRogueTournBuildRefDataItem; }
namespace RPG::Client { class RogueTournBuildRefShareCodeDataItem; }
namespace RPG::Client { class RogueTournModule; }
namespace System { class String; }
namespace System::Text::RegularExpressions { class Regex; }

#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER_DESERIALIZEFROMSERVERARCHIVE_OFFSET UNITYSDK_OFFSET(0xC7FAD90)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER_GET__ROGUETOURNMODULE_OFFSET UNITYSDK_OFFSET(0xC803AF0)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER_GET__SHARECODEREGEX_OFFSET UNITYSDK_OFFSET(0xC803A90)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER_ISTEXTCONTAINSSHARECODELIKE_OFFSET UNITYSDK_OFFSET(0xC803960)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER_SERIALIZETOSERVERARCHIVE_OFFSET UNITYSDK_OFFSET(0xC803B50)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER_SERIALIZETOSHARECODE_OFFSET UNITYSDK_OFFSET(0xC801CD0)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER_TRYFINDANDDESERIALIZESHARECODE_OFFSET UNITYSDK_OFFSET(0xC800AD0)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER__CREATEDESERIALIZER_OFFSET UNITYSDK_OFFSET(0xC8038F0)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER__CREATESERIALIZER_OFFSET UNITYSDK_OFFSET(0xC8020F0)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER__CREATEVALIDATOR_OFFSET UNITYSDK_OFFSET(0xC801430)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER__DESERIALIZEFROMSHARECODE_OFFSET UNITYSDK_OFFSET(0xC801770)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER__TOPAYLOAD_OFFSET UNITYSDK_OFFSET(0xC802160)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefShareCodeHelper_TypeDefinitionIndex = 63187;

	class RogueTournBuildRefShareCodeHelper : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueTournBuildRefShareCodeDataItem* TryFindAndDeserializeShareCode(::System::String* a1, ::System::String*& a2, ::RPG::Client::RogueTournBuildRefShareCodeS11nErrorType& a3)
		{
			return ((::RPG::Client::RogueTournBuildRefShareCodeDataItem*(*)(::System::String*, ::System::String*&, ::RPG::Client::RogueTournBuildRefShareCodeS11nErrorType&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER_TRYFINDANDDESERIALIZESHARECODE_OFFSET))(a1, a2, a3);
		}

		static ::System::String* SerializeToShareCode(::RPG::Client::IRogueTournBuildRefDataItem* a1)
		{
			return ((::System::String*(*)(::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER_SERIALIZETOSHARECODE_OFFSET))(a1);
		}

		static ::RPG::Client::RogueTournBuildRefShareCodeDataItem* _DeserializeFromShareCode(::System::String* a1)
		{
			return ((::RPG::Client::RogueTournBuildRefShareCodeDataItem*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER__DESERIALIZEFROMSHARECODE_OFFSET))(a1);
		}

		static ::System::Boolean IsTextContainsShareCodeLike(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER_ISTEXTCONTAINSSHARECODELIKE_OFFSET))(a1);
		}

		static ::System::Text::RegularExpressions::Regex* get__ShareCodeRegex()
		{
			return ((::System::Text::RegularExpressions::Regex*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER_GET__SHARECODEREGEX_OFFSET))();
		}

		static ::Class_0_16E4307DCC419505_898* _CreateSerializer()
		{
			return ((::Class_0_16E4307DCC419505_898*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER__CREATESERIALIZER_OFFSET))();
		}

		static ::Class_0_16E4307DCC419505_897* _CreateDeserializer()
		{
			return ((::Class_0_16E4307DCC419505_897*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER__CREATEDESERIALIZER_OFFSET))();
		}

		static ::Class_1_BD52D1CC7132DA5B* _ToPayload(::RPG::Client::IRogueTournBuildRefDataItem* a1)
		{
			return ((::Class_1_BD52D1CC7132DA5B*(*)(::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER__TOPAYLOAD_OFFSET))(a1);
		}

		static ::RPG::Client::RogueTournBuildRefShareCodeDataItem* DeserializeFromServerArchive(::Class_1_E7EDAB23D97798C5_2* a1)
		{
			return ((::RPG::Client::RogueTournBuildRefShareCodeDataItem*(*)(::Class_1_E7EDAB23D97798C5_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER_DESERIALIZEFROMSERVERARCHIVE_OFFSET))(a1);
		}

		static ::Class_1_E7EDAB23D97798C5_2* SerializeToServerArchive(::RPG::Client::RogueTournBuildRefShareCodeDataItem* a1)
		{
			return ((::Class_1_E7EDAB23D97798C5_2*(*)(::RPG::Client::RogueTournBuildRefShareCodeDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER_SERIALIZETOSERVERARCHIVE_OFFSET))(a1);
		}

		static ::Class_0_16E4307DCC419505_893* _CreateValidator()
		{
			return ((::Class_0_16E4307DCC419505_893*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER__CREATEVALIDATOR_OFFSET))();
		}

		static ::RPG::Client::RogueTournModule* get__RogueTournModule()
		{
			return ((::RPG::Client::RogueTournModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER_GET__ROGUETOURNMODULE_OFFSET))();
		}
	};
}
