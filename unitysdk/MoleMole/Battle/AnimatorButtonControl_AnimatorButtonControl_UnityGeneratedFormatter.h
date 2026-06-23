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

#define MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL_ANIMATORBUTTONCONTROL_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x126E37D0)
#define MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL_ANIMATORBUTTONCONTROL_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x126E37E0)
#define MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL_ANIMATORBUTTONCONTROL_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x126E39C0)
#define MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL_ANIMATORBUTTONCONTROL_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x126E3B60)
#define MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL_ANIMATORBUTTONCONTROL_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x126E3B20)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int AnimatorButtonControl_AnimatorButtonControl_UnityGeneratedFormatter_TypeDefinitionIndex = 55181;

	class AnimatorButtonControl_AnimatorButtonControl_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Battle::AnimatorButtonControl*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorButtonControl_AnimatorButtonControl_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4C8F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::AnimatorParamControl*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::AnimatorParamControl*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorButtonControl_AnimatorButtonControl_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4C8F8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL_ANIMATORBUTTONCONTROL_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL_ANIMATORBUTTONCONTROL_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL_ANIMATORBUTTONCONTROL_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Battle::AnimatorButtonControl*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::AnimatorButtonControl*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL_ANIMATORBUTTONCONTROL_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Battle::AnimatorButtonControl*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::AnimatorButtonControl*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL_ANIMATORBUTTONCONTROL_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
