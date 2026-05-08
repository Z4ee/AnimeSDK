#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigLanguageVideo; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGLANGUAGEVIDEODATA_CLASS_1_477B011DF6B83981_METHOD_1_E1D6C961E0DBD8D4_OFFSET UNITYSDK_OFFSET(0x181DF9C0)
#define MOLEMOLE_CONFIGLANGUAGEVIDEODATA_CLASS_1_477B011DF6B83981__CTOR_OFFSET UNITYSDK_OFFSET(0x181DF9B0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigLanguageVideoData_Class_1_477B011DF6B83981_TypeDefinitionIndex = 51705;

	class ConfigLanguageVideoData_Class_1_477B011DF6B83981 : public ::System::Object
	{
	public:
		::System::Action* Field_1_2; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::ConfigLanguageVideo*>* Field_1_0; // 0x18
		::System::Action_1<::MoleMole::ConfigLanguageVideo*>* Field_1_3; // 0x20
		::System::Int32 Field_1_1; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLANGUAGEVIDEODATA_CLASS_1_477B011DF6B83981__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_E1D6C961E0DBD8D4(::MoleMole::ConfigLanguageVideo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigLanguageVideo*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLANGUAGEVIDEODATA_CLASS_1_477B011DF6B83981_METHOD_1_E1D6C961E0DBD8D4_OFFSET))(this, a1);
		}
	};
}
