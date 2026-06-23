#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneChangeColliderSize_ColliderTypeCompare.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_COLLIDERTYPECOMPARE_COLLIDERTYPECOMPARE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x127047D0)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_COLLIDERTYPECOMPARE_COLLIDERTYPECOMPARE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x127047E0)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_COLLIDERTYPECOMPARE_COLLIDERTYPECOMPARE_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x12704850)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_COLLIDERTYPECOMPARE_COLLIDERTYPECOMPARE_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x127048A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneChangeColliderSize_ColliderTypeCompare_ColliderTypeCompare_UnityGeneratedFormatter_TypeDefinitionIndex = 80604;

	class AnimatorZoneChangeColliderSize_ColliderTypeCompare_ColliderTypeCompare_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderTypeCompare>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_COLLIDERTYPECOMPARE_COLLIDERTYPECOMPARE_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_COLLIDERTYPECOMPARE_COLLIDERTYPECOMPARE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderTypeCompare& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderTypeCompare&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_COLLIDERTYPECOMPARE_COLLIDERTYPECOMPARE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderTypeCompare& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderTypeCompare&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_COLLIDERTYPECOMPARE_COLLIDERTYPECOMPARE_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
