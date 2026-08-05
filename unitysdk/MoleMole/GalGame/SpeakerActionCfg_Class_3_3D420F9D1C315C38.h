#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class SpeakerActionCfg; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_SPEAKERACTIONCFG_CLASS_3_3D420F9D1C315C38_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x149EC0B0)
#define MOLEMOLE_GALGAME_SPEAKERACTIONCFG_CLASS_3_3D420F9D1C315C38_READMEMBER_OFFSET UNITYSDK_OFFSET(0x149EC0C0)
#define MOLEMOLE_GALGAME_SPEAKERACTIONCFG_CLASS_3_3D420F9D1C315C38_WRITE_OFFSET UNITYSDK_OFFSET(0x149EC510)
#define MOLEMOLE_GALGAME_SPEAKERACTIONCFG_CLASS_3_3D420F9D1C315C38__CCTOR_OFFSET UNITYSDK_OFFSET(0x149EC7E0)
#define MOLEMOLE_GALGAME_SPEAKERACTIONCFG_CLASS_3_3D420F9D1C315C38__CTOR_OFFSET UNITYSDK_OFFSET(0x149EC7A0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int SpeakerActionCfg_Class_3_3D420F9D1C315C38_TypeDefinitionIndex = 44597;

	class SpeakerActionCfg_Class_3_3D420F9D1C315C38 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::SpeakerActionCfg*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(SpeakerActionCfg_Class_3_3D420F9D1C315C38_TypeDefinitionIndex)->GetStaticField(0x32700);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SpeakerActionCfg_Class_3_3D420F9D1C315C38_TypeDefinitionIndex)->GetStaticField(0x32708);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_SPEAKERACTIONCFG_CLASS_3_3D420F9D1C315C38__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_SPEAKERACTIONCFG_CLASS_3_3D420F9D1C315C38__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_SPEAKERACTIONCFG_CLASS_3_3D420F9D1C315C38_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::SpeakerActionCfg*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::SpeakerActionCfg*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_SPEAKERACTIONCFG_CLASS_3_3D420F9D1C315C38_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::SpeakerActionCfg*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::SpeakerActionCfg*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_SPEAKERACTIONCFG_CLASS_3_3D420F9D1C315C38_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
