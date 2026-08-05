#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorStateTimeSegment; }
namespace MoleMole::Config { class AnimatorZoneOverrideBoneAdjustParams; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEBONEADJUSTPARAMS_CLASS_3_C29E1BE1E0D89743_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x177CA4B0)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEBONEADJUSTPARAMS_CLASS_3_C29E1BE1E0D89743_READMEMBER_OFFSET UNITYSDK_OFFSET(0x177CA4C0)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEBONEADJUSTPARAMS_CLASS_3_C29E1BE1E0D89743_WRITE_OFFSET UNITYSDK_OFFSET(0x177CA9B0)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEBONEADJUSTPARAMS_CLASS_3_C29E1BE1E0D89743__CCTOR_OFFSET UNITYSDK_OFFSET(0x177CACD0)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEBONEADJUSTPARAMS_CLASS_3_C29E1BE1E0D89743__CTOR_OFFSET UNITYSDK_OFFSET(0x177CAC90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneOverrideBoneAdjustParams_Class_3_C29E1BE1E0D89743_TypeDefinitionIndex = 85789;

	class AnimatorZoneOverrideBoneAdjustParams_Class_3_C29E1BE1E0D89743 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::AnimatorZoneOverrideBoneAdjustParams*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneOverrideBoneAdjustParams_Class_3_C29E1BE1E0D89743_TypeDefinitionIndex)->GetStaticField(0x449C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneOverrideBoneAdjustParams_Class_3_C29E1BE1E0D89743_TypeDefinitionIndex)->GetStaticField(0x449C8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Type*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneOverrideBoneAdjustParams_Class_3_C29E1BE1E0D89743_TypeDefinitionIndex)->GetStaticField(0x449D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneOverrideBoneAdjustParams_Class_3_C29E1BE1E0D89743_TypeDefinitionIndex)->GetStaticField(0x449D8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneOverrideBoneAdjustParams_Class_3_C29E1BE1E0D89743_TypeDefinitionIndex)->GetStaticField(0x449E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEBONEADJUSTPARAMS_CLASS_3_C29E1BE1E0D89743__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEBONEADJUSTPARAMS_CLASS_3_C29E1BE1E0D89743__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEBONEADJUSTPARAMS_CLASS_3_C29E1BE1E0D89743_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneOverrideBoneAdjustParams*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneOverrideBoneAdjustParams*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEBONEADJUSTPARAMS_CLASS_3_C29E1BE1E0D89743_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneOverrideBoneAdjustParams*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneOverrideBoneAdjustParams*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEBONEADJUSTPARAMS_CLASS_3_C29E1BE1E0D89743_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
