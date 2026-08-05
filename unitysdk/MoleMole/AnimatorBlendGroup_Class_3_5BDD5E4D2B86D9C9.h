#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class AnimatorBlendGroup; }
namespace MoleMole { class AnimatorClipBlendData; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ANIMATORBLENDGROUP_CLASS_3_5BDD5E4D2B86D9C9_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16C1EEE0)
#define MOLEMOLE_ANIMATORBLENDGROUP_CLASS_3_5BDD5E4D2B86D9C9_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16C1EEF0)
#define MOLEMOLE_ANIMATORBLENDGROUP_CLASS_3_5BDD5E4D2B86D9C9_WRITE_OFFSET UNITYSDK_OFFSET(0x16C1F2A0)
#define MOLEMOLE_ANIMATORBLENDGROUP_CLASS_3_5BDD5E4D2B86D9C9__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C1F510)
#define MOLEMOLE_ANIMATORBLENDGROUP_CLASS_3_5BDD5E4D2B86D9C9__CTOR_OFFSET UNITYSDK_OFFSET(0x16C1F4D0)

namespace MoleMole
{
	inline static constexpr unsigned int AnimatorBlendGroup_Class_3_5BDD5E4D2B86D9C9_TypeDefinitionIndex = 86648;

	class AnimatorBlendGroup_Class_3_5BDD5E4D2B86D9C9 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::AnimatorBlendGroup*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorBlendGroup_Class_3_5BDD5E4D2B86D9C9_TypeDefinitionIndex)->GetStaticField(0x48590);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorBlendGroup_Class_3_5BDD5E4D2B86D9C9_TypeDefinitionIndex)->GetStaticField(0x48598);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::AnimatorClipBlendData*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::AnimatorClipBlendData*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorBlendGroup_Class_3_5BDD5E4D2B86D9C9_TypeDefinitionIndex)->GetStaticField(0x485A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorBlendGroup_Class_3_5BDD5E4D2B86D9C9_TypeDefinitionIndex)->GetStaticField(0x485A8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATORBLENDGROUP_CLASS_3_5BDD5E4D2B86D9C9__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATORBLENDGROUP_CLASS_3_5BDD5E4D2B86D9C9__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATORBLENDGROUP_CLASS_3_5BDD5E4D2B86D9C9_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::AnimatorBlendGroup*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AnimatorBlendGroup*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATORBLENDGROUP_CLASS_3_5BDD5E4D2B86D9C9_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::AnimatorBlendGroup*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AnimatorBlendGroup*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATORBLENDGROUP_CLASS_3_5BDD5E4D2B86D9C9_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
