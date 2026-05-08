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

#define MOLEMOLE_UIADATAPORRECTTRANSFORM_UIADATAPORRECTTRANSFORM_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x17E4D3F0)
#define MOLEMOLE_UIADATAPORRECTTRANSFORM_UIADATAPORRECTTRANSFORM_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x17E4D400)
#define MOLEMOLE_UIADATAPORRECTTRANSFORM_UIADATAPORRECTTRANSFORM_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x17E4DCB0)
#define MOLEMOLE_UIADATAPORRECTTRANSFORM_UIADATAPORRECTTRANSFORM_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E4E200)
#define MOLEMOLE_UIADATAPORRECTTRANSFORM_UIADATAPORRECTTRANSFORM_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17E4E1C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAdataporRectTransform_UIAdataporRectTransform_UnityGeneratedFormatter_TypeDefinitionIndex = 48903;

	class UIAdataporRectTransform_UIAdataporRectTransform_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::UIAdataporRectTransform*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Quaternion>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Quaternion>**)Il2CppClass::FromTypeDefinitionIndex(UIAdataporRectTransform_UIAdataporRectTransform_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x37B70);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector2>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(UIAdataporRectTransform_UIAdataporRectTransform_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x37B78);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(UIAdataporRectTransform_UIAdataporRectTransform_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x37B80);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIAdataporRectTransform_UIAdataporRectTransform_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x37B88);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADATAPORRECTTRANSFORM_UIADATAPORRECTTRANSFORM_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIADATAPORRECTTRANSFORM_UIADATAPORRECTTRANSFORM_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADATAPORRECTTRANSFORM_UIADATAPORRECTTRANSFORM_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::UIAdataporRectTransform*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIAdataporRectTransform*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADATAPORRECTTRANSFORM_UIADATAPORRECTTRANSFORM_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::UIAdataporRectTransform*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAdataporRectTransform*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADATAPORRECTTRANSFORM_UIADATAPORRECTTRANSFORM_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
