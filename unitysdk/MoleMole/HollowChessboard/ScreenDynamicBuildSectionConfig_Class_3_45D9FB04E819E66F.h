#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/ScreenDynamicBuildSectionHelperType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::HollowChessboard { class ScreenDynamicBuildSectionConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_HOLLOWCHESSBOARD_SCREENDYNAMICBUILDSECTIONCONFIG_CLASS_3_45D9FB04E819E66F_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x107F57E0)
#define MOLEMOLE_HOLLOWCHESSBOARD_SCREENDYNAMICBUILDSECTIONCONFIG_CLASS_3_45D9FB04E819E66F_READMEMBER_OFFSET UNITYSDK_OFFSET(0x107F57F0)
#define MOLEMOLE_HOLLOWCHESSBOARD_SCREENDYNAMICBUILDSECTIONCONFIG_CLASS_3_45D9FB04E819E66F_WRITE_OFFSET UNITYSDK_OFFSET(0x107F58C0)
#define MOLEMOLE_HOLLOWCHESSBOARD_SCREENDYNAMICBUILDSECTIONCONFIG_CLASS_3_45D9FB04E819E66F__CCTOR_OFFSET UNITYSDK_OFFSET(0x107F59B0)
#define MOLEMOLE_HOLLOWCHESSBOARD_SCREENDYNAMICBUILDSECTIONCONFIG_CLASS_3_45D9FB04E819E66F__CTOR_OFFSET UNITYSDK_OFFSET(0x107F5970)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int ScreenDynamicBuildSectionConfig_Class_3_45D9FB04E819E66F_TypeDefinitionIndex = 67937;

	class ScreenDynamicBuildSectionConfig_Class_3_45D9FB04E819E66F : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::HollowChessboard::ScreenDynamicBuildSectionConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::HollowChessboard::ScreenDynamicBuildSectionHelperType>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::HollowChessboard::ScreenDynamicBuildSectionHelperType>**)Il2CppClass::FromTypeDefinitionIndex(ScreenDynamicBuildSectionConfig_Class_3_45D9FB04E819E66F_TypeDefinitionIndex)->GetStaticField(0x4E9C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCREENDYNAMICBUILDSECTIONCONFIG_CLASS_3_45D9FB04E819E66F__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCREENDYNAMICBUILDSECTIONCONFIG_CLASS_3_45D9FB04E819E66F__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCREENDYNAMICBUILDSECTIONCONFIG_CLASS_3_45D9FB04E819E66F_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::HollowChessboard::ScreenDynamicBuildSectionConfig*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::ScreenDynamicBuildSectionConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCREENDYNAMICBUILDSECTIONCONFIG_CLASS_3_45D9FB04E819E66F_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::HollowChessboard::ScreenDynamicBuildSectionConfig*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::ScreenDynamicBuildSectionConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCREENDYNAMICBUILDSECTIONCONFIG_CLASS_3_45D9FB04E819E66F_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
