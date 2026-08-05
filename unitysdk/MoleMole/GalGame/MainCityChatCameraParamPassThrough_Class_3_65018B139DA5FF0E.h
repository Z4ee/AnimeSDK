#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatCameraPassThroughTarget.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatCameraParamPassThrough; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMPASSTHROUGH_CLASS_3_65018B139DA5FF0E_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x136A5A90)
#define MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMPASSTHROUGH_CLASS_3_65018B139DA5FF0E_READMEMBER_OFFSET UNITYSDK_OFFSET(0x136A5AA0)
#define MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMPASSTHROUGH_CLASS_3_65018B139DA5FF0E_WRITE_OFFSET UNITYSDK_OFFSET(0x136A5B70)
#define MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMPASSTHROUGH_CLASS_3_65018B139DA5FF0E__CCTOR_OFFSET UNITYSDK_OFFSET(0x136A5C60)
#define MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMPASSTHROUGH_CLASS_3_65018B139DA5FF0E__CTOR_OFFSET UNITYSDK_OFFSET(0x136A5C20)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatCameraParamPassThrough_Class_3_65018B139DA5FF0E_TypeDefinitionIndex = 43037;

	class MainCityChatCameraParamPassThrough_Class_3_65018B139DA5FF0E : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatCameraParamPassThrough*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatCameraPassThroughTarget>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatCameraPassThroughTarget>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatCameraParamPassThrough_Class_3_65018B139DA5FF0E_TypeDefinitionIndex)->GetStaticField(0x4D610);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMPASSTHROUGH_CLASS_3_65018B139DA5FF0E__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMPASSTHROUGH_CLASS_3_65018B139DA5FF0E__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMPASSTHROUGH_CLASS_3_65018B139DA5FF0E_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatCameraParamPassThrough*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatCameraParamPassThrough*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMPASSTHROUGH_CLASS_3_65018B139DA5FF0E_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatCameraParamPassThrough*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatCameraParamPassThrough*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCAMERAPARAMPASSTHROUGH_CLASS_3_65018B139DA5FF0E_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
