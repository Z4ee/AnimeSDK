#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class MonoEffectPluginProgramConfig; }
namespace MoleMole::Config { class AnimatorStateTimeSegment; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_MONOEFFECTPLUGINPROGRAMCONFIG_CLASS_3_E3D781BB00A3E5AD_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x173846D0)
#define MOLEMOLE_MONOEFFECTPLUGINPROGRAMCONFIG_CLASS_3_E3D781BB00A3E5AD_READMEMBER_OFFSET UNITYSDK_OFFSET(0x173846E0)
#define MOLEMOLE_MONOEFFECTPLUGINPROGRAMCONFIG_CLASS_3_E3D781BB00A3E5AD_WRITE_OFFSET UNITYSDK_OFFSET(0x173847B0)
#define MOLEMOLE_MONOEFFECTPLUGINPROGRAMCONFIG_CLASS_3_E3D781BB00A3E5AD__CCTOR_OFFSET UNITYSDK_OFFSET(0x173848A0)
#define MOLEMOLE_MONOEFFECTPLUGINPROGRAMCONFIG_CLASS_3_E3D781BB00A3E5AD__CTOR_OFFSET UNITYSDK_OFFSET(0x17384860)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginProgramConfig_Class_3_E3D781BB00A3E5AD_TypeDefinitionIndex = 59164;

	class MonoEffectPluginProgramConfig_Class_3_E3D781BB00A3E5AD : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MonoEffectPluginProgramConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::AnimatorStateTimeSegment*>*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::AnimatorStateTimeSegment*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginProgramConfig_Class_3_E3D781BB00A3E5AD_TypeDefinitionIndex)->GetStaticField(0x44E00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINPROGRAMCONFIG_CLASS_3_E3D781BB00A3E5AD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINPROGRAMCONFIG_CLASS_3_E3D781BB00A3E5AD__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINPROGRAMCONFIG_CLASS_3_E3D781BB00A3E5AD_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MonoEffectPluginProgramConfig*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoEffectPluginProgramConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINPROGRAMCONFIG_CLASS_3_E3D781BB00A3E5AD_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::MonoEffectPluginProgramConfig*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectPluginProgramConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINPROGRAMCONFIG_CLASS_3_E3D781BB00A3E5AD_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
