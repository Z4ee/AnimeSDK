#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Comic { class AudioContent; }
namespace MoleMole::Comic { class ScreenSplitAnimAudioDataWrapper; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_COMIC_SCREENSPLITANIMAUDIODATAWRAPPER_SCREENSPLITANIMAUDIODATAWRAPPER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1F991560)
#define MOLEMOLE_COMIC_SCREENSPLITANIMAUDIODATAWRAPPER_SCREENSPLITANIMAUDIODATAWRAPPER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1F991570)
#define MOLEMOLE_COMIC_SCREENSPLITANIMAUDIODATAWRAPPER_SCREENSPLITANIMAUDIODATAWRAPPER_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1F991640)
#define MOLEMOLE_COMIC_SCREENSPLITANIMAUDIODATAWRAPPER_SCREENSPLITANIMAUDIODATAWRAPPER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F991730)
#define MOLEMOLE_COMIC_SCREENSPLITANIMAUDIODATAWRAPPER_SCREENSPLITANIMAUDIODATAWRAPPER_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9916F0)

namespace MoleMole::Comic
{
	inline static constexpr unsigned int ScreenSplitAnimAudioDataWrapper_ScreenSplitAnimAudioDataWrapper_UnityGeneratedFormatter_TypeDefinitionIndex = 32775;

	class ScreenSplitAnimAudioDataWrapper_ScreenSplitAnimAudioDataWrapper_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Comic::ScreenSplitAnimAudioDataWrapper*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Comic::AudioContent*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Comic::AudioContent*>*>**)Il2CppClass::FromTypeDefinitionIndex(ScreenSplitAnimAudioDataWrapper_ScreenSplitAnimAudioDataWrapper_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x27F80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_SCREENSPLITANIMAUDIODATAWRAPPER_SCREENSPLITANIMAUDIODATAWRAPPER_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_SCREENSPLITANIMAUDIODATAWRAPPER_SCREENSPLITANIMAUDIODATAWRAPPER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_SCREENSPLITANIMAUDIODATAWRAPPER_SCREENSPLITANIMAUDIODATAWRAPPER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Comic::ScreenSplitAnimAudioDataWrapper*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Comic::ScreenSplitAnimAudioDataWrapper*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_SCREENSPLITANIMAUDIODATAWRAPPER_SCREENSPLITANIMAUDIODATAWRAPPER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Comic::ScreenSplitAnimAudioDataWrapper*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Comic::ScreenSplitAnimAudioDataWrapper*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_SCREENSPLITANIMAUDIODATAWRAPPER_SCREENSPLITANIMAUDIODATAWRAPPER_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
