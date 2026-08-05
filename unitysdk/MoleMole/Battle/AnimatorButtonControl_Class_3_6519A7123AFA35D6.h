#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Battle { class AnimatorButtonControl; }
namespace MoleMole::Battle { class AnimatorParamControl; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL_CLASS_3_6519A7123AFA35D6_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x17797F50)
#define MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL_CLASS_3_6519A7123AFA35D6_READMEMBER_OFFSET UNITYSDK_OFFSET(0x17797F60)
#define MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL_CLASS_3_6519A7123AFA35D6_WRITE_OFFSET UNITYSDK_OFFSET(0x177980F0)
#define MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL_CLASS_3_6519A7123AFA35D6__CCTOR_OFFSET UNITYSDK_OFFSET(0x17798250)
#define MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL_CLASS_3_6519A7123AFA35D6__CTOR_OFFSET UNITYSDK_OFFSET(0x17798210)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int AnimatorButtonControl_Class_3_6519A7123AFA35D6_TypeDefinitionIndex = 88692;

	class AnimatorButtonControl_Class_3_6519A7123AFA35D6 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Battle::AnimatorButtonControl*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::AnimatorParamControl*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::AnimatorParamControl*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorButtonControl_Class_3_6519A7123AFA35D6_TypeDefinitionIndex)->GetStaticField(0x447E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorButtonControl_Class_3_6519A7123AFA35D6_TypeDefinitionIndex)->GetStaticField(0x447E8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL_CLASS_3_6519A7123AFA35D6__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL_CLASS_3_6519A7123AFA35D6__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL_CLASS_3_6519A7123AFA35D6_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Battle::AnimatorButtonControl*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::AnimatorButtonControl*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL_CLASS_3_6519A7123AFA35D6_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Battle::AnimatorButtonControl*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::AnimatorButtonControl*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL_CLASS_3_6519A7123AFA35D6_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
