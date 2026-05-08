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

#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDEFFECTCONFIG_MONOHOUNDEFFECTCONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x10E29C80)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDEFFECTCONFIG_MONOHOUNDEFFECTCONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x10E29C90)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDEFFECTCONFIG_MONOHOUNDEFFECTCONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x10E29E70)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDEFFECTCONFIG_MONOHOUNDEFFECTCONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x10E2A010)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDEFFECTCONFIG_MONOHOUNDEFFECTCONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x10E29FD0)

namespace MoleMole::MiniGame::TartarusHounds
{
	inline static constexpr unsigned int MonoHoundEffectConfig_MonoHoundEffectConfig_UnityGeneratedFormatter_TypeDefinitionIndex = 70781;

	class MonoHoundEffectConfig_MonoHoundEffectConfig_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MiniGame::TartarusHounds::MonoHoundEffectConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::MiniGame::TartarusHounds::View::ImageEffectConfig*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::MiniGame::TartarusHounds::View::ImageEffectConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoHoundEffectConfig_MonoHoundEffectConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x379D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDEFFECTCONFIG_MONOHOUNDEFFECTCONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDEFFECTCONFIG_MONOHOUNDEFFECTCONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDEFFECTCONFIG_MONOHOUNDEFFECTCONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MiniGame::TartarusHounds::MonoHoundEffectConfig*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::MonoHoundEffectConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDEFFECTCONFIG_MONOHOUNDEFFECTCONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::MiniGame::TartarusHounds::MonoHoundEffectConfig*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::MonoHoundEffectConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDEFFECTCONFIG_MONOHOUNDEFFECTCONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
