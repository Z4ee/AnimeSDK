#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigAnimationCurveGroup; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGANIMATIONCURVEGROUP_CONFIGANIMATIONCURVEGROUP_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A0772C0)
#define MOLEMOLE_CONFIGANIMATIONCURVEGROUP_CONFIGANIMATIONCURVEGROUP_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A0772D0)
#define MOLEMOLE_CONFIGANIMATIONCURVEGROUP_CONFIGANIMATIONCURVEGROUP_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1A077770)
#define MOLEMOLE_CONFIGANIMATIONCURVEGROUP_CONFIGANIMATIONCURVEGROUP_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A077A70)
#define MOLEMOLE_CONFIGANIMATIONCURVEGROUP_CONFIGANIMATIONCURVEGROUP_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A077A30)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigAnimationCurveGroup_ConfigAnimationCurveGroup_UnityGeneratedFormatter_TypeDefinitionIndex = 75618;

	class ConfigAnimationCurveGroup_ConfigAnimationCurveGroup_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigAnimationCurveGroup*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigAnimationCurveGroup_ConfigAnimationCurveGroup_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49C20);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigAnimationCurveGroup_ConfigAnimationCurveGroup_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49C28);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigAnimationCurveGroup_ConfigAnimationCurveGroup_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49C30);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigAnimationCurveGroup_ConfigAnimationCurveGroup_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49C38);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigAnimationCurveGroup_ConfigAnimationCurveGroup_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49C40);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGANIMATIONCURVEGROUP_CONFIGANIMATIONCURVEGROUP_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGANIMATIONCURVEGROUP_CONFIGANIMATIONCURVEGROUP_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGANIMATIONCURVEGROUP_CONFIGANIMATIONCURVEGROUP_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigAnimationCurveGroup*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigAnimationCurveGroup*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGANIMATIONCURVEGROUP_CONFIGANIMATIONCURVEGROUP_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::ConfigAnimationCurveGroup*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigAnimationCurveGroup*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGANIMATIONCURVEGROUP_CONFIGANIMATIONCURVEGROUP_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
