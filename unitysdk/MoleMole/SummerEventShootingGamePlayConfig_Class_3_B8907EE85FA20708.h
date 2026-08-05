#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class SummerEventShootingGamePlayConfig; }
namespace MoleMole { class SummerPlayerWeaponInfo; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_SUMMEREVENTSHOOTINGGAMEPLAYCONFIG_CLASS_3_B8907EE85FA20708_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1793D080)
#define MOLEMOLE_SUMMEREVENTSHOOTINGGAMEPLAYCONFIG_CLASS_3_B8907EE85FA20708_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1793D090)
#define MOLEMOLE_SUMMEREVENTSHOOTINGGAMEPLAYCONFIG_CLASS_3_B8907EE85FA20708_WRITE_OFFSET UNITYSDK_OFFSET(0x1793D6E0)
#define MOLEMOLE_SUMMEREVENTSHOOTINGGAMEPLAYCONFIG_CLASS_3_B8907EE85FA20708__CCTOR_OFFSET UNITYSDK_OFFSET(0x1793DAD0)
#define MOLEMOLE_SUMMEREVENTSHOOTINGGAMEPLAYCONFIG_CLASS_3_B8907EE85FA20708__CTOR_OFFSET UNITYSDK_OFFSET(0x1793DA90)

namespace MoleMole
{
	inline static constexpr unsigned int SummerEventShootingGamePlayConfig_Class_3_B8907EE85FA20708_TypeDefinitionIndex = 71957;

	class SummerEventShootingGamePlayConfig_Class_3_B8907EE85FA20708 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::SummerEventShootingGamePlayConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::SummerPlayerWeaponInfo*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::SummerPlayerWeaponInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(SummerEventShootingGamePlayConfig_Class_3_B8907EE85FA20708_TypeDefinitionIndex)->GetStaticField(0x42820);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(SummerEventShootingGamePlayConfig_Class_3_B8907EE85FA20708_TypeDefinitionIndex)->GetStaticField(0x42828);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTSHOOTINGGAMEPLAYCONFIG_CLASS_3_B8907EE85FA20708__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTSHOOTINGGAMEPLAYCONFIG_CLASS_3_B8907EE85FA20708__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTSHOOTINGGAMEPLAYCONFIG_CLASS_3_B8907EE85FA20708_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::SummerEventShootingGamePlayConfig*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::SummerEventShootingGamePlayConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTSHOOTINGGAMEPLAYCONFIG_CLASS_3_B8907EE85FA20708_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::SummerEventShootingGamePlayConfig*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SummerEventShootingGamePlayConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTSHOOTINGGAMEPLAYCONFIG_CLASS_3_B8907EE85FA20708_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
