#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Color.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUECOLOR_CLASS_3_FF296BCBB94E1313_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x149F33E0)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUECOLOR_CLASS_3_FF296BCBB94E1313_READMEMBER_OFFSET UNITYSDK_OFFSET(0x149F33F0)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUECOLOR_CLASS_3_FF296BCBB94E1313_WRITE_OFFSET UNITYSDK_OFFSET(0x149F3620)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUECOLOR_CLASS_3_FF296BCBB94E1313__CCTOR_OFFSET UNITYSDK_OFFSET(0x149F37E0)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERVALUECOLOR_CLASS_3_FF296BCBB94E1313__CTOR_OFFSET UNITYSDK_OFFSET(0x149F3780)

namespace MoleMole
{
	inline static constexpr unsigned int MaterialPropertyModifierValueColor_Class_3_FF296BCBB94E1313_TypeDefinitionIndex = 58567;

	class MaterialPropertyModifierValueColor_Class_3_FF296BCBB94E1313 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MaterialPropertyModifierValueColor>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyModifierValueColor_Class_3_FF296BCBB94E1313_TypeDefinitionIndex)->GetStaticField(0x327A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyModifierValueColor_Class_3_FF296BCBB94E1313_TypeDefinitionIndex)->GetStaticField(0x327A8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUECOLOR_CLASS_3_FF296BCBB94E1313__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUECOLOR_CLASS_3_FF296BCBB94E1313__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUECOLOR_CLASS_3_FF296BCBB94E1313_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MaterialPropertyModifierValueColor& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueColor&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUECOLOR_CLASS_3_FF296BCBB94E1313_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::MaterialPropertyModifierValueColor& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueColor&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERVALUECOLOR_CLASS_3_FF296BCBB94E1313_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
