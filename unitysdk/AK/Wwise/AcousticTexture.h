#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AK/Wwise/BaseType.h"
#include "unitysdk/WwiseObjectType.h"

class WwiseAcousticTextureReference;
class WwiseObjectReference;

#define AK_WWISE_ACOUSTICTEXTURE_GET_OBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x18B86E40)
#define AK_WWISE_ACOUSTICTEXTURE_GET_WWISEOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x18B86EC0)
#define AK_WWISE_ACOUSTICTEXTURE_SET_OBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x18B86E50)
#define AK_WWISE_ACOUSTICTEXTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x18B86ED0)

namespace AK::Wwise
{
	inline static constexpr unsigned int AcousticTexture_TypeDefinitionIndex = 34711;

	class AcousticTexture : public ::AK::Wwise::BaseType
	{
	public:
		::WwiseAcousticTextureReference* WwiseObjectReference; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_ACOUSTICTEXTURE__CTOR_OFFSET))(this);
		}

		::WwiseObjectReference* get_ObjectReference()
		{
			return ((::WwiseObjectReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_ACOUSTICTEXTURE_GET_OBJECTREFERENCE_OFFSET))(this);
		}

		::System::Void set_ObjectReference(::WwiseObjectReference* value)
		{
			return ((::System::Void(*)(::PVOID, ::WwiseObjectReference*))((::PBYTE)hIl2Cpp + AK_WWISE_ACOUSTICTEXTURE_SET_OBJECTREFERENCE_OFFSET))(this, value);
		}

		::WwiseObjectType get_WwiseObjectType()
		{
			return ((::WwiseObjectType(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_ACOUSTICTEXTURE_GET_WWISEOBJECTTYPE_OFFSET))(this);
		}
	};
}
