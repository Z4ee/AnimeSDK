#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class LightOverrideShowSetting; }
namespace MoleMole { class SkinOverrideShowSetting; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_SKINOVERRIDESHOWSETTING_SKINOVERRIDESHOWSETTING_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x17387900)
#define MOLEMOLE_SKINOVERRIDESHOWSETTING_SKINOVERRIDESHOWSETTING_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x17387910)
#define MOLEMOLE_SKINOVERRIDESHOWSETTING_SKINOVERRIDESHOWSETTING_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x17387AF0)
#define MOLEMOLE_SKINOVERRIDESHOWSETTING_SKINOVERRIDESHOWSETTING_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17387C90)
#define MOLEMOLE_SKINOVERRIDESHOWSETTING_SKINOVERRIDESHOWSETTING_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17387C50)

namespace MoleMole
{
	inline static constexpr unsigned int SkinOverrideShowSetting_SkinOverrideShowSetting_UnityGeneratedFormatter_TypeDefinitionIndex = 48664;

	class SkinOverrideShowSetting_SkinOverrideShowSetting_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::SkinOverrideShowSetting*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::LightOverrideShowSetting*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::LightOverrideShowSetting*>**)Il2CppClass::FromTypeDefinitionIndex(SkinOverrideShowSetting_SkinOverrideShowSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x411E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::UInt32>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(SkinOverrideShowSetting_SkinOverrideShowSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x411E8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKINOVERRIDESHOWSETTING_SKINOVERRIDESHOWSETTING_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SKINOVERRIDESHOWSETTING_SKINOVERRIDESHOWSETTING_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKINOVERRIDESHOWSETTING_SKINOVERRIDESHOWSETTING_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::SkinOverrideShowSetting*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::SkinOverrideShowSetting*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SKINOVERRIDESHOWSETTING_SKINOVERRIDESHOWSETTING_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::SkinOverrideShowSetting*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SkinOverrideShowSetting*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_SKINOVERRIDESHOWSETTING_SKINOVERRIDESHOWSETTING_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
