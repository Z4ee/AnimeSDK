#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Sirenix::Utilities { class GUILayoutOptions_GUILayoutOptionsInstance; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GUILayoutOption; }

#define SIRENIX_UTILITIES_GUILAYOUTOPTIONS_EXPANDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1F25BD50)
#define SIRENIX_UTILITIES_GUILAYOUTOPTIONS_EXPANDWIDTH_OFFSET UNITYSDK_OFFSET(0x1F25BE30)
#define SIRENIX_UTILITIES_GUILAYOUTOPTIONS_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1F25B9E0)
#define SIRENIX_UTILITIES_GUILAYOUTOPTIONS_MAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x1F25BA90)
#define SIRENIX_UTILITIES_GUILAYOUTOPTIONS_MAXWIDTH_OFFSET UNITYSDK_OFFSET(0x1F25BB40)
#define SIRENIX_UTILITIES_GUILAYOUTOPTIONS_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x1F25BCA0)
#define SIRENIX_UTILITIES_GUILAYOUTOPTIONS_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x1F25BBF0)
#define SIRENIX_UTILITIES_GUILAYOUTOPTIONS_WIDTH_OFFSET UNITYSDK_OFFSET(0x1F25B920)
#define SIRENIX_UTILITIES_GUILAYOUTOPTIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F25B740)

namespace Sirenix::Utilities
{
	inline static constexpr unsigned int GUILayoutOptions_TypeDefinitionIndex = 6490;

	class GUILayoutOptions : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::GUILayoutOption*>** StaticGet_EmptyGUIOptions()
		{
			return (::Il2CppArray<::UnityEngine::GUILayoutOption*>**)Il2CppClass::FromTypeDefinitionIndex(GUILayoutOptions_TypeDefinitionIndex)->GetStaticField(0x5A00);
		}
		static ::Il2CppArray<::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionsInstance*>** StaticGet_GUILayoutOptionsInstanceCache()
		{
			return (::Il2CppArray<::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionsInstance*>**)Il2CppClass::FromTypeDefinitionIndex(GUILayoutOptions_TypeDefinitionIndex)->GetStaticField(0x5A08);
		}
		static ::System::Collections::Generic::Dictionary_2<::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionsInstance*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*>** StaticGet_GUILayoutOptionsCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionsInstance*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*>**)Il2CppClass::FromTypeDefinitionIndex(GUILayoutOptions_TypeDefinitionIndex)->GetStaticField(0x5A10);
		}
		static ::System::Int32* StaticGet_CurrentCacheIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GUILayoutOptions_TypeDefinitionIndex)->GetStaticField(0x30D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_GUILAYOUTOPTIONS__CCTOR_OFFSET))();
		}

		static ::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionsInstance* Width(::System::Single width)
		{
			return ((::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionsInstance*(*)(::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_GUILAYOUTOPTIONS_WIDTH_OFFSET))(width);
		}

		static ::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionsInstance* Height(::System::Single height)
		{
			return ((::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionsInstance*(*)(::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_GUILAYOUTOPTIONS_HEIGHT_OFFSET))(height);
		}

		static ::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionsInstance* MaxHeight(::System::Single height)
		{
			return ((::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionsInstance*(*)(::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_GUILAYOUTOPTIONS_MAXHEIGHT_OFFSET))(height);
		}

		static ::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionsInstance* MaxWidth(::System::Single width)
		{
			return ((::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionsInstance*(*)(::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_GUILAYOUTOPTIONS_MAXWIDTH_OFFSET))(width);
		}

		static ::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionsInstance* MinWidth(::System::Single width)
		{
			return ((::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionsInstance*(*)(::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_GUILAYOUTOPTIONS_MINWIDTH_OFFSET))(width);
		}

		static ::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionsInstance* MinHeight(::System::Single height)
		{
			return ((::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionsInstance*(*)(::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_GUILAYOUTOPTIONS_MINHEIGHT_OFFSET))(height);
		}

		static ::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionsInstance* ExpandHeight(::System::Boolean expand)
		{
			return ((::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionsInstance*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_GUILAYOUTOPTIONS_EXPANDHEIGHT_OFFSET))(expand);
		}

		static ::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionsInstance* ExpandWidth(::System::Boolean expand)
		{
			return ((::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionsInstance*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_GUILAYOUTOPTIONS_EXPANDWIDTH_OFFSET))(expand);
		}
	};
}
