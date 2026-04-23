#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DesperateDevs::Utils { class PublicMemberInfo; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DESPERATEDEVS_UTILS_PUBLICMEMBERINFOEXTENSION_COPYPUBLICMEMBERVALUES_OFFSET UNITYSDK_OFFSET(0x12C25E50)
#define DESPERATEDEVS_UTILS_PUBLICMEMBERINFOEXTENSION_GETPUBLICMEMBERINFOS_OFFSET UNITYSDK_OFFSET(0x12C25A80)
#define DESPERATEDEVS_UTILS_PUBLICMEMBERINFOEXTENSION_PUBLICMEMBERCLONE_OFFSET UNITYSDK_OFFSET(0x12C25E00)

namespace DesperateDevs::Utils
{
	inline static constexpr unsigned int PublicMemberInfoExtension_TypeDefinitionIndex = 9194;

	class PublicMemberInfoExtension : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::DesperateDevs::Utils::PublicMemberInfo*>* GetPublicMemberInfos(::System::Type* type)
		{
			return ((::System::Collections::Generic::List_1<::DesperateDevs::Utils::PublicMemberInfo*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + DESPERATEDEVS_UTILS_PUBLICMEMBERINFOEXTENSION_GETPUBLICMEMBERINFOS_OFFSET))(type);
		}

		static ::System::Object* PublicMemberClone(::System::Object* obj)
		{
			return ((::System::Object*(*)(::System::Object*))((::PBYTE)hIl2Cpp + DESPERATEDEVS_UTILS_PUBLICMEMBERINFOEXTENSION_PUBLICMEMBERCLONE_OFFSET))(obj);
		}

		static ::System::Void CopyPublicMemberValues(::System::Object* source, ::System::Object* target)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + DESPERATEDEVS_UTILS_PUBLICMEMBERINFOEXTENSION_COPYPUBLICMEMBERVALUES_OFFSET))(source, target);
		}
	};
}
