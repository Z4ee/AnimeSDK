#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalNPCLocation.h"
#include "unitysdk/MoleMole/GalGame/GalgameFilterType.h"
#include "unitysdk/MoleMole/GalGame/GalgameRainMode.h"
#include "unitysdk/MoleMole/GalGame/GalgameSubFilterType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalGameNPCEnterAction; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_GALGAMENPCENTERACTION_GALGAMENPCENTERACTION_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12BBD7C0)
#define MOLEMOLE_GALGAME_GALGAMENPCENTERACTION_GALGAMENPCENTERACTION_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12BBD7D0)
#define MOLEMOLE_GALGAME_GALGAMENPCENTERACTION_GALGAMENPCENTERACTION_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x12BBE050)
#define MOLEMOLE_GALGAME_GALGAMENPCENTERACTION_GALGAMENPCENTERACTION_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x12BBE560)
#define MOLEMOLE_GALGAME_GALGAMENPCENTERACTION_GALGAMENPCENTERACTION_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x12BBE520)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalGameNPCEnterAction_GalGameNPCEnterAction_UnityGeneratedFormatter_TypeDefinitionIndex = 44657;

	class GalGameNPCEnterAction_GalGameNPCEnterAction_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::GalGameNPCEnterAction*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalgameSubFilterType>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalgameSubFilterType>**)Il2CppClass::FromTypeDefinitionIndex(GalGameNPCEnterAction_GalGameNPCEnterAction_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EC40);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalNPCLocation>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalNPCLocation>**)Il2CppClass::FromTypeDefinitionIndex(GalGameNPCEnterAction_GalGameNPCEnterAction_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EC48);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GalGameNPCEnterAction_GalGameNPCEnterAction_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EC50);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GalGameNPCEnterAction_GalGameNPCEnterAction_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EC58);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalgameRainMode>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalgameRainMode>**)Il2CppClass::FromTypeDefinitionIndex(GalGameNPCEnterAction_GalGameNPCEnterAction_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EC60);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalgameFilterType>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalgameFilterType>**)Il2CppClass::FromTypeDefinitionIndex(GalGameNPCEnterAction_GalGameNPCEnterAction_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EC68);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GalGameNPCEnterAction_GalGameNPCEnterAction_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EC70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMENPCENTERACTION_GALGAMENPCENTERACTION_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMENPCENTERACTION_GALGAMENPCENTERACTION_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMENPCENTERACTION_GALGAMENPCENTERACTION_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalGameNPCEnterAction*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalGameNPCEnterAction*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMENPCENTERACTION_GALGAMENPCENTERACTION_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::GalGame::GalGameNPCEnterAction*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalGameNPCEnterAction*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMENPCENTERACTION_GALGAMENPCENTERACTION_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
