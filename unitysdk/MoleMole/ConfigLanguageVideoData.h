#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class ConfigLanguageVideo; }
namespace MoleMole { class LanguageVideo; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGLANGUAGEVIDEODATA_GETLANGUAGEVIDEOS_OFFSET UNITYSDK_OFFSET(0x157D4710)
#define MOLEMOLE_CONFIGLANGUAGEVIDEODATA_METHOD_5_8EC5E797B6E3D088_OFFSET UNITYSDK_OFFSET(0x157D4880)
#define MOLEMOLE_CONFIGLANGUAGEVIDEODATA_RELOADFROMFILEASYNC_OFFSET UNITYSDK_OFFSET(0x157D4340)
#define MOLEMOLE_CONFIGLANGUAGEVIDEODATA_RELOADFROMFILE_OFFSET UNITYSDK_OFFSET(0x157D4450)
#define MOLEMOLE_CONFIGLANGUAGEVIDEODATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x157D47E0)
#define MOLEMOLE_CONFIGLANGUAGEVIDEODATA__CTOR_OFFSET UNITYSDK_OFFSET(0x157D4790)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigLanguageVideoData_TypeDefinitionIndex = 80820;

	class ConfigLanguageVideoData : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::LanguageVideo*>** StaticGet_Field_5_0()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::LanguageVideo*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLanguageVideoData_TypeDefinitionIndex)->GetStaticField(0x3C310);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLANGUAGEVIDEODATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLANGUAGEVIDEODATA__CCTOR_OFFSET))();
		}

		static ::System::Void ReloadFromFileAsync(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLANGUAGEVIDEODATA_RELOADFROMFILEASYNC_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ReloadFromFile(::System::Boolean a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLANGUAGEVIDEODATA_RELOADFROMFILE_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::LanguageVideo*>* GetLanguageVideos()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::LanguageVideo*>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLANGUAGEVIDEODATA_GETLANGUAGEVIDEOS_OFFSET))();
		}

		static ::System::Void Method_5_8EC5E797B6E3D088(::System::Collections::Generic::List_1<::MoleMole::ConfigLanguageVideo*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::ConfigLanguageVideo*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLANGUAGEVIDEODATA_METHOD_5_8EC5E797B6E3D088_OFFSET))(a1);
		}
	};
}
