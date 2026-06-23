#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ComicImgPart.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ComicPartInfo; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_COMICDATAUTIL_GETCOMICPARTINFOFROMTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1DD4B790)
#define MOLEMOLE_COMICDATAUTIL_GETIMGTRANS_OFFSET UNITYSDK_OFFSET(0x1DD4B550)
#define MOLEMOLE_COMICDATAUTIL_GETTRANSNAMEDDFS_OFFSET UNITYSDK_OFFSET(0x1DD4B590)
#define MOLEMOLE_COMICDATAUTIL_NAMETOPARTTYPE_OFFSET UNITYSDK_OFFSET(0x1DD4B2C0)
#define MOLEMOLE_COMICDATAUTIL_PARTTYPETONAME_OFFSET UNITYSDK_OFFSET(0x1DD4B410)
#define MOLEMOLE_COMICDATAUTIL_ROOTGETIMGTRANS_OFFSET UNITYSDK_OFFSET(0x1DD4B460)

namespace MoleMole
{
	inline static constexpr unsigned int ComicDataUtil_TypeDefinitionIndex = 32127;

	class ComicDataUtil : public ::System::Object
	{
	public:
		static ::MoleMole::ComicImgPart NameToPartType(::System::String* name)
		{
			return ((::MoleMole::ComicImgPart(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICDATAUTIL_NAMETOPARTTYPE_OFFSET))(name);
		}

		static ::System::String* PartTypeToName(::MoleMole::ComicImgPart type)
		{
			return ((::System::String*(*)(::MoleMole::ComicImgPart))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICDATAUTIL_PARTTYPETONAME_OFFSET))(type);
		}

		static ::UnityEngine::Transform* RootGetImgTrans(::UnityEngine::Transform* transform, ::MoleMole::ComicImgPart type)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::MoleMole::ComicImgPart))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICDATAUTIL_ROOTGETIMGTRANS_OFFSET))(transform, type);
		}

		static ::UnityEngine::Transform* GetImgTrans(::UnityEngine::Transform* transform)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICDATAUTIL_GETIMGTRANS_OFFSET))(transform);
		}

		static ::UnityEngine::Transform* GetTransNamedDFS(::UnityEngine::Transform* transform, ::System::String* name)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICDATAUTIL_GETTRANSNAMEDDFS_OFFSET))(transform, name);
		}

		static ::MoleMole::ComicPartInfo* GetComicPartInfoFromTransform(::UnityEngine::Transform* trans)
		{
			return ((::MoleMole::ComicPartInfo*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICDATAUTIL_GETCOMICPARTINFOFROMTRANSFORM_OFFSET))(trans);
		}
	};
}
