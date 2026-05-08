#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SGF::SEvent { class StringProcessorChain; }
namespace System { class Delegate; }
namespace System { class String; }

#define SGF_SEVENT_PROFILEMARKERHELPER_GETPROFILEMARKER_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1BBF8B00)
#define SGF_SEVENT_PROFILEMARKERHELPER_GETPROPERTYSYNCHELPERPROFILEMARKER_OFFSET UNITYSDK_OFFSET(0x1BBF8820)
#define SGF_SEVENT_PROFILEMARKERHELPER_GET_GETPROFILEMARKER_OFFSET UNITYSDK_OFFSET(0x1BBF86A0)

namespace SGF::SEvent
{
	inline static constexpr unsigned int ProfileMarkerHelper_TypeDefinitionIndex = 7874;

	class ProfileMarkerHelper : public ::System::Object
	{
	public:
		static ::SGF::SEvent::StringProcessorChain** StaticGet__getProfileMarker()
		{
			return (::SGF::SEvent::StringProcessorChain**)Il2CppClass::FromTypeDefinitionIndex(ProfileMarkerHelper_TypeDefinitionIndex)->GetStaticField(0x7350);
		}

		static ::SGF::SEvent::StringProcessorChain* get_GetProfileMarker()
		{
			return ((::SGF::SEvent::StringProcessorChain*(*)())((::PBYTE)hIl2Cpp + SGF_SEVENT_PROFILEMARKERHELPER_GET_GETPROFILEMARKER_OFFSET))();
		}

		static ::System::String* GetPropertySyncHelperProfileMarker(::System::Delegate* handler, ::System::String* key)
		{
			return ((::System::String*(*)(::System::Delegate*, ::System::String*))((::PBYTE)hIl2Cpp + SGF_SEVENT_PROFILEMARKERHELPER_GETPROPERTYSYNCHELPERPROFILEMARKER_OFFSET))(handler, key);
		}

		static ::System::String* GetProfileMarker_Default(::System::Delegate* handler)
		{
			return ((::System::String*(*)(::System::Delegate*))((::PBYTE)hIl2Cpp + SGF_SEVENT_PROFILEMARKERHELPER_GETPROFILEMARKER_DEFAULT_OFFSET))(handler);
		}
	};
}
