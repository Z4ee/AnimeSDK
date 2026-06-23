#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_76A758F872DFBC83.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class TextItalicAdobeStyle; }

#define MOLEMOLE_MONOSURFSCORE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x17DD9B20)
#define MOLEMOLE_MONOSURFSCORE_METHOD_5_4155E433CDAD6311_OFFSET UNITYSDK_OFFSET(0x17DDA010)
#define MOLEMOLE_MONOSURFSCORE_UPDATETIME_OFFSET UNITYSDK_OFFSET(0x17DD9C20)
#define MOLEMOLE_MONOSURFSCORE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17DDA450)
#define MOLEMOLE_MONOSURFSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x17DDA400)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSurfScore_TypeDefinitionIndex = 41353;

	class MonoSurfScore : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_Field_5_3()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonoSurfScore_TypeDefinitionIndex)->GetStaticField(0x4BEF0);
		}
		// static const ::System::String* Field_5_0; // 0x0
		// static const ::System::String* Field_5_1; // 0x0
		// static const ::System::String* Field_5_2; // 0x0
		::UnityEngine::Animation* self; // 0x18
		::UnityEngine::UI::TextItalicAdobeStyle* minute; // 0x20
		::UnityEngine::UI::TextItalicAdobeStyle* second; // 0x28
		::UnityEngine::UI::TextItalicAdobeStyle* nano; // 0x30
		::UnityEngine::RectTransform* progressBar; // 0x38
		::Il2CppArray<::UnityEngine::Material*>* material; // 0x40
		::System::Int32 Field_5_10; // 0x48
		::Enum_3_76A758F872DFBC83 Field_5_11; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSURFSCORE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSURFSCORE__CCTOR_OFFSET))();
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSURFSCORE_INITIALIZE_OFFSET))(this);
		}

		::System::Void UpdateTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSURFSCORE_UPDATETIME_OFFSET))(this, a1);
		}

		::System::Void Method_5_4155E433CDAD6311(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSURFSCORE_METHOD_5_4155E433CDAD6311_OFFSET))(this, a1);
		}
	};
}
