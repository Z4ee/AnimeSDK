#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::HollowChessboard { class HollowEntityRenderSequence; }
namespace MoleMole::HollowChessboard { class HollowEntityRenderTrack; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERSEQUENCE_CLASS_3_851C16E55D1CA2A9_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1737D2E0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERSEQUENCE_CLASS_3_851C16E55D1CA2A9_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1737D2F0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERSEQUENCE_CLASS_3_851C16E55D1CA2A9_WRITE_OFFSET UNITYSDK_OFFSET(0x1737D480)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERSEQUENCE_CLASS_3_851C16E55D1CA2A9__CCTOR_OFFSET UNITYSDK_OFFSET(0x1737D5E0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERSEQUENCE_CLASS_3_851C16E55D1CA2A9__CTOR_OFFSET UNITYSDK_OFFSET(0x1737D5A0)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowEntityRenderSequence_Class_3_851C16E55D1CA2A9_TypeDefinitionIndex = 83707;

	class HollowEntityRenderSequence_Class_3_851C16E55D1CA2A9 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::HollowChessboard::HollowEntityRenderSequence*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntityRenderTrack*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntityRenderTrack*>*>**)Il2CppClass::FromTypeDefinitionIndex(HollowEntityRenderSequence_Class_3_851C16E55D1CA2A9_TypeDefinitionIndex)->GetStaticField(0x44DB0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::HollowChessboard::HollowEntityRenderTrack*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::HollowChessboard::HollowEntityRenderTrack*>**)Il2CppClass::FromTypeDefinitionIndex(HollowEntityRenderSequence_Class_3_851C16E55D1CA2A9_TypeDefinitionIndex)->GetStaticField(0x44DB8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERSEQUENCE_CLASS_3_851C16E55D1CA2A9__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERSEQUENCE_CLASS_3_851C16E55D1CA2A9__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERSEQUENCE_CLASS_3_851C16E55D1CA2A9_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::HollowChessboard::HollowEntityRenderSequence*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntityRenderSequence*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERSEQUENCE_CLASS_3_851C16E55D1CA2A9_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::HollowChessboard::HollowEntityRenderSequence*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntityRenderSequence*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERSEQUENCE_CLASS_3_851C16E55D1CA2A9_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
