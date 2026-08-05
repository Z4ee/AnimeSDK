#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/InLevelChatEntitySlot.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityMultiChatNPCEnterAction; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_MAINCITYMULTICHATNPCENTERACTION_CLASS_3_48D4B737C3A1A906_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x179007A0)
#define MOLEMOLE_GALGAME_MAINCITYMULTICHATNPCENTERACTION_CLASS_3_48D4B737C3A1A906_READMEMBER_OFFSET UNITYSDK_OFFSET(0x179007B0)
#define MOLEMOLE_GALGAME_MAINCITYMULTICHATNPCENTERACTION_CLASS_3_48D4B737C3A1A906_WRITE_OFFSET UNITYSDK_OFFSET(0x17900940)
#define MOLEMOLE_GALGAME_MAINCITYMULTICHATNPCENTERACTION_CLASS_3_48D4B737C3A1A906__CCTOR_OFFSET UNITYSDK_OFFSET(0x17900AA0)
#define MOLEMOLE_GALGAME_MAINCITYMULTICHATNPCENTERACTION_CLASS_3_48D4B737C3A1A906__CTOR_OFFSET UNITYSDK_OFFSET(0x17900A60)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityMultiChatNPCEnterAction_Class_3_48D4B737C3A1A906_TypeDefinitionIndex = 67951;

	class MainCityMultiChatNPCEnterAction_Class_3_48D4B737C3A1A906 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityMultiChatNPCEnterAction*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityMultiChatNPCEnterAction_Class_3_48D4B737C3A1A906_TypeDefinitionIndex)->GetStaticField(0x426C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::InLevelChatEntitySlot>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::InLevelChatEntitySlot>**)Il2CppClass::FromTypeDefinitionIndex(MainCityMultiChatNPCEnterAction_Class_3_48D4B737C3A1A906_TypeDefinitionIndex)->GetStaticField(0x426C8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYMULTICHATNPCENTERACTION_CLASS_3_48D4B737C3A1A906__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYMULTICHATNPCENTERACTION_CLASS_3_48D4B737C3A1A906__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYMULTICHATNPCENTERACTION_CLASS_3_48D4B737C3A1A906_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityMultiChatNPCEnterAction*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityMultiChatNPCEnterAction*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYMULTICHATNPCENTERACTION_CLASS_3_48D4B737C3A1A906_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityMultiChatNPCEnterAction*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityMultiChatNPCEnterAction*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYMULTICHATNPCENTERACTION_CLASS_3_48D4B737C3A1A906_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
