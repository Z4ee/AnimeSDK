#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalGamePictureDisplayAction; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_GALGAMEPICTUREDISPLAYACTION_CLASS_3_C916DCB18D31BD55_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x136A3E20)
#define MOLEMOLE_GALGAME_GALGAMEPICTUREDISPLAYACTION_CLASS_3_C916DCB18D31BD55_READMEMBER_OFFSET UNITYSDK_OFFSET(0x136A3E30)
#define MOLEMOLE_GALGAME_GALGAMEPICTUREDISPLAYACTION_CLASS_3_C916DCB18D31BD55_WRITE_OFFSET UNITYSDK_OFFSET(0x136A3F00)
#define MOLEMOLE_GALGAME_GALGAMEPICTUREDISPLAYACTION_CLASS_3_C916DCB18D31BD55__CCTOR_OFFSET UNITYSDK_OFFSET(0x136A3FF0)
#define MOLEMOLE_GALGAME_GALGAMEPICTUREDISPLAYACTION_CLASS_3_C916DCB18D31BD55__CTOR_OFFSET UNITYSDK_OFFSET(0x136A3FB0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalGamePictureDisplayAction_Class_3_C916DCB18D31BD55_TypeDefinitionIndex = 75847;

	class GalGamePictureDisplayAction_Class_3_C916DCB18D31BD55 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::GalGamePictureDisplayAction*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GalGamePictureDisplayAction_Class_3_C916DCB18D31BD55_TypeDefinitionIndex)->GetStaticField(0x4D5B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMEPICTUREDISPLAYACTION_CLASS_3_C916DCB18D31BD55__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMEPICTUREDISPLAYACTION_CLASS_3_C916DCB18D31BD55__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMEPICTUREDISPLAYACTION_CLASS_3_C916DCB18D31BD55_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalGamePictureDisplayAction*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalGamePictureDisplayAction*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMEPICTUREDISPLAYACTION_CLASS_3_C916DCB18D31BD55_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::GalGamePictureDisplayAction*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalGamePictureDisplayAction*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMEPICTUREDISPLAYACTION_CLASS_3_C916DCB18D31BD55_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
