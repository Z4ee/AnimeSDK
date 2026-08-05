#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneChangeColliderSize_ColliderTypeCompare.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_COLLIDERTYPECOMPARE_CLASS_3_480DBF24ED3EB074_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x150E91C0)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_COLLIDERTYPECOMPARE_CLASS_3_480DBF24ED3EB074_READMEMBER_OFFSET UNITYSDK_OFFSET(0x150E91D0)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_COLLIDERTYPECOMPARE_CLASS_3_480DBF24ED3EB074_WRITE_OFFSET UNITYSDK_OFFSET(0x150E91E0)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_COLLIDERTYPECOMPARE_CLASS_3_480DBF24ED3EB074__CTOR_OFFSET UNITYSDK_OFFSET(0x150E91F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneChangeColliderSize_ColliderTypeCompare_Class_3_480DBF24ED3EB074_TypeDefinitionIndex = 81543;

	class AnimatorZoneChangeColliderSize_ColliderTypeCompare_Class_3_480DBF24ED3EB074 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderTypeCompare>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_COLLIDERTYPECOMPARE_CLASS_3_480DBF24ED3EB074__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_COLLIDERTYPECOMPARE_CLASS_3_480DBF24ED3EB074_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderTypeCompare& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderTypeCompare&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_COLLIDERTYPECOMPARE_CLASS_3_480DBF24ED3EB074_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderTypeCompare& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderTypeCompare&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_COLLIDERTYPECOMPARE_CLASS_3_480DBF24ED3EB074_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
