#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournBuildRefShareCodeS11nErrorType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_842;
class Class_0_16E4307DCC419505_846;
class Class_0_16E4307DCC419505_847;
class Class_1_7D8428CCA14A6C35;
class Class_1_E7EDAB23D97798C5_2;
namespace RPG::Client { class IRogueTournBuildRefDataItem; }
namespace RPG::Client { class RogueTournBuildRefShareCodeDataItem; }
namespace RPG::Client { class RogueTournModule; }
namespace System { class String; }
namespace System::Text::RegularExpressions { class Regex; }

#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER_DESERIALIZEFROMSERVERARCHIVE_OFFSET UNITYSDK_OFFSET(0xB0A9DD0)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER_GET__ROGUETOURNMODULE_OFFSET UNITYSDK_OFFSET(0xB0B2D70)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER_GET__SHARECODEREGEX_OFFSET UNITYSDK_OFFSET(0xB0B2D10)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER_ISTEXTCONTAINSSHARECODELIKE_OFFSET UNITYSDK_OFFSET(0xB0B2BE0)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER_SERIALIZETOSERVERARCHIVE_OFFSET UNITYSDK_OFFSET(0xB0B2DD0)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER_SERIALIZETOSHARECODE_OFFSET UNITYSDK_OFFSET(0xB0B0E10)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER_TRYFINDANDDESERIALIZESHARECODE_OFFSET UNITYSDK_OFFSET(0xB0AFC70)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER__CREATEDESERIALIZER_OFFSET UNITYSDK_OFFSET(0xB0B2B70)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER__CREATESERIALIZER_OFFSET UNITYSDK_OFFSET(0xB0B1220)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER__CREATEVALIDATOR_OFFSET UNITYSDK_OFFSET(0xB0B0570)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER__DESERIALIZEFROMSHARECODE_OFFSET UNITYSDK_OFFSET(0xB0B08B0)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER__TOPAYLOAD_OFFSET UNITYSDK_OFFSET(0xB0B1290)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefShareCodeHelper_TypeDefinitionIndex = 62254;

	class RogueTournBuildRefShareCodeHelper : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueTournBuildRefShareCodeDataItem* TryFindAndDeserializeShareCode(::System::String* text, ::System::String*& importedShareCodeText, ::RPG::Client::RogueTournBuildRefShareCodeS11nErrorType& errorType)
		{
			return ((::RPG::Client::RogueTournBuildRefShareCodeDataItem*(*)(::System::String*, ::System::String*&, ::RPG::Client::RogueTournBuildRefShareCodeS11nErrorType&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER_TRYFINDANDDESERIALIZESHARECODE_OFFSET))(text, importedShareCodeText, errorType);
		}

		static ::System::String* SerializeToShareCode(::RPG::Client::IRogueTournBuildRefDataItem* buildRef)
		{
			return ((::System::String*(*)(::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER_SERIALIZETOSHARECODE_OFFSET))(buildRef);
		}

		static ::RPG::Client::RogueTournBuildRefShareCodeDataItem* _DeserializeFromShareCode(::System::String* shareCode)
		{
			return ((::RPG::Client::RogueTournBuildRefShareCodeDataItem*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER__DESERIALIZEFROMSHARECODE_OFFSET))(shareCode);
		}

		static ::System::Boolean IsTextContainsShareCodeLike(::System::String* text)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER_ISTEXTCONTAINSSHARECODELIKE_OFFSET))(text);
		}

		static ::System::Text::RegularExpressions::Regex* get__ShareCodeRegex()
		{
			return ((::System::Text::RegularExpressions::Regex*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER_GET__SHARECODEREGEX_OFFSET))();
		}

		static ::Class_0_16E4307DCC419505_847* _CreateSerializer()
		{
			return ((::Class_0_16E4307DCC419505_847*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER__CREATESERIALIZER_OFFSET))();
		}

		static ::Class_0_16E4307DCC419505_846* _CreateDeserializer()
		{
			return ((::Class_0_16E4307DCC419505_846*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER__CREATEDESERIALIZER_OFFSET))();
		}

		static ::Class_1_7D8428CCA14A6C35* _ToPayload(::RPG::Client::IRogueTournBuildRefDataItem* buildRef)
		{
			return ((::Class_1_7D8428CCA14A6C35*(*)(::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER__TOPAYLOAD_OFFSET))(buildRef);
		}

		static ::RPG::Client::RogueTournBuildRefShareCodeDataItem* DeserializeFromServerArchive(::Class_1_E7EDAB23D97798C5_2* proto)
		{
			return ((::RPG::Client::RogueTournBuildRefShareCodeDataItem*(*)(::Class_1_E7EDAB23D97798C5_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER_DESERIALIZEFROMSERVERARCHIVE_OFFSET))(proto);
		}

		static ::Class_1_E7EDAB23D97798C5_2* SerializeToServerArchive(::RPG::Client::RogueTournBuildRefShareCodeDataItem* buildRef)
		{
			return ((::Class_1_E7EDAB23D97798C5_2*(*)(::RPG::Client::RogueTournBuildRefShareCodeDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER_SERIALIZETOSERVERARCHIVE_OFFSET))(buildRef);
		}

		static ::Class_0_16E4307DCC419505_842* _CreateValidator()
		{
			return ((::Class_0_16E4307DCC419505_842*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER__CREATEVALIDATOR_OFFSET))();
		}

		static ::RPG::Client::RogueTournModule* get__RogueTournModule()
		{
			return ((::RPG::Client::RogueTournModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER_GET__ROGUETOURNMODULE_OFFSET))();
		}
	};
}
