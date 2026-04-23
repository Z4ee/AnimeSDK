#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_INTEQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x19E570A0)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_INTEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19E570B0)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_INTEQUALITYCOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E570D0)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_INTEQUALITYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x19E570C0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonMecanim_MecanimTranslator_IntEqualityComparer_TypeDefinitionIndex = 40596;

	class SkeletonMecanim_MecanimTranslator_IntEqualityComparer : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::IEqualityComparer_1<::System::Int32>** StaticGet_Instance()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(SkeletonMecanim_MecanimTranslator_IntEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x41810);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_INTEQUALITYCOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_INTEQUALITYCOMPARER__CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_INTEQUALITYCOMPARER_EQUALS_OFFSET))(this, x, y);
		}

		::System::Int32 GetHashCode(::System::Int32 o)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_INTEQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, o);
		}
	};
}
