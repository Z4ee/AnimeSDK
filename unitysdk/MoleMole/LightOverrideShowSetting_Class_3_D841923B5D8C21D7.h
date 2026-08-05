#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class LightOverrideShowSetting; }
namespace MoleMole { class UIAvatarLightSetting; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_LIGHTOVERRIDESHOWSETTING_CLASS_3_D841923B5D8C21D7_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x136C3CD0)
#define MOLEMOLE_LIGHTOVERRIDESHOWSETTING_CLASS_3_D841923B5D8C21D7_READMEMBER_OFFSET UNITYSDK_OFFSET(0x136C3CE0)
#define MOLEMOLE_LIGHTOVERRIDESHOWSETTING_CLASS_3_D841923B5D8C21D7_WRITE_OFFSET UNITYSDK_OFFSET(0x136C3E70)
#define MOLEMOLE_LIGHTOVERRIDESHOWSETTING_CLASS_3_D841923B5D8C21D7__CCTOR_OFFSET UNITYSDK_OFFSET(0x136C3FD0)
#define MOLEMOLE_LIGHTOVERRIDESHOWSETTING_CLASS_3_D841923B5D8C21D7__CTOR_OFFSET UNITYSDK_OFFSET(0x136C3F90)

namespace MoleMole
{
	inline static constexpr unsigned int LightOverrideShowSetting_Class_3_D841923B5D8C21D7_TypeDefinitionIndex = 47289;

	class LightOverrideShowSetting_Class_3_D841923B5D8C21D7 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::LightOverrideShowSetting*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LightOverrideShowSetting_Class_3_D841923B5D8C21D7_TypeDefinitionIndex)->GetStaticField(0x4D710);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarLightSetting*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarLightSetting*>**)Il2CppClass::FromTypeDefinitionIndex(LightOverrideShowSetting_Class_3_D841923B5D8C21D7_TypeDefinitionIndex)->GetStaticField(0x4D718);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LIGHTOVERRIDESHOWSETTING_CLASS_3_D841923B5D8C21D7__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_LIGHTOVERRIDESHOWSETTING_CLASS_3_D841923B5D8C21D7__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LIGHTOVERRIDESHOWSETTING_CLASS_3_D841923B5D8C21D7_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::LightOverrideShowSetting*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::LightOverrideShowSetting*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_LIGHTOVERRIDESHOWSETTING_CLASS_3_D841923B5D8C21D7_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::LightOverrideShowSetting*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::LightOverrideShowSetting*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_LIGHTOVERRIDESHOWSETTING_CLASS_3_D841923B5D8C21D7_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
