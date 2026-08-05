#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MatPropertySetting.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueVertexStretchDirectionType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigMaterialPropertyVertextStretchModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_CLASS_3_24F6B45207558900_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B4FEB20)
#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_CLASS_3_24F6B45207558900_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B4FEB30)
#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_CLASS_3_24F6B45207558900_WRITE_OFFSET UNITYSDK_OFFSET(0x1B4FFF50)
#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_CLASS_3_24F6B45207558900__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B500B30)
#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_CLASS_3_24F6B45207558900__CTOR_OFFSET UNITYSDK_OFFSET(0x1B500AF0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyVertextStretchModifier_Class_3_24F6B45207558900_TypeDefinitionIndex = 50778;

	class ConfigMaterialPropertyVertextStretchModifier_Class_3_24F6B45207558900 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigMaterialPropertyVertextStretchModifier*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueTexture>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyVertextStretchModifier_Class_3_24F6B45207558900_TypeDefinitionIndex)->GetStaticField(0x4E820);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::MatPropertySetting>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyVertextStretchModifier_Class_3_24F6B45207558900_TypeDefinitionIndex)->GetStaticField(0x4E828);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyVertextStretchModifier_Class_3_24F6B45207558900_TypeDefinitionIndex)->GetStaticField(0x4E830);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>** StaticGet_Field_3_3()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyVertextStretchModifier_Class_3_24F6B45207558900_TypeDefinitionIndex)->GetStaticField(0x4E838);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueVector>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueVector>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyVertextStretchModifier_Class_3_24F6B45207558900_TypeDefinitionIndex)->GetStaticField(0x4E840);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyVertextStretchModifier_Class_3_24F6B45207558900_TypeDefinitionIndex)->GetStaticField(0x4E848);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyVertextStretchModifier_Class_3_24F6B45207558900_TypeDefinitionIndex)->GetStaticField(0x4E850);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueVertexStretchDirectionType>** StaticGet_Field_3_9()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueVertexStretchDirectionType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyVertextStretchModifier_Class_3_24F6B45207558900_TypeDefinitionIndex)->GetStaticField(0x4E858);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyVertextStretchModifier_Class_3_24F6B45207558900_TypeDefinitionIndex)->GetStaticField(0x4E860);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueBool>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyVertextStretchModifier_Class_3_24F6B45207558900_TypeDefinitionIndex)->GetStaticField(0x4E868);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierValueFloat>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyVertextStretchModifier_Class_3_24F6B45207558900_TypeDefinitionIndex)->GetStaticField(0x4E870);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_CLASS_3_24F6B45207558900__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_CLASS_3_24F6B45207558900__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_CLASS_3_24F6B45207558900_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigMaterialPropertyVertextStretchModifier*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyVertextStretchModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_CLASS_3_24F6B45207558900_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ConfigMaterialPropertyVertextStretchModifier*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyVertextStretchModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_CLASS_3_24F6B45207558900_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
