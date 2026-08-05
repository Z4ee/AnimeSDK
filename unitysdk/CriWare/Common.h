#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CRIWARE_COMMON_CHECKBINARYVERSIONCOMPATIBILITY_OFFSET UNITYSDK_OFFSET(0x1F4CFBC0)
#define CRIWARE_COMMON_CRIWARE2C36F93C_OFFSET UNITYSDK_OFFSET(0x1F4CFB30)
#define CRIWARE_COMMON_CRIWAREUNITY_SETRENDERINGEVENTOFFSETFORMANA_OFFSET UNITYSDK_OFFSET(0x1F4CFCA0)
#define CRIWARE_COMMON_GETBINARYVERSIONNUMBER_OFFSET UNITYSDK_OFFSET(0x1F4CFAB0)
#define CRIWARE_COMMON_GETREQUIREDBINARYVERSIONNUMBER_OFFSET UNITYSDK_OFFSET(0x1F4CFBB0)
#define CRIWARE_COMMON_GET_MANAGEROBJECT_OFFSET UNITYSDK_OFFSET(0x1F4CF7E0)
#define CRIWARE_COMMON_GET_STREAMINGASSETSPATH_OFFSET UNITYSDK_OFFSET(0x1F4CF750)
#define CRIWARE_COMMON_ISSTREAMINGASSETSPATH_OFFSET UNITYSDK_OFFSET(0x1F4CF7A0)
#define CRIWARE_COMMON__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4CFD20)

namespace CriWare
{
	inline static constexpr unsigned int Common_TypeDefinitionIndex = 34988;

	class Common : public ::System::Object
	{
	public:
		static ::UnityEngine::GameObject** StaticGet__managerObject()
		{
			return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(Common_TypeDefinitionIndex)->GetStaticField(0x291F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_COMMON__CTOR_OFFSET))(this);
		}

		static ::System::String* get_streamingAssetsPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CRIWARE_COMMON_GET_STREAMINGASSETSPATH_OFFSET))();
		}

		static ::System::Boolean IsStreamingAssetsPath(::System::String* path)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_COMMON_ISSTREAMINGASSETSPATH_OFFSET))(path);
		}

		static ::UnityEngine::GameObject* get_managerObject()
		{
			return ((::UnityEngine::GameObject*(*)())((::PBYTE)hIl2Cpp + CRIWARE_COMMON_GET_MANAGEROBJECT_OFFSET))();
		}

		static ::System::Int32 GetBinaryVersionNumber()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_COMMON_GETBINARYVERSIONNUMBER_OFFSET))();
		}

		static ::System::Int32 GetRequiredBinaryVersionNumber()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_COMMON_GETREQUIREDBINARYVERSIONNUMBER_OFFSET))();
		}

		static ::System::Boolean CheckBinaryVersionCompatibility()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_COMMON_CHECKBINARYVERSIONCOMPATIBILITY_OFFSET))();
		}

		static ::System::Int32 CRIWARE2C36F93C()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_COMMON_CRIWARE2C36F93C_OFFSET))();
		}

		static ::System::Void criWareUnity_SetRenderingEventOffsetForMana(::System::Int32 offset)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_COMMON_CRIWAREUNITY_SETRENDERINGEVENTOFFSETFORMANA_OFFSET))(offset);
		}
	};
}
