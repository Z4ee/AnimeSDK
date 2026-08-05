#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class AudioEventItem; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_AUDIOEVENTITEM_CLASS_3_AFF618BCE949B05E_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x136A2470)
#define MOLEMOLE_GALGAME_AUDIOEVENTITEM_CLASS_3_AFF618BCE949B05E_READMEMBER_OFFSET UNITYSDK_OFFSET(0x136A2480)
#define MOLEMOLE_GALGAME_AUDIOEVENTITEM_CLASS_3_AFF618BCE949B05E_WRITE_OFFSET UNITYSDK_OFFSET(0x136A2790)
#define MOLEMOLE_GALGAME_AUDIOEVENTITEM_CLASS_3_AFF618BCE949B05E__CCTOR_OFFSET UNITYSDK_OFFSET(0x136A29B0)
#define MOLEMOLE_GALGAME_AUDIOEVENTITEM_CLASS_3_AFF618BCE949B05E__CTOR_OFFSET UNITYSDK_OFFSET(0x136A2970)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int AudioEventItem_Class_3_AFF618BCE949B05E_TypeDefinitionIndex = 64705;

	class AudioEventItem_Class_3_AFF618BCE949B05E : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::AudioEventItem*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AudioEventItem_Class_3_AFF618BCE949B05E_TypeDefinitionIndex)->GetStaticField(0x4D540);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AudioEventItem_Class_3_AFF618BCE949B05E_TypeDefinitionIndex)->GetStaticField(0x4D548);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_AUDIOEVENTITEM_CLASS_3_AFF618BCE949B05E__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_AUDIOEVENTITEM_CLASS_3_AFF618BCE949B05E__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_AUDIOEVENTITEM_CLASS_3_AFF618BCE949B05E_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::AudioEventItem*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::AudioEventItem*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_AUDIOEVENTITEM_CLASS_3_AFF618BCE949B05E_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::AudioEventItem*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::AudioEventItem*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_AUDIOEVENTITEM_CLASS_3_AFF618BCE949B05E_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
