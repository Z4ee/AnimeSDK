#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MatPropertySetting.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigMaterialPropertyDiffuseModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_CLASS_3_0CD6489E40D88F49_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19AD4E00)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_CLASS_3_0CD6489E40D88F49_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19AD4E10)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_CLASS_3_0CD6489E40D88F49_WRITE_OFFSET UNITYSDK_OFFSET(0x19AD5C10)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_CLASS_3_0CD6489E40D88F49__CCTOR_OFFSET UNITYSDK_OFFSET(0x19AD6460)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_CLASS_3_0CD6489E40D88F49__CTOR_OFFSET UNITYSDK_OFFSET(0x19AD6420)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyDiffuseModifier_Class_3_0CD6489E40D88F49_TypeDefinitionIndex = 91418;

	class ConfigMaterialPropertyDiffuseModifier_Class_3_0CD6489E40D88F49 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigMaterialPropertyDiffuseModifier*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyDiffuseModifier_Class_3_0CD6489E40D88F49_TypeDefinitionIndex)->GetStaticField(0x51870);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyDiffuseModifier_Class_3_0CD6489E40D88F49_TypeDefinitionIndex)->GetStaticField(0x51878);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyDiffuseModifier_Class_3_0CD6489E40D88F49_TypeDefinitionIndex)->GetStaticField(0x51880);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>** StaticGet_Field_3_8()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyDiffuseModifier_Class_3_0CD6489E40D88F49_TypeDefinitionIndex)->GetStaticField(0x51888);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueColor>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyDiffuseModifier_Class_3_0CD6489E40D88F49_TypeDefinitionIndex)->GetStaticField(0x51890);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyDiffuseModifier_Class_3_0CD6489E40D88F49_TypeDefinitionIndex)->GetStaticField(0x51898);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyDiffuseModifier_Class_3_0CD6489E40D88F49_TypeDefinitionIndex)->GetStaticField(0x518A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyDiffuseModifier_Class_3_0CD6489E40D88F49_TypeDefinitionIndex)->GetStaticField(0x518A8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>** StaticGet_Field_3_9()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyDiffuseModifier_Class_3_0CD6489E40D88F49_TypeDefinitionIndex)->GetStaticField(0x518B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_CLASS_3_0CD6489E40D88F49__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_CLASS_3_0CD6489E40D88F49__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_CLASS_3_0CD6489E40D88F49_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigMaterialPropertyDiffuseModifier*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyDiffuseModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_CLASS_3_0CD6489E40D88F49_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ConfigMaterialPropertyDiffuseModifier*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyDiffuseModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_CLASS_3_0CD6489E40D88F49_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
