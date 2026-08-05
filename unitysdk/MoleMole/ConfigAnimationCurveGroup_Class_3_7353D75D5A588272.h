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

#define MOLEMOLE_CONFIGANIMATIONCURVEGROUP_CLASS_3_7353D75D5A588272_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B4F60F0)
#define MOLEMOLE_CONFIGANIMATIONCURVEGROUP_CLASS_3_7353D75D5A588272_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B4F6100)
#define MOLEMOLE_CONFIGANIMATIONCURVEGROUP_CLASS_3_7353D75D5A588272_WRITE_OFFSET UNITYSDK_OFFSET(0x1B4F6550)
#define MOLEMOLE_CONFIGANIMATIONCURVEGROUP_CLASS_3_7353D75D5A588272__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4F6820)
#define MOLEMOLE_CONFIGANIMATIONCURVEGROUP_CLASS_3_7353D75D5A588272__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4F67E0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigAnimationCurveGroup_Class_3_7353D75D5A588272_TypeDefinitionIndex = 57886;

	class ConfigAnimationCurveGroup_Class_3_7353D75D5A588272 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigAnimationCurveGroup*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigAnimationCurveGroup_Class_3_7353D75D5A588272_TypeDefinitionIndex)->GetStaticField(0x4E730);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigAnimationCurveGroup_Class_3_7353D75D5A588272_TypeDefinitionIndex)->GetStaticField(0x4E738);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigAnimationCurveGroup_Class_3_7353D75D5A588272_TypeDefinitionIndex)->GetStaticField(0x4E740);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigAnimationCurveGroup_Class_3_7353D75D5A588272_TypeDefinitionIndex)->GetStaticField(0x4E748);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigAnimationCurveGroup_Class_3_7353D75D5A588272_TypeDefinitionIndex)->GetStaticField(0x4E750);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGANIMATIONCURVEGROUP_CLASS_3_7353D75D5A588272__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGANIMATIONCURVEGROUP_CLASS_3_7353D75D5A588272__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGANIMATIONCURVEGROUP_CLASS_3_7353D75D5A588272_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigAnimationCurveGroup*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigAnimationCurveGroup*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGANIMATIONCURVEGROUP_CLASS_3_7353D75D5A588272_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ConfigAnimationCurveGroup*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigAnimationCurveGroup*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGANIMATIONCURVEGROUP_CLASS_3_7353D75D5A588272_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
