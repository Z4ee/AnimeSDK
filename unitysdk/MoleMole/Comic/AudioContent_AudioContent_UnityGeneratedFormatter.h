#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Comic { class AudioContent; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_COMIC_AUDIOCONTENT_AUDIOCONTENT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1F1106C0)
#define MOLEMOLE_COMIC_AUDIOCONTENT_AUDIOCONTENT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1F1106D0)
#define MOLEMOLE_COMIC_AUDIOCONTENT_AUDIOCONTENT_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1F110920)
#define MOLEMOLE_COMIC_AUDIOCONTENT_AUDIOCONTENT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F110AE0)
#define MOLEMOLE_COMIC_AUDIOCONTENT_AUDIOCONTENT_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F110AA0)

namespace MoleMole::Comic
{
	inline static constexpr unsigned int AudioContent_AudioContent_UnityGeneratedFormatter_TypeDefinitionIndex = 32773;

	class AudioContent_AudioContent_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Comic::AudioContent*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(AudioContent_AudioContent_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x281B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AudioContent_AudioContent_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x281B8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AudioContent_AudioContent_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x281C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_AUDIOCONTENT_AUDIOCONTENT_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_AUDIOCONTENT_AUDIOCONTENT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_AUDIOCONTENT_AUDIOCONTENT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Comic::AudioContent*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Comic::AudioContent*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_AUDIOCONTENT_AUDIOCONTENT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Comic::AudioContent*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Comic::AudioContent*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_AUDIOCONTENT_AUDIOCONTENT_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
