#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalGameNPCFadeAction_FadeType.h"
#include "unitysdk/MoleMole/GalGame/GalNPCLocation.h"
#include "unitysdk/MoleMole/GalGame/GalgameFilterType.h"
#include "unitysdk/MoleMole/GalGame/GalgameRainMode.h"
#include "unitysdk/MoleMole/GalGame/GalgameSubFilterType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalGameNPCFadeAction; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_GALGAMENPCFADEACTION_GALGAMENPCFADEACTION_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x13EDD130)
#define MOLEMOLE_GALGAME_GALGAMENPCFADEACTION_GALGAMENPCFADEACTION_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x13EDD140)
#define MOLEMOLE_GALGAME_GALGAMENPCFADEACTION_GALGAMENPCFADEACTION_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x13EDDA70)
#define MOLEMOLE_GALGAME_GALGAMENPCFADEACTION_GALGAMENPCFADEACTION_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x13EDDFE0)
#define MOLEMOLE_GALGAME_GALGAMENPCFADEACTION_GALGAMENPCFADEACTION_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x13EDDFA0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalGameNPCFadeAction_GalGameNPCFadeAction_UnityGeneratedFormatter_TypeDefinitionIndex = 60636;

	class GalGameNPCFadeAction_GalGameNPCFadeAction_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::GalGameNPCFadeAction*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalgameFilterType>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalgameFilterType>**)Il2CppClass::FromTypeDefinitionIndex(GalGameNPCFadeAction_GalGameNPCFadeAction_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4D850);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalGameNPCFadeAction_FadeType>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalGameNPCFadeAction_FadeType>**)Il2CppClass::FromTypeDefinitionIndex(GalGameNPCFadeAction_GalGameNPCFadeAction_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4D858);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalNPCLocation>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalNPCLocation>**)Il2CppClass::FromTypeDefinitionIndex(GalGameNPCFadeAction_GalGameNPCFadeAction_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4D860);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalgameRainMode>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalgameRainMode>**)Il2CppClass::FromTypeDefinitionIndex(GalGameNPCFadeAction_GalGameNPCFadeAction_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4D868);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalgameSubFilterType>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalgameSubFilterType>**)Il2CppClass::FromTypeDefinitionIndex(GalGameNPCFadeAction_GalGameNPCFadeAction_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4D870);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GalGameNPCFadeAction_GalGameNPCFadeAction_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4D878);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GalGameNPCFadeAction_GalGameNPCFadeAction_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4D880);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GalGameNPCFadeAction_GalGameNPCFadeAction_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4D888);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMENPCFADEACTION_GALGAMENPCFADEACTION_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMENPCFADEACTION_GALGAMENPCFADEACTION_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMENPCFADEACTION_GALGAMENPCFADEACTION_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalGameNPCFadeAction*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalGameNPCFadeAction*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMENPCFADEACTION_GALGAMENPCFADEACTION_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::GalGame::GalGameNPCFadeAction*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalGameNPCFadeAction*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMENPCFADEACTION_GALGAMENPCFADEACTION_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
