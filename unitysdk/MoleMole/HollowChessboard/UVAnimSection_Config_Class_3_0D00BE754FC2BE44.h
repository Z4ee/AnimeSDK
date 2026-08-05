#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::HollowChessboard { class UVAnimSection_Config; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION_CONFIG_CLASS_3_0D00BE754FC2BE44_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19B29980)
#define MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION_CONFIG_CLASS_3_0D00BE754FC2BE44_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19B29990)
#define MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION_CONFIG_CLASS_3_0D00BE754FC2BE44_WRITE_OFFSET UNITYSDK_OFFSET(0x19B29A60)
#define MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION_CONFIG_CLASS_3_0D00BE754FC2BE44__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B29B50)
#define MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION_CONFIG_CLASS_3_0D00BE754FC2BE44__CTOR_OFFSET UNITYSDK_OFFSET(0x19B29B10)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int UVAnimSection_Config_Class_3_0D00BE754FC2BE44_TypeDefinitionIndex = 58134;

	class UVAnimSection_Config_Class_3_0D00BE754FC2BE44 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::HollowChessboard::UVAnimSection_Config*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UVAnimSection_Config_Class_3_0D00BE754FC2BE44_TypeDefinitionIndex)->GetStaticField(0x51980);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION_CONFIG_CLASS_3_0D00BE754FC2BE44__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION_CONFIG_CLASS_3_0D00BE754FC2BE44__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION_CONFIG_CLASS_3_0D00BE754FC2BE44_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::HollowChessboard::UVAnimSection_Config*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::UVAnimSection_Config*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION_CONFIG_CLASS_3_0D00BE754FC2BE44_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::HollowChessboard::UVAnimSection_Config*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::UVAnimSection_Config*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION_CONFIG_CLASS_3_0D00BE754FC2BE44_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
