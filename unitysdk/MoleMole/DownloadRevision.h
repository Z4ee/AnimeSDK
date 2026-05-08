#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ResourceFileType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class DownloadFileInfo; }
namespace System { class String; }

#define MOLEMOLE_DOWNLOADREVISION_GET_P4CHANGELIST_OFFSET UNITYSDK_OFFSET(0x186CD460)
#define MOLEMOLE_DOWNLOADREVISION_GET_SUFFIX_OFFSET UNITYSDK_OFFSET(0x186CD420)
#define MOLEMOLE_DOWNLOADREVISION_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x186CD5D0)
#define MOLEMOLE_DOWNLOADREVISION_METHOD_1_D95BC964A2667B55_OFFSET UNITYSDK_OFFSET(0x186CD610)
#define MOLEMOLE_DOWNLOADREVISION_METHOD_1_DD6D03899D36FF8C_OFFSET UNITYSDK_OFFSET(0x186CD470)
#define MOLEMOLE_DOWNLOADREVISION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x186CD560)
#define MOLEMOLE_DOWNLOADREVISION__CTOR_OFFSET UNITYSDK_OFFSET(0x186CD3D0)

namespace MoleMole
{
	inline static constexpr unsigned int DownloadRevision_TypeDefinitionIndex = 60647;

	class DownloadRevision : public ::System::Object
	{
	public:
		::Foundation::ResourceFileType fileType; // 0x10
		::System::String* revisionCode; // 0x18
		::MoleMole::DownloadFileInfo* versions_fileInfo; // 0x20

		::System::Void _ctor(::Foundation::ResourceFileType a1, ::System::String* a2, ::MoleMole::DownloadFileInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ResourceFileType, ::System::String*, ::MoleMole::DownloadFileInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADREVISION__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::String* get_Suffix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADREVISION_GET_SUFFIX_OFFSET))(this);
		}

		::System::String* get_p4changelist()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADREVISION_GET_P4CHANGELIST_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADREVISION_TOSTRING_OFFSET))(this);
		}

		::System::String* Method_1_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADREVISION_METHOD_1_128774387667156B_OFFSET))(this);
		}

		static ::System::String* Method_1_DD6D03899D36FF8C(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADREVISION_METHOD_1_DD6D03899D36FF8C_OFFSET))(a1);
		}

		static ::System::String* Method_1_D95BC964A2667B55(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADREVISION_METHOD_1_D95BC964A2667B55_OFFSET))(a1);
		}
	};
}
