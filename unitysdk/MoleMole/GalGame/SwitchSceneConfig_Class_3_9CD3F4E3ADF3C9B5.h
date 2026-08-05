#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class AudioEventItem; }
namespace MoleMole::GalGame { class SwitchSceneConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_SWITCHSCENECONFIG_CLASS_3_9CD3F4E3ADF3C9B5_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1924E780)
#define MOLEMOLE_GALGAME_SWITCHSCENECONFIG_CLASS_3_9CD3F4E3ADF3C9B5_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1924E790)
#define MOLEMOLE_GALGAME_SWITCHSCENECONFIG_CLASS_3_9CD3F4E3ADF3C9B5_WRITE_OFFSET UNITYSDK_OFFSET(0x1924EB40)
#define MOLEMOLE_GALGAME_SWITCHSCENECONFIG_CLASS_3_9CD3F4E3ADF3C9B5__CCTOR_OFFSET UNITYSDK_OFFSET(0x1924EDB0)
#define MOLEMOLE_GALGAME_SWITCHSCENECONFIG_CLASS_3_9CD3F4E3ADF3C9B5__CTOR_OFFSET UNITYSDK_OFFSET(0x1924ED70)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int SwitchSceneConfig_Class_3_9CD3F4E3ADF3C9B5_TypeDefinitionIndex = 45784;

	class SwitchSceneConfig_Class_3_9CD3F4E3ADF3C9B5 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::SwitchSceneConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(SwitchSceneConfig_Class_3_9CD3F4E3ADF3C9B5_TypeDefinitionIndex)->GetStaticField(0x4FD60);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SwitchSceneConfig_Class_3_9CD3F4E3ADF3C9B5_TypeDefinitionIndex)->GetStaticField(0x4FD68);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(SwitchSceneConfig_Class_3_9CD3F4E3ADF3C9B5_TypeDefinitionIndex)->GetStaticField(0x4FD70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_SWITCHSCENECONFIG_CLASS_3_9CD3F4E3ADF3C9B5__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_SWITCHSCENECONFIG_CLASS_3_9CD3F4E3ADF3C9B5__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_SWITCHSCENECONFIG_CLASS_3_9CD3F4E3ADF3C9B5_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::SwitchSceneConfig*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::SwitchSceneConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_SWITCHSCENECONFIG_CLASS_3_9CD3F4E3ADF3C9B5_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::SwitchSceneConfig*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::SwitchSceneConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_SWITCHSCENECONFIG_CLASS_3_9CD3F4E3ADF3C9B5_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
