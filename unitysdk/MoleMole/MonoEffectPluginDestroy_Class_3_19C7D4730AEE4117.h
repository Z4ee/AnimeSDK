#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class MonoEffectPluginDestroy; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_MONOEFFECTPLUGINDESTROY_CLASS_3_19C7D4730AEE4117_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x154320C0)
#define MOLEMOLE_MONOEFFECTPLUGINDESTROY_CLASS_3_19C7D4730AEE4117_READMEMBER_OFFSET UNITYSDK_OFFSET(0x154320D0)
#define MOLEMOLE_MONOEFFECTPLUGINDESTROY_CLASS_3_19C7D4730AEE4117_WRITE_OFFSET UNITYSDK_OFFSET(0x15432140)
#define MOLEMOLE_MONOEFFECTPLUGINDESTROY_CLASS_3_19C7D4730AEE4117__CTOR_OFFSET UNITYSDK_OFFSET(0x15432190)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginDestroy_Class_3_19C7D4730AEE4117_TypeDefinitionIndex = 50838;

	class MonoEffectPluginDestroy_Class_3_19C7D4730AEE4117 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MonoEffectPluginDestroy*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINDESTROY_CLASS_3_19C7D4730AEE4117__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINDESTROY_CLASS_3_19C7D4730AEE4117_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MonoEffectPluginDestroy*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoEffectPluginDestroy*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINDESTROY_CLASS_3_19C7D4730AEE4117_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::MonoEffectPluginDestroy*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectPluginDestroy*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINDESTROY_CLASS_3_19C7D4730AEE4117_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
