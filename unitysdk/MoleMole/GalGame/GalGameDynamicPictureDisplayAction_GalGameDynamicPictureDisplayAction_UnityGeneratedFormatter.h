#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalGameImgExchangeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalGameDynamicPictureDisplayAction; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_GALGAMEDYNAMICPICTUREDISPLAYACTION_GALGAMEDYNAMICPICTUREDISPLAYACTION_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1301FCC0)
#define MOLEMOLE_GALGAME_GALGAMEDYNAMICPICTUREDISPLAYACTION_GALGAMEDYNAMICPICTUREDISPLAYACTION_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1301FCD0)
#define MOLEMOLE_GALGAME_GALGAMEDYNAMICPICTUREDISPLAYACTION_GALGAMEDYNAMICPICTUREDISPLAYACTION_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x130200D0)
#define MOLEMOLE_GALGAME_GALGAMEDYNAMICPICTUREDISPLAYACTION_GALGAMEDYNAMICPICTUREDISPLAYACTION_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x13020370)
#define MOLEMOLE_GALGAME_GALGAMEDYNAMICPICTUREDISPLAYACTION_GALGAMEDYNAMICPICTUREDISPLAYACTION_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x13020330)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalGameDynamicPictureDisplayAction_GalGameDynamicPictureDisplayAction_UnityGeneratedFormatter_TypeDefinitionIndex = 52212;

	class GalGameDynamicPictureDisplayAction_GalGameDynamicPictureDisplayAction_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::GalGameDynamicPictureDisplayAction*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalGameImgExchangeType>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalGameImgExchangeType>**)Il2CppClass::FromTypeDefinitionIndex(GalGameDynamicPictureDisplayAction_GalGameDynamicPictureDisplayAction_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49D50);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GalGameDynamicPictureDisplayAction_GalGameDynamicPictureDisplayAction_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49D58);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GalGameDynamicPictureDisplayAction_GalGameDynamicPictureDisplayAction_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49D60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMEDYNAMICPICTUREDISPLAYACTION_GALGAMEDYNAMICPICTUREDISPLAYACTION_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMEDYNAMICPICTUREDISPLAYACTION_GALGAMEDYNAMICPICTUREDISPLAYACTION_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMEDYNAMICPICTUREDISPLAYACTION_GALGAMEDYNAMICPICTUREDISPLAYACTION_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalGameDynamicPictureDisplayAction*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalGameDynamicPictureDisplayAction*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMEDYNAMICPICTUREDISPLAYACTION_GALGAMEDYNAMICPICTUREDISPLAYACTION_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::GalGame::GalGameDynamicPictureDisplayAction*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalGameDynamicPictureDisplayAction*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMEDYNAMICPICTUREDISPLAYACTION_GALGAMEDYNAMICPICTUREDISPLAYACTION_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
