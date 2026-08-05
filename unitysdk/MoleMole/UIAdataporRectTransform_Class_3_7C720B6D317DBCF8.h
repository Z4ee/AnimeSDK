#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class UIAdataporRectTransform; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_UIADATAPORRECTTRANSFORM_CLASS_3_7C720B6D317DBCF8_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B266140)
#define MOLEMOLE_UIADATAPORRECTTRANSFORM_CLASS_3_7C720B6D317DBCF8_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B266150)
#define MOLEMOLE_UIADATAPORRECTTRANSFORM_CLASS_3_7C720B6D317DBCF8_WRITE_OFFSET UNITYSDK_OFFSET(0x1B266990)
#define MOLEMOLE_UIADATAPORRECTTRANSFORM_CLASS_3_7C720B6D317DBCF8__CCTOR_OFFSET UNITYSDK_OFFSET(0x18003530)
#define MOLEMOLE_UIADATAPORRECTTRANSFORM_CLASS_3_7C720B6D317DBCF8__CTOR_OFFSET UNITYSDK_OFFSET(0x180034F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAdataporRectTransform_Class_3_7C720B6D317DBCF8_TypeDefinitionIndex = 48721;

	class UIAdataporRectTransform_Class_3_7C720B6D317DBCF8 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::UIAdataporRectTransform*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector2>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(UIAdataporRectTransform_Class_3_7C720B6D317DBCF8_TypeDefinitionIndex)->GetStaticField(0x3A200);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Quaternion>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Quaternion>**)Il2CppClass::FromTypeDefinitionIndex(UIAdataporRectTransform_Class_3_7C720B6D317DBCF8_TypeDefinitionIndex)->GetStaticField(0x3A208);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIAdataporRectTransform_Class_3_7C720B6D317DBCF8_TypeDefinitionIndex)->GetStaticField(0x3A210);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(UIAdataporRectTransform_Class_3_7C720B6D317DBCF8_TypeDefinitionIndex)->GetStaticField(0x3A218);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADATAPORRECTTRANSFORM_CLASS_3_7C720B6D317DBCF8__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIADATAPORRECTTRANSFORM_CLASS_3_7C720B6D317DBCF8__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADATAPORRECTTRANSFORM_CLASS_3_7C720B6D317DBCF8_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::UIAdataporRectTransform*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIAdataporRectTransform*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADATAPORRECTTRANSFORM_CLASS_3_7C720B6D317DBCF8_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::UIAdataporRectTransform*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAdataporRectTransform*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADATAPORRECTTRANSFORM_CLASS_3_7C720B6D317DBCF8_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
