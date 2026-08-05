#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorStateTimeSegment; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIG_ANIMATORSTATETIMESEGMENT_CLASS_3_353B859ADAA9E856_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12EF0560)
#define MOLEMOLE_CONFIG_ANIMATORSTATETIMESEGMENT_CLASS_3_353B859ADAA9E856_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12EF0570)
#define MOLEMOLE_CONFIG_ANIMATORSTATETIMESEGMENT_CLASS_3_353B859ADAA9E856_WRITE_OFFSET UNITYSDK_OFFSET(0x12EF0A60)
#define MOLEMOLE_CONFIG_ANIMATORSTATETIMESEGMENT_CLASS_3_353B859ADAA9E856__CCTOR_OFFSET UNITYSDK_OFFSET(0x12EF0D80)
#define MOLEMOLE_CONFIG_ANIMATORSTATETIMESEGMENT_CLASS_3_353B859ADAA9E856__CTOR_OFFSET UNITYSDK_OFFSET(0x12EF0D40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorStateTimeSegment_Class_3_353B859ADAA9E856_TypeDefinitionIndex = 54501;

	class AnimatorStateTimeSegment_Class_3_353B859ADAA9E856 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::AnimatorStateTimeSegment*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorStateTimeSegment_Class_3_353B859ADAA9E856_TypeDefinitionIndex)->GetStaticField(0x4E530);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorStateTimeSegment_Class_3_353B859ADAA9E856_TypeDefinitionIndex)->GetStaticField(0x4E538);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorStateTimeSegment_Class_3_353B859ADAA9E856_TypeDefinitionIndex)->GetStaticField(0x4E540);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORSTATETIMESEGMENT_CLASS_3_353B859ADAA9E856__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORSTATETIMESEGMENT_CLASS_3_353B859ADAA9E856__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORSTATETIMESEGMENT_CLASS_3_353B859ADAA9E856_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorStateTimeSegment*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorStateTimeSegment*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORSTATETIMESEGMENT_CLASS_3_353B859ADAA9E856_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::AnimatorStateTimeSegment*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorStateTimeSegment*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORSTATETIMESEGMENT_CLASS_3_353B859ADAA9E856_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
