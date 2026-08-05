#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class UIMaincityGameFindBangbooChatShowConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG_CLASS_3_E7BA7F7C78834107_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19BF2D00)
#define MOLEMOLE_GALGAME_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG_CLASS_3_E7BA7F7C78834107_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19BF2D10)
#define MOLEMOLE_GALGAME_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG_CLASS_3_E7BA7F7C78834107_WRITE_OFFSET UNITYSDK_OFFSET(0x19BF3020)
#define MOLEMOLE_GALGAME_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG_CLASS_3_E7BA7F7C78834107__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BF3240)
#define MOLEMOLE_GALGAME_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG_CLASS_3_E7BA7F7C78834107__CTOR_OFFSET UNITYSDK_OFFSET(0x19BF3200)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int UIMaincityGameFindBangbooChatShowConfig_Class_3_E7BA7F7C78834107_TypeDefinitionIndex = 42085;

	class UIMaincityGameFindBangbooChatShowConfig_Class_3_E7BA7F7C78834107 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::UIMaincityGameFindBangbooChatShowConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIMaincityGameFindBangbooChatShowConfig_Class_3_E7BA7F7C78834107_TypeDefinitionIndex)->GetStaticField(0x48DB0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::UInt32>** StaticGet_Field_3_3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(UIMaincityGameFindBangbooChatShowConfig_Class_3_E7BA7F7C78834107_TypeDefinitionIndex)->GetStaticField(0x48DB8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIMaincityGameFindBangbooChatShowConfig_Class_3_E7BA7F7C78834107_TypeDefinitionIndex)->GetStaticField(0x48DC0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIMaincityGameFindBangbooChatShowConfig_Class_3_E7BA7F7C78834107_TypeDefinitionIndex)->GetStaticField(0x48DC8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG_CLASS_3_E7BA7F7C78834107__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG_CLASS_3_E7BA7F7C78834107__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG_CLASS_3_E7BA7F7C78834107_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::UIMaincityGameFindBangbooChatShowConfig*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::UIMaincityGameFindBangbooChatShowConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG_CLASS_3_E7BA7F7C78834107_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::UIMaincityGameFindBangbooChatShowConfig*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::UIMaincityGameFindBangbooChatShowConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG_CLASS_3_E7BA7F7C78834107_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
