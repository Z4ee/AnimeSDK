#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ReferTargetCoordsOption.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class DynamicString; }
namespace MoleMole::Config { class OffsetGroup; }
namespace MoleMole::Config { class PosRotTargetOption; }
namespace MoleMole::FlowCanvas::Nodes { class ConfigPosRotWithReferTarget; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_CONFIGPOSROTWITHREFERTARGET_CLASS_3_0F0F2FB9B9555C2B_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19DAC2C0)
#define MOLEMOLE_FLOWCANVAS_NODES_CONFIGPOSROTWITHREFERTARGET_CLASS_3_0F0F2FB9B9555C2B_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19DAC2D0)
#define MOLEMOLE_FLOWCANVAS_NODES_CONFIGPOSROTWITHREFERTARGET_CLASS_3_0F0F2FB9B9555C2B_WRITE_OFFSET UNITYSDK_OFFSET(0x19DAC9B0)
#define MOLEMOLE_FLOWCANVAS_NODES_CONFIGPOSROTWITHREFERTARGET_CLASS_3_0F0F2FB9B9555C2B__CCTOR_OFFSET UNITYSDK_OFFSET(0x19DACDE0)
#define MOLEMOLE_FLOWCANVAS_NODES_CONFIGPOSROTWITHREFERTARGET_CLASS_3_0F0F2FB9B9555C2B__CTOR_OFFSET UNITYSDK_OFFSET(0x19DACDA0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ConfigPosRotWithReferTarget_Class_3_0F0F2FB9B9555C2B_TypeDefinitionIndex = 42627;

	class ConfigPosRotWithReferTarget_Class_3_0F0F2FB9B9555C2B : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::FlowCanvas::Nodes::ConfigPosRotWithReferTarget*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DynamicString*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DynamicString*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigPosRotWithReferTarget_Class_3_0F0F2FB9B9555C2B_TypeDefinitionIndex)->GetStaticField(0x4C1F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigPosRotWithReferTarget_Class_3_0F0F2FB9B9555C2B_TypeDefinitionIndex)->GetStaticField(0x4C1F8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ReferTargetCoordsOption>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ReferTargetCoordsOption>**)Il2CppClass::FromTypeDefinitionIndex(ConfigPosRotWithReferTarget_Class_3_0F0F2FB9B9555C2B_TypeDefinitionIndex)->GetStaticField(0x4C200);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::PosRotTargetOption*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::PosRotTargetOption*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigPosRotWithReferTarget_Class_3_0F0F2FB9B9555C2B_TypeDefinitionIndex)->GetStaticField(0x4C208);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::OffsetGroup*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::OffsetGroup*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigPosRotWithReferTarget_Class_3_0F0F2FB9B9555C2B_TypeDefinitionIndex)->GetStaticField(0x4C210);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigPosRotWithReferTarget_Class_3_0F0F2FB9B9555C2B_TypeDefinitionIndex)->GetStaticField(0x4C218);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CONFIGPOSROTWITHREFERTARGET_CLASS_3_0F0F2FB9B9555C2B__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CONFIGPOSROTWITHREFERTARGET_CLASS_3_0F0F2FB9B9555C2B__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CONFIGPOSROTWITHREFERTARGET_CLASS_3_0F0F2FB9B9555C2B_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::FlowCanvas::Nodes::ConfigPosRotWithReferTarget*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::ConfigPosRotWithReferTarget*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CONFIGPOSROTWITHREFERTARGET_CLASS_3_0F0F2FB9B9555C2B_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::FlowCanvas::Nodes::ConfigPosRotWithReferTarget*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::ConfigPosRotWithReferTarget*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CONFIGPOSROTWITHREFERTARGET_CLASS_3_0F0F2FB9B9555C2B_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
