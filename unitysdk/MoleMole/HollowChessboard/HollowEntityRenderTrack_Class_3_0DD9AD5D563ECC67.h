#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderSequenceSectionType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::HollowChessboard { class HollowEntityRenderTrack; }
namespace MoleMole::HollowChessboard { class ICondition; }
namespace MoleMole::HollowChessboard { class IHollowEntitySection; }
namespace MoleMole::HollowChessboard { class IRenderEvent; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERTRACK_CLASS_3_0DD9AD5D563ECC67_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x118D9DB0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERTRACK_CLASS_3_0DD9AD5D563ECC67_READMEMBER_OFFSET UNITYSDK_OFFSET(0x118D9DC0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERTRACK_CLASS_3_0DD9AD5D563ECC67_WRITE_OFFSET UNITYSDK_OFFSET(0x118DA170)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERTRACK_CLASS_3_0DD9AD5D563ECC67__CCTOR_OFFSET UNITYSDK_OFFSET(0x118DA3E0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERTRACK_CLASS_3_0DD9AD5D563ECC67__CTOR_OFFSET UNITYSDK_OFFSET(0x118DA3A0)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowEntityRenderTrack_Class_3_0DD9AD5D563ECC67_TypeDefinitionIndex = 87970;

	class HollowEntityRenderTrack_Class_3_0DD9AD5D563ECC67 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::HollowChessboard::HollowEntityRenderTrack*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HollowEntityRenderTrack_Class_3_0DD9AD5D563ECC67_TypeDefinitionIndex)->GetStaticField(0x3CB90);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::IHollowEntitySection*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::IHollowEntitySection*>*>**)Il2CppClass::FromTypeDefinitionIndex(HollowEntityRenderTrack_Class_3_0DD9AD5D563ECC67_TypeDefinitionIndex)->GetStaticField(0x3CB98);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::IRenderEvent*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::IRenderEvent*>*>**)Il2CppClass::FromTypeDefinitionIndex(HollowEntityRenderTrack_Class_3_0DD9AD5D563ECC67_TypeDefinitionIndex)->GetStaticField(0x3CBA0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::HollowChessboard::RenderSequenceSectionType>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::HollowChessboard::RenderSequenceSectionType>**)Il2CppClass::FromTypeDefinitionIndex(HollowEntityRenderTrack_Class_3_0DD9AD5D563ECC67_TypeDefinitionIndex)->GetStaticField(0x3CBA8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::ICondition*>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::ICondition*>*>**)Il2CppClass::FromTypeDefinitionIndex(HollowEntityRenderTrack_Class_3_0DD9AD5D563ECC67_TypeDefinitionIndex)->GetStaticField(0x3CBB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERTRACK_CLASS_3_0DD9AD5D563ECC67__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERTRACK_CLASS_3_0DD9AD5D563ECC67__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERTRACK_CLASS_3_0DD9AD5D563ECC67_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::HollowChessboard::HollowEntityRenderTrack*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntityRenderTrack*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERTRACK_CLASS_3_0DD9AD5D563ECC67_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::HollowChessboard::HollowEntityRenderTrack*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntityRenderTrack*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERTRACK_CLASS_3_0DD9AD5D563ECC67_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
