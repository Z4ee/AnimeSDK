#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/ColorModifyBlendData.h"
#include "unitysdk/MoleMole/HollowChessboard/ColorModifyInfo.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole::Config { class ConfigHollowTimeRewind; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWTIMEREWIND_CLASS_3_841939D981EB7881_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x134FEB50)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWTIMEREWIND_CLASS_3_841939D981EB7881_READMEMBER_OFFSET UNITYSDK_OFFSET(0x134FEB60)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWTIMEREWIND_CLASS_3_841939D981EB7881_WRITE_OFFSET UNITYSDK_OFFSET(0x134FED60)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWTIMEREWIND_CLASS_3_841939D981EB7881__CCTOR_OFFSET UNITYSDK_OFFSET(0x134FEF20)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWTIMEREWIND_CLASS_3_841939D981EB7881__CTOR_OFFSET UNITYSDK_OFFSET(0x134FEEE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowTimeRewind_Class_3_841939D981EB7881_TypeDefinitionIndex = 76614;

	class ConfigHollowTimeRewind_Class_3_841939D981EB7881 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigHollowTimeRewind*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Nullable_1<::MoleMole::HollowChessboard::ColorModifyBlendData>>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Nullable_1<::MoleMole::HollowChessboard::ColorModifyBlendData>>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowTimeRewind_Class_3_841939D981EB7881_TypeDefinitionIndex)->GetStaticField(0x4BF30);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::HollowChessboard::ColorModifyInfo>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::HollowChessboard::ColorModifyInfo>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowTimeRewind_Class_3_841939D981EB7881_TypeDefinitionIndex)->GetStaticField(0x4BF38);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWTIMEREWIND_CLASS_3_841939D981EB7881__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWTIMEREWIND_CLASS_3_841939D981EB7881__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWTIMEREWIND_CLASS_3_841939D981EB7881_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigHollowTimeRewind*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigHollowTimeRewind*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWTIMEREWIND_CLASS_3_841939D981EB7881_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigHollowTimeRewind*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowTimeRewind*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWTIMEREWIND_CLASS_3_841939D981EB7881_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
