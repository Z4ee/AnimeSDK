#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::MiniGame::TartarusHounds { class MonoHoundEffectConfig; }
namespace MoleMole::MiniGame::TartarusHounds::View { class ImageEffectConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDEFFECTCONFIG_CLASS_3_E5E58F931B973B38_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1685E430)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDEFFECTCONFIG_CLASS_3_E5E58F931B973B38_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1685E440)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDEFFECTCONFIG_CLASS_3_E5E58F931B973B38_WRITE_OFFSET UNITYSDK_OFFSET(0x1685E5E0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDEFFECTCONFIG_CLASS_3_E5E58F931B973B38__CCTOR_OFFSET UNITYSDK_OFFSET(0x1685E740)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDEFFECTCONFIG_CLASS_3_E5E58F931B973B38__CTOR_OFFSET UNITYSDK_OFFSET(0x1685E700)

namespace MoleMole::MiniGame::TartarusHounds
{
	inline static constexpr unsigned int MonoHoundEffectConfig_Class_3_E5E58F931B973B38_TypeDefinitionIndex = 81730;

	class MonoHoundEffectConfig_Class_3_E5E58F931B973B38 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MiniGame::TartarusHounds::MonoHoundEffectConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::MiniGame::TartarusHounds::View::ImageEffectConfig*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::MiniGame::TartarusHounds::View::ImageEffectConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoHoundEffectConfig_Class_3_E5E58F931B973B38_TypeDefinitionIndex)->GetStaticField(0x367D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDEFFECTCONFIG_CLASS_3_E5E58F931B973B38__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDEFFECTCONFIG_CLASS_3_E5E58F931B973B38__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDEFFECTCONFIG_CLASS_3_E5E58F931B973B38_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MiniGame::TartarusHounds::MonoHoundEffectConfig*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::MonoHoundEffectConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDEFFECTCONFIG_CLASS_3_E5E58F931B973B38_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::MiniGame::TartarusHounds::MonoHoundEffectConfig*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::MonoHoundEffectConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDEFFECTCONFIG_CLASS_3_E5E58F931B973B38_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
