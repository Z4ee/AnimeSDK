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

#define MOLEMOLE_GALGAME_MAINCITYCHATNPCENTERACTION_CLASS_3_7F8842FD76FE0F02_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x136A5CE0)
#define MOLEMOLE_GALGAME_MAINCITYCHATNPCENTERACTION_CLASS_3_7F8842FD76FE0F02_READMEMBER_OFFSET UNITYSDK_OFFSET(0x136A5CF0)
#define MOLEMOLE_GALGAME_MAINCITYCHATNPCENTERACTION_CLASS_3_7F8842FD76FE0F02_WRITE_OFFSET UNITYSDK_OFFSET(0x136A5F40)
#define MOLEMOLE_GALGAME_MAINCITYCHATNPCENTERACTION_CLASS_3_7F8842FD76FE0F02__CCTOR_OFFSET UNITYSDK_OFFSET(0x136A6100)
#define MOLEMOLE_GALGAME_MAINCITYCHATNPCENTERACTION_CLASS_3_7F8842FD76FE0F02__CTOR_OFFSET UNITYSDK_OFFSET(0x136A60C0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatNPCEnterAction_Class_3_7F8842FD76FE0F02_TypeDefinitionIndex = 79794;

	class MainCityChatNPCEnterAction_Class_3_7F8842FD76FE0F02 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatNPCEnterAction*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatNPCEnterAction_Class_3_7F8842FD76FE0F02_TypeDefinitionIndex)->GetStaticField(0x4D620);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatNPCLocation>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatNPCLocation>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatNPCEnterAction_Class_3_7F8842FD76FE0F02_TypeDefinitionIndex)->GetStaticField(0x4D628);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatNPCEnterAction_Class_3_7F8842FD76FE0F02_TypeDefinitionIndex)->GetStaticField(0x4D630);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATNPCENTERACTION_CLASS_3_7F8842FD76FE0F02__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATNPCENTERACTION_CLASS_3_7F8842FD76FE0F02__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATNPCENTERACTION_CLASS_3_7F8842FD76FE0F02_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatNPCEnterAction*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatNPCEnterAction*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATNPCENTERACTION_CLASS_3_7F8842FD76FE0F02_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatNPCEnterAction*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatNPCEnterAction*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATNPCENTERACTION_CLASS_3_7F8842FD76FE0F02_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
