#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class MonoEffectPluginHitWallScratch; }
namespace MoleMole::Battle { class ScratchConfigObject; }
namespace MoleMole::Config { class HitWallCameraShakeConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOEFFECTPLUGINHITWALLSCRATCH_CLASS_3_911A0A9B816D5EC4_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x144E5500)
#define MOLEMOLE_MONOEFFECTPLUGINHITWALLSCRATCH_CLASS_3_911A0A9B816D5EC4_READMEMBER_OFFSET UNITYSDK_OFFSET(0x144E5510)
#define MOLEMOLE_MONOEFFECTPLUGINHITWALLSCRATCH_CLASS_3_911A0A9B816D5EC4_WRITE_OFFSET UNITYSDK_OFFSET(0x144E56A0)
#define MOLEMOLE_MONOEFFECTPLUGINHITWALLSCRATCH_CLASS_3_911A0A9B816D5EC4__CCTOR_OFFSET UNITYSDK_OFFSET(0x144E5800)
#define MOLEMOLE_MONOEFFECTPLUGINHITWALLSCRATCH_CLASS_3_911A0A9B816D5EC4__CTOR_OFFSET UNITYSDK_OFFSET(0x144E57C0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginHitWallScratch_Class_3_911A0A9B816D5EC4_TypeDefinitionIndex = 85461;

	class MonoEffectPluginHitWallScratch_Class_3_911A0A9B816D5EC4 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MonoEffectPluginHitWallScratch*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Battle::ScratchConfigObject*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Battle::ScratchConfigObject*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginHitWallScratch_Class_3_911A0A9B816D5EC4_TypeDefinitionIndex)->GetStaticField(0x3A040);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitWallCameraShakeConfig*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitWallCameraShakeConfig*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginHitWallScratch_Class_3_911A0A9B816D5EC4_TypeDefinitionIndex)->GetStaticField(0x3A048);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINHITWALLSCRATCH_CLASS_3_911A0A9B816D5EC4__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINHITWALLSCRATCH_CLASS_3_911A0A9B816D5EC4__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINHITWALLSCRATCH_CLASS_3_911A0A9B816D5EC4_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MonoEffectPluginHitWallScratch*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoEffectPluginHitWallScratch*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINHITWALLSCRATCH_CLASS_3_911A0A9B816D5EC4_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::MonoEffectPluginHitWallScratch*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectPluginHitWallScratch*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINHITWALLSCRATCH_CLASS_3_911A0A9B816D5EC4_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
