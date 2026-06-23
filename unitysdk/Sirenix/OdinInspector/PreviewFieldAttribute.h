#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/ObjectFieldAlignment.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_PREVIEWFIELDATTRIBUTE_GET_ALIGNMENTHASVALUE_OFFSET UNITYSDK_OFFSET(0x1E329BC0)
#define SIRENIX_ODININSPECTOR_PREVIEWFIELDATTRIBUTE_GET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1E329BA0)
#define SIRENIX_ODININSPECTOR_PREVIEWFIELDATTRIBUTE_SET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1E329BB0)
#define SIRENIX_ODININSPECTOR_PREVIEWFIELDATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E329BE0)
#define SIRENIX_ODININSPECTOR_PREVIEWFIELDATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E329BF0)
#define SIRENIX_ODININSPECTOR_PREVIEWFIELDATTRIBUTE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1E329C00)
#define SIRENIX_ODININSPECTOR_PREVIEWFIELDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E329BD0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int PreviewFieldAttribute_TypeDefinitionIndex = 7338;

	class PreviewFieldAttribute : public ::System::Attribute
	{
	public:
		::System::Boolean alignmentHasValue; // 0x10
		::System::Single Height; // 0x14
		::Sirenix::OdinInspector::ObjectFieldAlignment alignment; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PREVIEWFIELDATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Single height)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PREVIEWFIELDATTRIBUTE__CTOR_1_OFFSET))(this, height);
		}

		::System::Void _ctor_2(::System::Single height, ::Sirenix::OdinInspector::ObjectFieldAlignment alignment)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::Sirenix::OdinInspector::ObjectFieldAlignment))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PREVIEWFIELDATTRIBUTE__CTOR_2_OFFSET))(this, height, alignment);
		}

		::System::Void _ctor_3(::Sirenix::OdinInspector::ObjectFieldAlignment alignment)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::OdinInspector::ObjectFieldAlignment))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PREVIEWFIELDATTRIBUTE__CTOR_3_OFFSET))(this, alignment);
		}

		::Sirenix::OdinInspector::ObjectFieldAlignment get_Alignment()
		{
			return ((::Sirenix::OdinInspector::ObjectFieldAlignment(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PREVIEWFIELDATTRIBUTE_GET_ALIGNMENT_OFFSET))(this);
		}

		::System::Void set_Alignment(::Sirenix::OdinInspector::ObjectFieldAlignment value)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::OdinInspector::ObjectFieldAlignment))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PREVIEWFIELDATTRIBUTE_SET_ALIGNMENT_OFFSET))(this, value);
		}

		::System::Boolean get_AlignmentHasValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PREVIEWFIELDATTRIBUTE_GET_ALIGNMENTHASVALUE_OFFSET))(this);
		}
	};
}
