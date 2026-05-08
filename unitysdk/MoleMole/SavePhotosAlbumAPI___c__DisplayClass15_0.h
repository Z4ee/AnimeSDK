#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_SAVEPHOTOSALBUMAPI___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12B15F20)
#define MOLEMOLE_SAVEPHOTOSALBUMAPI___C__DISPLAYCLASS15_0__REQUESTPHOTOPERMISSIONBYMHYSDK_B__0_OFFSET UNITYSDK_OFFSET(0x12B15F30)
#define MOLEMOLE_SAVEPHOTOSALBUMAPI___C__DISPLAYCLASS15_0__REQUESTPHOTOPERMISSIONBYMHYSDK_B__1_OFFSET UNITYSDK_OFFSET(0x12B15FD0)

namespace MoleMole
{
	inline static constexpr unsigned int SavePhotosAlbumAPI___c__DisplayClass15_0_TypeDefinitionIndex = 77645;

	class SavePhotosAlbumAPI___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SAVEPHOTOSALBUMAPI___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestPhotoPermissionByMhySdk_b__0(::System::String* responseString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SAVEPHOTOSALBUMAPI___C__DISPLAYCLASS15_0__REQUESTPHOTOPERMISSIONBYMHYSDK_B__0_OFFSET))(this, responseString);
		}

		::System::Void _RequestPhotoPermissionByMhySdk_b__1(::System::String* responseString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SAVEPHOTOSALBUMAPI___C__DISPLAYCLASS15_0__REQUESTPHOTOPERMISSIONBYMHYSDK_B__1_OFFSET))(this, responseString);
		}
	};
}
