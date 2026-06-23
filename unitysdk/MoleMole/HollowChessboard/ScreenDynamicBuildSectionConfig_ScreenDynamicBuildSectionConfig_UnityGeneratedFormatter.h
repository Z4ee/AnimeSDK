#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/ScreenDynamicBuildSectionHelperType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::HollowChessboard { class ScreenDynamicBuildSectionConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_HOLLOWCHESSBOARD_SCREENDYNAMICBUILDSECTIONCONFIG_SCREENDYNAMICBUILDSECTIONCONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x15133D50)
#define MOLEMOLE_HOLLOWCHESSBOARD_SCREENDYNAMICBUILDSECTIONCONFIG_SCREENDYNAMICBUILDSECTIONCONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x15133D60)
#define MOLEMOLE_HOLLOWCHESSBOARD_SCREENDYNAMICBUILDSECTIONCONFIG_SCREENDYNAMICBUILDSECTIONCONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x15133E90)
#define MOLEMOLE_HOLLOWCHESSBOARD_SCREENDYNAMICBUILDSECTIONCONFIG_SCREENDYNAMICBUILDSECTIONCONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15133FD0)
#define MOLEMOLE_HOLLOWCHESSBOARD_SCREENDYNAMICBUILDSECTIONCONFIG_SCREENDYNAMICBUILDSECTIONCONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x15133F90)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int ScreenDynamicBuildSectionConfig_ScreenDynamicBuildSectionConfig_UnityGeneratedFormatter_TypeDefinitionIndex = 62409;

	class ScreenDynamicBuildSectionConfig_ScreenDynamicBuildSectionConfig_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::HollowChessboard::ScreenDynamicBuildSectionConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::HollowChessboard::ScreenDynamicBuildSectionHelperType>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::HollowChessboard::ScreenDynamicBuildSectionHelperType>**)Il2CppClass::FromTypeDefinitionIndex(ScreenDynamicBuildSectionConfig_ScreenDynamicBuildSectionConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41140);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCREENDYNAMICBUILDSECTIONCONFIG_SCREENDYNAMICBUILDSECTIONCONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCREENDYNAMICBUILDSECTIONCONFIG_SCREENDYNAMICBUILDSECTIONCONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCREENDYNAMICBUILDSECTIONCONFIG_SCREENDYNAMICBUILDSECTIONCONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::HollowChessboard::ScreenDynamicBuildSectionConfig*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::ScreenDynamicBuildSectionConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCREENDYNAMICBUILDSECTIONCONFIG_SCREENDYNAMICBUILDSECTIONCONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::HollowChessboard::ScreenDynamicBuildSectionConfig*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::ScreenDynamicBuildSectionConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCREENDYNAMICBUILDSECTIONCONFIG_SCREENDYNAMICBUILDSECTIONCONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
