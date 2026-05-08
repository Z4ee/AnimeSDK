#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatCameraPassThroughTarget.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatCameraParamPassThrough; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMPASSTHROUGH_MAINCITYCHATCAMERAPARAMPASSTHROUGH_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x13834B20)
#define MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMPASSTHROUGH_MAINCITYCHATCAMERAPARAMPASSTHROUGH_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x13834B30)
#define MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMPASSTHROUGH_MAINCITYCHATCAMERAPARAMPASSTHROUGH_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x13834C60)
#define MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMPASSTHROUGH_MAINCITYCHATCAMERAPARAMPASSTHROUGH_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x13834DA0)
#define MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMPASSTHROUGH_MAINCITYCHATCAMERAPARAMPASSTHROUGH_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x13834D60)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatCameraParamPassThrough_MainCityChatCameraParamPassThrough_UnityGeneratedFormatter_TypeDefinitionIndex = 42747;

	class MainCityChatCameraParamPassThrough_MainCityChatCameraParamPassThrough_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatCameraParamPassThrough*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatCameraPassThroughTarget>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatCameraPassThroughTarget>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatCameraParamPassThrough_MainCityChatCameraParamPassThrough_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40460);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMPASSTHROUGH_MAINCITYCHATCAMERAPARAMPASSTHROUGH_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMPASSTHROUGH_MAINCITYCHATCAMERAPARAMPASSTHROUGH_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMPASSTHROUGH_MAINCITYCHATCAMERAPARAMPASSTHROUGH_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatCameraParamPassThrough*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatCameraParamPassThrough*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMPASSTHROUGH_MAINCITYCHATCAMERAPARAMPASSTHROUGH_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatCameraParamPassThrough*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatCameraParamPassThrough*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMPASSTHROUGH_MAINCITYCHATCAMERAPARAMPASSTHROUGH_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
