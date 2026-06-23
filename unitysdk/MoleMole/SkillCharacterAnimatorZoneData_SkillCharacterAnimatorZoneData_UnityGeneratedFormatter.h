#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class SkillCharacterAnimatorZoneData; }
namespace MoleMole::Config { class AnimatorZone; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_SKILLCHARACTERANIMATORZONEDATA_SKILLCHARACTERANIMATORZONEDATA_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12655010)
#define MOLEMOLE_SKILLCHARACTERANIMATORZONEDATA_SKILLCHARACTERANIMATORZONEDATA_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12655020)
#define MOLEMOLE_SKILLCHARACTERANIMATORZONEDATA_SKILLCHARACTERANIMATORZONEDATA_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x12655150)
#define MOLEMOLE_SKILLCHARACTERANIMATORZONEDATA_SKILLCHARACTERANIMATORZONEDATA_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x12655290)
#define MOLEMOLE_SKILLCHARACTERANIMATORZONEDATA_SKILLCHARACTERANIMATORZONEDATA_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x12655250)

namespace MoleMole
{
	inline static constexpr unsigned int SkillCharacterAnimatorZoneData_SkillCharacterAnimatorZoneData_UnityGeneratedFormatter_TypeDefinitionIndex = 69157;

	class SkillCharacterAnimatorZoneData_SkillCharacterAnimatorZoneData_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::SkillCharacterAnimatorZoneData*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::AnimatorZone*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::AnimatorZone*>*>**)Il2CppClass::FromTypeDefinitionIndex(SkillCharacterAnimatorZoneData_SkillCharacterAnimatorZoneData_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x30890);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERANIMATORZONEDATA_SKILLCHARACTERANIMATORZONEDATA_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERANIMATORZONEDATA_SKILLCHARACTERANIMATORZONEDATA_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERANIMATORZONEDATA_SKILLCHARACTERANIMATORZONEDATA_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::SkillCharacterAnimatorZoneData*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::SkillCharacterAnimatorZoneData*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERANIMATORZONEDATA_SKILLCHARACTERANIMATORZONEDATA_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::SkillCharacterAnimatorZoneData*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SkillCharacterAnimatorZoneData*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERANIMATORZONEDATA_SKILLCHARACTERANIMATORZONEDATA_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
