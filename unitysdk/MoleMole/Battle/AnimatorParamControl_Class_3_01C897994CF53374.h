#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Battle { class AnimatorParamControl; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_BATTLE_ANIMATORPARAMCONTROL_CLASS_3_01C897994CF53374_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16C1F5E0)
#define MOLEMOLE_BATTLE_ANIMATORPARAMCONTROL_CLASS_3_01C897994CF53374_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16C1F5F0)
#define MOLEMOLE_BATTLE_ANIMATORPARAMCONTROL_CLASS_3_01C897994CF53374_WRITE_OFFSET UNITYSDK_OFFSET(0x16C1F840)
#define MOLEMOLE_BATTLE_ANIMATORPARAMCONTROL_CLASS_3_01C897994CF53374__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C1FA00)
#define MOLEMOLE_BATTLE_ANIMATORPARAMCONTROL_CLASS_3_01C897994CF53374__CTOR_OFFSET UNITYSDK_OFFSET(0x16C1F9C0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int AnimatorParamControl_Class_3_01C897994CF53374_TypeDefinitionIndex = 71287;

	class AnimatorParamControl_Class_3_01C897994CF53374 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Battle::AnimatorParamControl*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorParamControl_Class_3_01C897994CF53374_TypeDefinitionIndex)->GetStaticField(0x485B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorParamControl_Class_3_01C897994CF53374_TypeDefinitionIndex)->GetStaticField(0x485B8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_ANIMATORPARAMCONTROL_CLASS_3_01C897994CF53374__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_ANIMATORPARAMCONTROL_CLASS_3_01C897994CF53374__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_ANIMATORPARAMCONTROL_CLASS_3_01C897994CF53374_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Battle::AnimatorParamControl*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::AnimatorParamControl*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_ANIMATORPARAMCONTROL_CLASS_3_01C897994CF53374_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Battle::AnimatorParamControl*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::AnimatorParamControl*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_ANIMATORPARAMCONTROL_CLASS_3_01C897994CF53374_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
