#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::GalGame { class MainCityChatCameraParamFixed; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMFIXED_MAINCITYCHATCAMERAPARAMFIXED_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x10D4A970)
#define MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMFIXED_MAINCITYCHATCAMERAPARAMFIXED_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x10D4A980)
#define MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMFIXED_MAINCITYCHATCAMERAPARAMFIXED_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x10D4AC40)
#define MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMFIXED_MAINCITYCHATCAMERAPARAMFIXED_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x10D4AE60)
#define MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMFIXED_MAINCITYCHATCAMERAPARAMFIXED_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x10D4AE20)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatCameraParamFixed_MainCityChatCameraParamFixed_UnityGeneratedFormatter_TypeDefinitionIndex = 63357;

	class MainCityChatCameraParamFixed_MainCityChatCameraParamFixed_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatCameraParamFixed*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatCameraParamFixed_MainCityChatCameraParamFixed_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x34210);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatCameraParamFixed_MainCityChatCameraParamFixed_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x34218);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMFIXED_MAINCITYCHATCAMERAPARAMFIXED_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMFIXED_MAINCITYCHATCAMERAPARAMFIXED_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMFIXED_MAINCITYCHATCAMERAPARAMFIXED_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatCameraParamFixed*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatCameraParamFixed*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMFIXED_MAINCITYCHATCAMERAPARAMFIXED_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatCameraParamFixed*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatCameraParamFixed*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMFIXED_MAINCITYCHATCAMERAPARAMFIXED_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
