#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigFlowCanvas; }
namespace MoleMole::Config { class ConfigFlowCanvasData; }
namespace MoleMole::Config { class ConfigFlowCanvasLevelData; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGFLOWCANVAS_CLASS_3_A8BA7BBBE04C20CA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x14863500)
#define MOLEMOLE_CONFIG_CONFIGFLOWCANVAS_CLASS_3_A8BA7BBBE04C20CA_READMEMBER_OFFSET UNITYSDK_OFFSET(0x14863510)
#define MOLEMOLE_CONFIG_CONFIGFLOWCANVAS_CLASS_3_A8BA7BBBE04C20CA_WRITE_OFFSET UNITYSDK_OFFSET(0x148636A0)
#define MOLEMOLE_CONFIG_CONFIGFLOWCANVAS_CLASS_3_A8BA7BBBE04C20CA__CCTOR_OFFSET UNITYSDK_OFFSET(0x14863800)
#define MOLEMOLE_CONFIG_CONFIGFLOWCANVAS_CLASS_3_A8BA7BBBE04C20CA__CTOR_OFFSET UNITYSDK_OFFSET(0x148637C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigFlowCanvas_Class_3_A8BA7BBBE04C20CA_TypeDefinitionIndex = 76040;

	class ConfigFlowCanvas_Class_3_A8BA7BBBE04C20CA : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigFlowCanvas*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigFlowCanvasLevelData*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigFlowCanvasLevelData*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigFlowCanvas_Class_3_A8BA7BBBE04C20CA_TypeDefinitionIndex)->GetStaticField(0x422F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigFlowCanvasData*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigFlowCanvasData*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigFlowCanvas_Class_3_A8BA7BBBE04C20CA_TypeDefinitionIndex)->GetStaticField(0x422F8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOWCANVAS_CLASS_3_A8BA7BBBE04C20CA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOWCANVAS_CLASS_3_A8BA7BBBE04C20CA__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOWCANVAS_CLASS_3_A8BA7BBBE04C20CA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigFlowCanvas*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigFlowCanvas*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOWCANVAS_CLASS_3_A8BA7BBBE04C20CA_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigFlowCanvas*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigFlowCanvas*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOWCANVAS_CLASS_3_A8BA7BBBE04C20CA_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
