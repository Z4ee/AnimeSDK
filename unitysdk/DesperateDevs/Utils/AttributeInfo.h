#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DesperateDevs::Utils { class PublicMemberInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DESPERATEDEVS_UTILS_ATTRIBUTEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x12C25720)

namespace DesperateDevs::Utils
{
	inline static constexpr unsigned int AttributeInfo_TypeDefinitionIndex = 9192;

	class AttributeInfo : public ::System::Object
	{
	public:
		::System::Object* attribute; // 0x10
		::System::Collections::Generic::List_1<::DesperateDevs::Utils::PublicMemberInfo*>* memberInfos; // 0x18

		::System::Void _ctor(::System::Object* attribute, ::System::Collections::Generic::List_1<::DesperateDevs::Utils::PublicMemberInfo*>* memberInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Generic::List_1<::DesperateDevs::Utils::PublicMemberInfo*>*))((::PBYTE)hIl2Cpp + DESPERATEDEVS_UTILS_ATTRIBUTEINFO__CTOR_OFFSET))(this, attribute, memberInfos);
		}
	};
}
