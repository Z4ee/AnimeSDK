#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournBuildRefShareCodeS11nErrorType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_982;
class Class_0_16E4307DCC419505_986;
class Class_0_16E4307DCC419505_987;
class Class_1_06F7995EB381C93A;
class Class_1_A6B0B39A319DDDE2_3;
namespace RPG::Client { class IRogueTournBuildRefDataItem; }
namespace RPG::Client { class RogueTournBuildRefShareCodeDataItem; }
namespace RPG::Client { class RogueTournModule; }
namespace System { class String; }
namespace System::Text::RegularExpressions { class Regex; }

#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER_DESERIALIZEFROMSERVERARCHIVE_OFFSET UNITYSDK_OFFSET(0x1AEF8280)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER_GET__ROGUETOURNMODULE_OFFSET UNITYSDK_OFFSET(0x1AF01E30)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER_GET__SHARECODEREGEX_OFFSET UNITYSDK_OFFSET(0x1AEFF550)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER_ISTEXTCONTAINSSHARECODELIKE_OFFSET UNITYSDK_OFFSET(0x1AF01CE0)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER_SERIALIZETOSERVERARCHIVE_OFFSET UNITYSDK_OFFSET(0x1AF01EB0)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER_SERIALIZETOSHARECODE_OFFSET UNITYSDK_OFFSET(0x1AEFFB90)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER_TRYFINDANDDESERIALIZESHARECODE_OFFSET UNITYSDK_OFFSET(0x1AEFE590)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER__CREATEDESERIALIZER_OFFSET UNITYSDK_OFFSET(0x1AF01C70)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER__CREATESERIALIZER_OFFSET UNITYSDK_OFFSET(0x1AF00080)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER__CREATEVALIDATOR_OFFSET UNITYSDK_OFFSET(0x1AEFF160)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER__DESERIALIZEFROMSHARECODE_OFFSET UNITYSDK_OFFSET(0x1AEFF5D0)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER__TOPAYLOAD_OFFSET UNITYSDK_OFFSET(0x1AF000F0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefShareCodeHelper_TypeDefinitionIndex = 67550;

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

		static ::Class_0_16E4307DCC419505_987* _CreateSerializer()
		{
			return ((::Class_0_16E4307DCC419505_987*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER__CREATESERIALIZER_OFFSET))();
		}

		static ::Class_0_16E4307DCC419505_986* _CreateDeserializer()
		{
			return ((::Class_0_16E4307DCC419505_986*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER__CREATEDESERIALIZER_OFFSET))();
		}

		static ::Class_1_06F7995EB381C93A* _ToPayload(::RPG::Client::IRogueTournBuildRefDataItem* a1)
		{
			return ((::Class_1_06F7995EB381C93A*(*)(::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER__TOPAYLOAD_OFFSET))(a1);
		}

		static ::RPG::Client::RogueTournBuildRefShareCodeDataItem* DeserializeFromServerArchive(::Class_1_A6B0B39A319DDDE2_3* a1)
		{
			return ((::RPG::Client::RogueTournBuildRefShareCodeDataItem*(*)(::Class_1_A6B0B39A319DDDE2_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER_DESERIALIZEFROMSERVERARCHIVE_OFFSET))(a1);
		}

		static ::Class_1_A6B0B39A319DDDE2_3* SerializeToServerArchive(::RPG::Client::RogueTournBuildRefShareCodeDataItem* a1)
		{
			return ((::Class_1_A6B0B39A319DDDE2_3*(*)(::RPG::Client::RogueTournBuildRefShareCodeDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER_SERIALIZETOSERVERARCHIVE_OFFSET))(a1);
		}

		static ::Class_0_16E4307DCC419505_982* _CreateValidator()
		{
			return ((::Class_0_16E4307DCC419505_982*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER__CREATEVALIDATOR_OFFSET))();
		}

		static ::RPG::Client::RogueTournModule* get__RogueTournModule()
		{
			return ((::RPG::Client::RogueTournModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER_GET__ROGUETOURNMODULE_OFFSET))();
		}
	};
}
