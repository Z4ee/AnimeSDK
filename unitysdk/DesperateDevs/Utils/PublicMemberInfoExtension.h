#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DesperateDevs::Utils { class PublicMemberInfo; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DESPERATEDEVS_UTILS_PUBLICMEMBERINFOEXTENSION_COPYPUBLICMEMBERVALUES_OFFSET UNITYSDK_OFFSET(0x1D2FEF10)
#define DESPERATEDEVS_UTILS_PUBLICMEMBERINFOEXTENSION_GETPUBLICMEMBERINFOS_OFFSET UNITYSDK_OFFSET(0x1D2FE870)
#define DESPERATEDEVS_UTILS_PUBLICMEMBERINFOEXTENSION_PUBLICMEMBERCLONE_OFFSET UNITYSDK_OFFSET(0x1D2FEEC0)

namespace DesperateDevs::Utils
{
	inline static constexpr unsigned int PublicMemberInfoExtension_TypeDefinitionIndex = 7103;

	class PublicMemberInfoExtension : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::DesperateDevs::Utils::PublicMemberInfo*>* GetPublicMemberInfos(::System::Type* a1)
		{
			return ((::System::Collections::Generic::List_1<::DesperateDevs::Utils::PublicMemberInfo*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + DESPERATEDEVS_UTILS_PUBLICMEMBERINFOEXTENSION_GETPUBLICMEMBERINFOS_OFFSET))(a1);
		}

		static ::System::Object* PublicMemberClone(::System::Object* a1)
		{
			return ((::System::Object*(*)(::System::Object*))((::PBYTE)hIl2Cpp + DESPERATEDEVS_UTILS_PUBLICMEMBERINFOEXTENSION_PUBLICMEMBERCLONE_OFFSET))(a1);
		}

		static ::System::Void CopyPublicMemberValues(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + DESPERATEDEVS_UTILS_PUBLICMEMBERINFOEXTENSION_COPYPUBLICMEMBERVALUES_OFFSET))(a1, a2);
		}
	};
}
