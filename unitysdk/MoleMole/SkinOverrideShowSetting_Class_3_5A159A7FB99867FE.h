#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class LightOverrideShowSetting; }
namespace MoleMole { class SkinOverrideShowSetting; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_SKINOVERRIDESHOWSETTING_CLASS_3_5A159A7FB99867FE_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x136ED060)
#define MOLEMOLE_SKINOVERRIDESHOWSETTING_CLASS_3_5A159A7FB99867FE_READMEMBER_OFFSET UNITYSDK_OFFSET(0x136ED070)
#define MOLEMOLE_SKINOVERRIDESHOWSETTING_CLASS_3_5A159A7FB99867FE_WRITE_OFFSET UNITYSDK_OFFSET(0x136ED200)
#define MOLEMOLE_SKINOVERRIDESHOWSETTING_CLASS_3_5A159A7FB99867FE__CCTOR_OFFSET UNITYSDK_OFFSET(0x136ED360)
#define MOLEMOLE_SKINOVERRIDESHOWSETTING_CLASS_3_5A159A7FB99867FE__CTOR_OFFSET UNITYSDK_OFFSET(0x136ED320)

namespace MoleMole
{
	inline static constexpr unsigned int SkinOverrideShowSetting_Class_3_5A159A7FB99867FE_TypeDefinitionIndex = 47562;

	class SkinOverrideShowSetting_Class_3_5A159A7FB99867FE : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::SkinOverrideShowSetting*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::UInt32>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(SkinOverrideShowSetting_Class_3_5A159A7FB99867FE_TypeDefinitionIndex)->GetStaticField(0x4D820);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::LightOverrideShowSetting*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::LightOverrideShowSetting*>**)Il2CppClass::FromTypeDefinitionIndex(SkinOverrideShowSetting_Class_3_5A159A7FB99867FE_TypeDefinitionIndex)->GetStaticField(0x4D828);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKINOVERRIDESHOWSETTING_CLASS_3_5A159A7FB99867FE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SKINOVERRIDESHOWSETTING_CLASS_3_5A159A7FB99867FE__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKINOVERRIDESHOWSETTING_CLASS_3_5A159A7FB99867FE_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::SkinOverrideShowSetting*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::SkinOverrideShowSetting*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SKINOVERRIDESHOWSETTING_CLASS_3_5A159A7FB99867FE_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::SkinOverrideShowSetting*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SkinOverrideShowSetting*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_SKINOVERRIDESHOWSETTING_CLASS_3_5A159A7FB99867FE_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
