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

#define MOLEMOLE_GALGAME_MAINCITYMULTICHATNPCENTERACTION_MAINCITYMULTICHATNPCENTERACTION_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A0333E0)
#define MOLEMOLE_GALGAME_MAINCITYMULTICHATNPCENTERACTION_MAINCITYMULTICHATNPCENTERACTION_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A0333F0)
#define MOLEMOLE_GALGAME_MAINCITYMULTICHATNPCENTERACTION_MAINCITYMULTICHATNPCENTERACTION_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1A0335D0)
#define MOLEMOLE_GALGAME_MAINCITYMULTICHATNPCENTERACTION_MAINCITYMULTICHATNPCENTERACTION_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A033770)
#define MOLEMOLE_GALGAME_MAINCITYMULTICHATNPCENTERACTION_MAINCITYMULTICHATNPCENTERACTION_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A033730)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityMultiChatNPCEnterAction_MainCityMultiChatNPCEnterAction_UnityGeneratedFormatter_TypeDefinitionIndex = 57954;

	class MainCityMultiChatNPCEnterAction_MainCityMultiChatNPCEnterAction_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityMultiChatNPCEnterAction*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityMultiChatNPCEnterAction_MainCityMultiChatNPCEnterAction_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4BE20);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::InLevelChatEntitySlot>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::InLevelChatEntitySlot>**)Il2CppClass::FromTypeDefinitionIndex(MainCityMultiChatNPCEnterAction_MainCityMultiChatNPCEnterAction_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4BE28);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYMULTICHATNPCENTERACTION_MAINCITYMULTICHATNPCENTERACTION_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYMULTICHATNPCENTERACTION_MAINCITYMULTICHATNPCENTERACTION_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYMULTICHATNPCENTERACTION_MAINCITYMULTICHATNPCENTERACTION_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityMultiChatNPCEnterAction*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityMultiChatNPCEnterAction*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYMULTICHATNPCENTERACTION_MAINCITYMULTICHATNPCENTERACTION_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityMultiChatNPCEnterAction*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityMultiChatNPCEnterAction*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYMULTICHATNPCENTERACTION_MAINCITYMULTICHATNPCENTERACTION_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
