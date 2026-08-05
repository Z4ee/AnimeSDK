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

#define MOLEMOLE_GALGAME_GALGAMEDYNAMICPICTUREDISPLAYACTION_CLASS_3_2D875E3638800505_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19BEB940)
#define MOLEMOLE_GALGAME_GALGAMEDYNAMICPICTUREDISPLAYACTION_CLASS_3_2D875E3638800505_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19BEB950)
#define MOLEMOLE_GALGAME_GALGAMEDYNAMICPICTUREDISPLAYACTION_CLASS_3_2D875E3638800505_WRITE_OFFSET UNITYSDK_OFFSET(0x19BEBD00)
#define MOLEMOLE_GALGAME_GALGAMEDYNAMICPICTUREDISPLAYACTION_CLASS_3_2D875E3638800505__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BEBF70)
#define MOLEMOLE_GALGAME_GALGAMEDYNAMICPICTUREDISPLAYACTION_CLASS_3_2D875E3638800505__CTOR_OFFSET UNITYSDK_OFFSET(0x19BEBF30)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalGameDynamicPictureDisplayAction_Class_3_2D875E3638800505_TypeDefinitionIndex = 47347;

	class GalGameDynamicPictureDisplayAction_Class_3_2D875E3638800505 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::GalGameDynamicPictureDisplayAction*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalGameImgExchangeType>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalGameImgExchangeType>**)Il2CppClass::FromTypeDefinitionIndex(GalGameDynamicPictureDisplayAction_Class_3_2D875E3638800505_TypeDefinitionIndex)->GetStaticField(0x48C30);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GalGameDynamicPictureDisplayAction_Class_3_2D875E3638800505_TypeDefinitionIndex)->GetStaticField(0x48C38);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GalGameDynamicPictureDisplayAction_Class_3_2D875E3638800505_TypeDefinitionIndex)->GetStaticField(0x48C40);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMEDYNAMICPICTUREDISPLAYACTION_CLASS_3_2D875E3638800505__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMEDYNAMICPICTUREDISPLAYACTION_CLASS_3_2D875E3638800505__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMEDYNAMICPICTUREDISPLAYACTION_CLASS_3_2D875E3638800505_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalGameDynamicPictureDisplayAction*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalGameDynamicPictureDisplayAction*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMEDYNAMICPICTUREDISPLAYACTION_CLASS_3_2D875E3638800505_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::GalGameDynamicPictureDisplayAction*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalGameDynamicPictureDisplayAction*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMEDYNAMICPICTUREDISPLAYACTION_CLASS_3_2D875E3638800505_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
