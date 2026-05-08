#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorStateTimeSegment; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIG_ANIMATORSTATETIMESEGMENT_ANIMATORSTATETIMESEGMENT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x17D10520)
#define MOLEMOLE_CONFIG_ANIMATORSTATETIMESEGMENT_ANIMATORSTATETIMESEGMENT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x17D10530)
#define MOLEMOLE_CONFIG_ANIMATORSTATETIMESEGMENT_ANIMATORSTATETIMESEGMENT_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x17D10A80)
#define MOLEMOLE_CONFIG_ANIMATORSTATETIMESEGMENT_ANIMATORSTATETIMESEGMENT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D10DD0)
#define MOLEMOLE_CONFIG_ANIMATORSTATETIMESEGMENT_ANIMATORSTATETIMESEGMENT_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17D10D90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorStateTimeSegment_AnimatorStateTimeSegment_UnityGeneratedFormatter_TypeDefinitionIndex = 71428;

	class AnimatorStateTimeSegment_AnimatorStateTimeSegment_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::AnimatorStateTimeSegment*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorStateTimeSegment_AnimatorStateTimeSegment_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47540);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorStateTimeSegment_AnimatorStateTimeSegment_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47548);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorStateTimeSegment_AnimatorStateTimeSegment_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47550);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORSTATETIMESEGMENT_ANIMATORSTATETIMESEGMENT_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORSTATETIMESEGMENT_ANIMATORSTATETIMESEGMENT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORSTATETIMESEGMENT_ANIMATORSTATETIMESEGMENT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorStateTimeSegment*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorStateTimeSegment*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORSTATETIMESEGMENT_ANIMATORSTATETIMESEGMENT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::AnimatorStateTimeSegment*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorStateTimeSegment*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORSTATETIMESEGMENT_ANIMATORSTATETIMESEGMENT_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
