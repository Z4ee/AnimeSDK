#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DesperateDevs::Utils { class PublicMemberInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DESPERATEDEVS_UTILS_ATTRIBUTEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x146DE280)

namespace DesperateDevs::Utils
{
	inline static constexpr unsigned int AttributeInfo_TypeDefinitionIndex = 7095;

	class AttributeInfo : public ::System::Object
	{
	public:
		::System::Object* attribute; // 0x10
		::System::Collections::Generic::List_1<::DesperateDevs::Utils::PublicMemberInfo*>* memberInfos; // 0x18

		::System::Void _ctor(::System::Object* a1, ::System::Collections::Generic::List_1<::DesperateDevs::Utils::PublicMemberInfo*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Generic::List_1<::DesperateDevs::Utils::PublicMemberInfo*>*))((::PBYTE)hIl2Cpp + DESPERATEDEVS_UTILS_ATTRIBUTEINFO__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
