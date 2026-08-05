#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class AnimatorBlendData; }
namespace MoleMole { class AnimatorBlendGroup; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_ANIMATORBLENDDATA_CLASS_3_F30E9627FD6E6194_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16C1EB70)
#define MOLEMOLE_ANIMATORBLENDDATA_CLASS_3_F30E9627FD6E6194_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16C1EB80)
#define MOLEMOLE_ANIMATORBLENDDATA_CLASS_3_F30E9627FD6E6194_WRITE_OFFSET UNITYSDK_OFFSET(0x16C1ED10)
#define MOLEMOLE_ANIMATORBLENDDATA_CLASS_3_F30E9627FD6E6194__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C1EE70)
#define MOLEMOLE_ANIMATORBLENDDATA_CLASS_3_F30E9627FD6E6194__CTOR_OFFSET UNITYSDK_OFFSET(0x16C1EE30)

namespace MoleMole
{
	inline static constexpr unsigned int AnimatorBlendData_Class_3_F30E9627FD6E6194_TypeDefinitionIndex = 67731;

	class AnimatorBlendData_Class_3_F30E9627FD6E6194 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::AnimatorBlendData*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::AnimatorBlendGroup*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::AnimatorBlendGroup*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorBlendData_Class_3_F30E9627FD6E6194_TypeDefinitionIndex)->GetStaticField(0x48580);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATORBLENDDATA_CLASS_3_F30E9627FD6E6194__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATORBLENDDATA_CLASS_3_F30E9627FD6E6194__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATORBLENDDATA_CLASS_3_F30E9627FD6E6194_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::AnimatorBlendData*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AnimatorBlendData*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATORBLENDDATA_CLASS_3_F30E9627FD6E6194_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::AnimatorBlendData*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AnimatorBlendData*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATORBLENDDATA_CLASS_3_F30E9627FD6E6194_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
