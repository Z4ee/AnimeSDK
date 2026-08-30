#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriFsRequest.h"

namespace System { class String; }

#define CRIWARE_CRIFSINSTALLREQUEST_GET_DESTINATIONPATH_OFFSET UNITYSDK_OFFSET(0x1D388620)
#define CRIWARE_CRIFSINSTALLREQUEST_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1D388640)
#define CRIWARE_CRIFSINSTALLREQUEST_GET_SOURCEPATH_OFFSET UNITYSDK_OFFSET(0x1D388600)
#define CRIWARE_CRIFSINSTALLREQUEST_SET_DESTINATIONPATH_OFFSET UNITYSDK_OFFSET(0x1D388630)
#define CRIWARE_CRIFSINSTALLREQUEST_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1D388650)
#define CRIWARE_CRIFSINSTALLREQUEST_SET_SOURCEPATH_OFFSET UNITYSDK_OFFSET(0x1D388610)
#define CRIWARE_CRIFSINSTALLREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D388660)

namespace CriWare
{
	inline static constexpr unsigned int CriFsInstallRequest_TypeDefinitionIndex = 38814;

	class CriFsInstallRequest : public ::CriWare::CriFsRequest
	{
	public:
		::System::String* _destinationPath_k__BackingField; // 0x38
		::System::String* _sourcePath_k__BackingField; // 0x40
		::System::Single _progress_k__BackingField; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSINSTALLREQUEST__CTOR_OFFSET))(this);
		}

		::System::String* get_sourcePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSINSTALLREQUEST_GET_SOURCEPATH_OFFSET))(this);
		}

		::System::Void set_sourcePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSINSTALLREQUEST_SET_SOURCEPATH_OFFSET))(this, a1);
		}

		::System::String* get_destinationPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSINSTALLREQUEST_GET_DESTINATIONPATH_OFFSET))(this);
		}

		::System::Void set_destinationPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSINSTALLREQUEST_SET_DESTINATIONPATH_OFFSET))(this, a1);
		}

		::System::Single get_progress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSINSTALLREQUEST_GET_PROGRESS_OFFSET))(this);
		}

		::System::Void set_progress(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSINSTALLREQUEST_SET_PROGRESS_OFFSET))(this, a1);
		}
	};
}
