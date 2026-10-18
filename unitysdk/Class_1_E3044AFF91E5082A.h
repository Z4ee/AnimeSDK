#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace R3 { template <typename T> class ReadOnlyReactiveProperty_1; }
namespace System { class Action; }

#define CLASS_1_E3044AFF91E5082A_ADD_ONPROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0x1C51F3E0)
#define CLASS_1_E3044AFF91E5082A_METHOD_1_3B39203507433E68_OFFSET UNITYSDK_OFFSET(0x1C535750)
#define CLASS_1_E3044AFF91E5082A_METHOD_1_4CFC80CE3A397D1C_OFFSET UNITYSDK_OFFSET(0x1C50FE20)
#define CLASS_1_E3044AFF91E5082A_METHOD_1_FB0855CD6429CA3E_OFFSET UNITYSDK_OFFSET(0x1C50DEE0)
#define CLASS_1_E3044AFF91E5082A_REMOVE_ONPROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0x1C51F4E0)
#define CLASS_1_E3044AFF91E5082A__CTOR_OFFSET UNITYSDK_OFFSET(0x1C50F710)

inline static constexpr unsigned int Class_1_E3044AFF91E5082A_TypeDefinitionIndex = 41840;

class Class_1_E3044AFF91E5082A : public ::System::Object
{
public:
	::System::Action* IAIJOOKBBIB; // 0x10
	::System::Action* OnProgressChanged; // 0x18
	::R3::ReactiveProperty_1<::System::Boolean>* INJJGMIGFFD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3044AFF91E5082A__CTOR_OFFSET))(this);
	}

	::R3::ReadOnlyReactiveProperty_1<::System::Boolean>* Method_1_FB0855CD6429CA3E()
	{
		return ((::R3::ReadOnlyReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3044AFF91E5082A_METHOD_1_FB0855CD6429CA3E_OFFSET))(this);
	}

	::System::Void add_OnProgressChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E3044AFF91E5082A_ADD_ONPROGRESSCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnProgressChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E3044AFF91E5082A_REMOVE_ONPROGRESSCHANGED_OFFSET))(this, a1);
	}

	::System::Action* Method_1_3B39203507433E68(::System::Object* a1)
	{
		return ((::System::Action*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E3044AFF91E5082A_METHOD_1_3B39203507433E68_OFFSET))(this, a1);
	}

	::System::Void Method_1_4CFC80CE3A397D1C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E3044AFF91E5082A_METHOD_1_4CFC80CE3A397D1C_OFFSET))(this, a1);
	}
};
