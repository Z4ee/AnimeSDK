#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::HollowChessboard { class UVAnimSection; }
namespace MoleMole::HollowChessboard { class UVAnimSection_Config; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION_CLASS_3_5DE1AF483CFE3481_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x149F0430)
#define MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION_CLASS_3_5DE1AF483CFE3481_READMEMBER_OFFSET UNITYSDK_OFFSET(0x149F0440)
#define MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION_CLASS_3_5DE1AF483CFE3481_WRITE_OFFSET UNITYSDK_OFFSET(0x149F05D0)
#define MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION_CLASS_3_5DE1AF483CFE3481__CCTOR_OFFSET UNITYSDK_OFFSET(0x149F0730)
#define MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION_CLASS_3_5DE1AF483CFE3481__CTOR_OFFSET UNITYSDK_OFFSET(0x149F06F0)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int UVAnimSection_Class_3_5DE1AF483CFE3481_TypeDefinitionIndex = 58132;

	class UVAnimSection_Class_3_5DE1AF483CFE3481 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::HollowChessboard::UVAnimSection*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::HollowChessboard::UVAnimSection_Config*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::HollowChessboard::UVAnimSection_Config*>**)Il2CppClass::FromTypeDefinitionIndex(UVAnimSection_Class_3_5DE1AF483CFE3481_TypeDefinitionIndex)->GetStaticField(0x32760);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UVAnimSection_Class_3_5DE1AF483CFE3481_TypeDefinitionIndex)->GetStaticField(0x32768);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION_CLASS_3_5DE1AF483CFE3481__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION_CLASS_3_5DE1AF483CFE3481__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION_CLASS_3_5DE1AF483CFE3481_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::HollowChessboard::UVAnimSection*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::UVAnimSection*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION_CLASS_3_5DE1AF483CFE3481_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::HollowChessboard::UVAnimSection*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::UVAnimSection*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION_CLASS_3_5DE1AF483CFE3481_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
