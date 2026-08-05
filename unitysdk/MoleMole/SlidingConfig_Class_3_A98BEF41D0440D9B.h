#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class SlidingConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_SLIDINGCONFIG_CLASS_3_A98BEF41D0440D9B_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1809F3A0)
#define MOLEMOLE_SLIDINGCONFIG_CLASS_3_A98BEF41D0440D9B_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1809F3B0)
#define MOLEMOLE_SLIDINGCONFIG_CLASS_3_A98BEF41D0440D9B_WRITE_OFFSET UNITYSDK_OFFSET(0x1809F610)
#define MOLEMOLE_SLIDINGCONFIG_CLASS_3_A98BEF41D0440D9B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1809F7D0)
#define MOLEMOLE_SLIDINGCONFIG_CLASS_3_A98BEF41D0440D9B__CTOR_OFFSET UNITYSDK_OFFSET(0x1809F790)

namespace MoleMole
{
	inline static constexpr unsigned int SlidingConfig_Class_3_A98BEF41D0440D9B_TypeDefinitionIndex = 58773;

	class SlidingConfig_Class_3_A98BEF41D0440D9B : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::SlidingConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>*>**)Il2CppClass::FromTypeDefinitionIndex(SlidingConfig_Class_3_A98BEF41D0440D9B_TypeDefinitionIndex)->GetStaticField(0x4C460);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(SlidingConfig_Class_3_A98BEF41D0440D9B_TypeDefinitionIndex)->GetStaticField(0x4C468);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGCONFIG_CLASS_3_A98BEF41D0440D9B__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGCONFIG_CLASS_3_A98BEF41D0440D9B__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGCONFIG_CLASS_3_A98BEF41D0440D9B_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::SlidingConfig*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::SlidingConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGCONFIG_CLASS_3_A98BEF41D0440D9B_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::SlidingConfig*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SlidingConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGCONFIG_CLASS_3_A98BEF41D0440D9B_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
