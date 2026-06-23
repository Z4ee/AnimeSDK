#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class LightOverrideShowSetting; }
namespace MoleMole { class UIAvatarLightSetting; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_LIGHTOVERRIDESHOWSETTING_LIGHTOVERRIDESHOWSETTING_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x14186B50)
#define MOLEMOLE_LIGHTOVERRIDESHOWSETTING_LIGHTOVERRIDESHOWSETTING_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x14186B60)
#define MOLEMOLE_LIGHTOVERRIDESHOWSETTING_LIGHTOVERRIDESHOWSETTING_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x14186D40)
#define MOLEMOLE_LIGHTOVERRIDESHOWSETTING_LIGHTOVERRIDESHOWSETTING_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x14186EE0)
#define MOLEMOLE_LIGHTOVERRIDESHOWSETTING_LIGHTOVERRIDESHOWSETTING_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x14186EA0)

namespace MoleMole
{
	inline static constexpr unsigned int LightOverrideShowSetting_LightOverrideShowSetting_UnityGeneratedFormatter_TypeDefinitionIndex = 59667;

	class LightOverrideShowSetting_LightOverrideShowSetting_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::LightOverrideShowSetting*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarLightSetting*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarLightSetting*>**)Il2CppClass::FromTypeDefinitionIndex(LightOverrideShowSetting_LightOverrideShowSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x48590);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LightOverrideShowSetting_LightOverrideShowSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x48598);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LIGHTOVERRIDESHOWSETTING_LIGHTOVERRIDESHOWSETTING_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_LIGHTOVERRIDESHOWSETTING_LIGHTOVERRIDESHOWSETTING_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LIGHTOVERRIDESHOWSETTING_LIGHTOVERRIDESHOWSETTING_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::LightOverrideShowSetting*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::LightOverrideShowSetting*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_LIGHTOVERRIDESHOWSETTING_LIGHTOVERRIDESHOWSETTING_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::LightOverrideShowSetting*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::LightOverrideShowSetting*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_LIGHTOVERRIDESHOWSETTING_LIGHTOVERRIDESHOWSETTING_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
