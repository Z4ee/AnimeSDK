#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatNPCLocation.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatNPCEnterAction; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_MAINCITYCHATNPCENTERACTION_MAINCITYCHATNPCENTERACTION_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A031740)
#define MOLEMOLE_GALGAME_MAINCITYCHATNPCENTERACTION_MAINCITYCHATNPCENTERACTION_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A031750)
#define MOLEMOLE_GALGAME_MAINCITYCHATNPCENTERACTION_MAINCITYCHATNPCENTERACTION_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1A0319F0)
#define MOLEMOLE_GALGAME_MAINCITYCHATNPCENTERACTION_MAINCITYCHATNPCENTERACTION_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A031BE0)
#define MOLEMOLE_GALGAME_MAINCITYCHATNPCENTERACTION_MAINCITYCHATNPCENTERACTION_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A031BA0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatNPCEnterAction_MainCityChatNPCEnterAction_UnityGeneratedFormatter_TypeDefinitionIndex = 84528;

	class MainCityChatNPCEnterAction_MainCityChatNPCEnterAction_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatNPCEnterAction*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatNPCLocation>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatNPCLocation>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatNPCEnterAction_MainCityChatNPCEnterAction_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4BDC0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatNPCEnterAction_MainCityChatNPCEnterAction_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4BDC8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatNPCEnterAction_MainCityChatNPCEnterAction_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4BDD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATNPCENTERACTION_MAINCITYCHATNPCENTERACTION_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATNPCENTERACTION_MAINCITYCHATNPCENTERACTION_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATNPCENTERACTION_MAINCITYCHATNPCENTERACTION_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatNPCEnterAction*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatNPCEnterAction*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATNPCENTERACTION_MAINCITYCHATNPCENTERACTION_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatNPCEnterAction*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatNPCEnterAction*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATNPCENTERACTION_MAINCITYCHATNPCENTERACTION_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
