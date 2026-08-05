#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Utilities/GUILayoutOptions_GUILayoutOptionType.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GUILayoutOption; }

#define SIRENIX_UTILITIES_GUILAYOUTOPTIONS_GUILAYOUTOPTIONSINSTANCE_CLONE_OFFSET UNITYSDK_OFFSET(0x1F25C090)
#define SIRENIX_UTILITIES_GUILAYOUTOPTIONS_GUILAYOUTOPTIONSINSTANCE_CREATEOPTIONSARARY_OFFSET UNITYSDK_OFFSET(0x1F25C150)
#define SIRENIX_UTILITIES_GUILAYOUTOPTIONS_GUILAYOUTOPTIONSINSTANCE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F25CB70)
#define SIRENIX_UTILITIES_GUILAYOUTOPTIONS_GUILAYOUTOPTIONSINSTANCE_EXPANDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1F25C9F0)
#define SIRENIX_UTILITIES_GUILAYOUTOPTIONS_GUILAYOUTOPTIONSINSTANCE_EXPANDWIDTH_OFFSET UNITYSDK_OFFSET(0x1F25CAB0)
#define SIRENIX_UTILITIES_GUILAYOUTOPTIONS_GUILAYOUTOPTIONSINSTANCE_GETCACHEDOPTIONS_OFFSET UNITYSDK_OFFSET(0x1F25BEF0)
#define SIRENIX_UTILITIES_GUILAYOUTOPTIONS_GUILAYOUTOPTIONSINSTANCE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F25CBB0)
#define SIRENIX_UTILITIES_GUILAYOUTOPTIONS_GUILAYOUTOPTIONSINSTANCE_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1F25C680)
#define SIRENIX_UTILITIES_GUILAYOUTOPTIONS_GUILAYOUTOPTIONSINSTANCE_MAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x1F25C730)
#define SIRENIX_UTILITIES_GUILAYOUTOPTIONS_GUILAYOUTOPTIONSINSTANCE_MAXWIDTH_OFFSET UNITYSDK_OFFSET(0x1F25C7E0)
#define SIRENIX_UTILITIES_GUILAYOUTOPTIONS_GUILAYOUTOPTIONSINSTANCE_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x1F25C890)
#define SIRENIX_UTILITIES_GUILAYOUTOPTIONS_GUILAYOUTOPTIONSINSTANCE_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x1F25C940)
#define SIRENIX_UTILITIES_GUILAYOUTOPTIONS_GUILAYOUTOPTIONSINSTANCE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1F25C5B0)
#define SIRENIX_UTILITIES_GUILAYOUTOPTIONS_GUILAYOUTOPTIONSINSTANCE_SETVALUE_1_OFFSET UNITYSDK_OFFSET(0x1F25BE10)
#define SIRENIX_UTILITIES_GUILAYOUTOPTIONS_GUILAYOUTOPTIONSINSTANCE_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1F25B9D0)
#define SIRENIX_UTILITIES_GUILAYOUTOPTIONS_GUILAYOUTOPTIONSINSTANCE_WIDTH_OFFSET UNITYSDK_OFFSET(0x1F25C5D0)
#define SIRENIX_UTILITIES_GUILAYOUTOPTIONS_GUILAYOUTOPTIONSINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F25B910)

namespace Sirenix::Utilities
{
	inline static constexpr unsigned int GUILayoutOptions_GUILayoutOptionsInstance_TypeDefinitionIndex = 6492;

	class GUILayoutOptions_GUILayoutOptionsInstance : public ::System::Object
	{
	public:
		::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionsInstance* Parent; // 0x10
		::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionType GUILayoutOptionType; // 0x18
		::System::Single value; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_GUILAYOUTOPTIONS_GUILAYOUTOPTIONSINSTANCE__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::GUILayoutOption*>* GetCachedOptions()
		{
			return ((::Il2CppArray<::UnityEngine::GUILayoutOption*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_GUILAYOUTOPTIONS_GUILAYOUTOPTIONSINSTANCE_GETCACHEDOPTIONS_OFFSET))(this);
		}

		static ::Il2CppArray<::UnityEngine::GUILayoutOption*>* op_Implicit(::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionsInstance* options)
		{
			return ((::Il2CppArray<::UnityEngine::GUILayoutOption*>*(*)(::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionsInstance*))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_GUILAYOUTOPTIONS_GUILAYOUTOPTIONSINSTANCE_OP_IMPLICIT_OFFSET))(options);
		}

		::Il2CppArray<::UnityEngine::GUILayoutOption*>* CreateOptionsArary()
		{
			return ((::Il2CppArray<::UnityEngine::GUILayoutOption*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_GUILAYOUTOPTIONS_GUILAYOUTOPTIONSINSTANCE_CREATEOPTIONSARARY_OFFSET))(this);
		}

		::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionsInstance* Clone()
		{
			return ((::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionsInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_GUILAYOUTOPTIONS_GUILAYOUTOPTIONSINSTANCE_CLONE_OFFSET))(this);
		}

		::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionsInstance* Width(::System::Single width)
		{
			return ((::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionsInstance*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_GUILAYOUTOPTIONS_GUILAYOUTOPTIONSINSTANCE_WIDTH_OFFSET))(this, width);
		}

		::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionsInstance* Height(::System::Single height)
		{
			return ((::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionsInstance*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_GUILAYOUTOPTIONS_GUILAYOUTOPTIONSINSTANCE_HEIGHT_OFFSET))(this, height);
		}

		::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionsInstance* MaxHeight(::System::Single height)
		{
			return ((::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionsInstance*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_GUILAYOUTOPTIONS_GUILAYOUTOPTIONSINSTANCE_MAXHEIGHT_OFFSET))(this, height);
		}

		::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionsInstance* MaxWidth(::System::Single width)
		{
			return ((::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionsInstance*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_GUILAYOUTOPTIONS_GUILAYOUTOPTIONSINSTANCE_MAXWIDTH_OFFSET))(this, width);
		}

		::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionsInstance* MinHeight(::System::Single height)
		{
			return ((::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionsInstance*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_GUILAYOUTOPTIONS_GUILAYOUTOPTIONSINSTANCE_MINHEIGHT_OFFSET))(this, height);
		}

		::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionsInstance* MinWidth(::System::Single width)
		{
			return ((::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionsInstance*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_GUILAYOUTOPTIONS_GUILAYOUTOPTIONSINSTANCE_MINWIDTH_OFFSET))(this, width);
		}

		::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionsInstance* ExpandHeight(::System::Boolean expand)
		{
			return ((::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionsInstance*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_GUILAYOUTOPTIONS_GUILAYOUTOPTIONSINSTANCE_EXPANDHEIGHT_OFFSET))(this, expand);
		}

		::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionsInstance* ExpandWidth(::System::Boolean expand)
		{
			return ((::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionsInstance*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_GUILAYOUTOPTIONS_GUILAYOUTOPTIONSINSTANCE_EXPANDWIDTH_OFFSET))(this, expand);
		}

		::System::Void SetValue(::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionType type, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionType, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_GUILAYOUTOPTIONS_GUILAYOUTOPTIONSINSTANCE_SETVALUE_OFFSET))(this, type, value);
		}

		::System::Void SetValue_1(::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionType type, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionType, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_GUILAYOUTOPTIONS_GUILAYOUTOPTIONSINSTANCE_SETVALUE_1_OFFSET))(this, type, value);
		}

		::System::Boolean Equals(::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionsInstance* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Sirenix::Utilities::GUILayoutOptions_GUILayoutOptionsInstance*))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_GUILAYOUTOPTIONS_GUILAYOUTOPTIONSINSTANCE_EQUALS_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_GUILAYOUTOPTIONS_GUILAYOUTOPTIONSINSTANCE_GETHASHCODE_OFFSET))(this);
		}
	};
}
