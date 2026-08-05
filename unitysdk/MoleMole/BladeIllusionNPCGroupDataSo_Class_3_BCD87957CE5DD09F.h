#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/BladeIllusionNPCInfo.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class BladeIllusionNPCGroupDataSo; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_BLADEILLUSIONNPCGROUPDATASO_CLASS_3_BCD87957CE5DD09F_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x177B2B40)
#define MOLEMOLE_BLADEILLUSIONNPCGROUPDATASO_CLASS_3_BCD87957CE5DD09F_READMEMBER_OFFSET UNITYSDK_OFFSET(0x177B2B50)
#define MOLEMOLE_BLADEILLUSIONNPCGROUPDATASO_CLASS_3_BCD87957CE5DD09F_WRITE_OFFSET UNITYSDK_OFFSET(0x177B2DA0)
#define MOLEMOLE_BLADEILLUSIONNPCGROUPDATASO_CLASS_3_BCD87957CE5DD09F__CCTOR_OFFSET UNITYSDK_OFFSET(0x177B2F60)
#define MOLEMOLE_BLADEILLUSIONNPCGROUPDATASO_CLASS_3_BCD87957CE5DD09F__CTOR_OFFSET UNITYSDK_OFFSET(0x177B2F20)

namespace MoleMole
{
	inline static constexpr unsigned int BladeIllusionNPCGroupDataSo_Class_3_BCD87957CE5DD09F_TypeDefinitionIndex = 82454;

	class BladeIllusionNPCGroupDataSo_Class_3_BCD87957CE5DD09F : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::BladeIllusionNPCGroupDataSo*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::MoleMole::BladeIllusionNPCInfo>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::MoleMole::BladeIllusionNPCInfo>*>**)Il2CppClass::FromTypeDefinitionIndex(BladeIllusionNPCGroupDataSo_Class_3_BCD87957CE5DD09F_TypeDefinitionIndex)->GetStaticField(0x44840);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BLADEILLUSIONNPCGROUPDATASO_CLASS_3_BCD87957CE5DD09F__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BLADEILLUSIONNPCGROUPDATASO_CLASS_3_BCD87957CE5DD09F__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BLADEILLUSIONNPCGROUPDATASO_CLASS_3_BCD87957CE5DD09F_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::BladeIllusionNPCGroupDataSo*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::BladeIllusionNPCGroupDataSo*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BLADEILLUSIONNPCGROUPDATASO_CLASS_3_BCD87957CE5DD09F_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::BladeIllusionNPCGroupDataSo*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::BladeIllusionNPCGroupDataSo*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_BLADEILLUSIONNPCGROUPDATASO_CLASS_3_BCD87957CE5DD09F_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
