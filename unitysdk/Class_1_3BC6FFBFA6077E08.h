#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B1E3F4D4C32B440D.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/ConfigBlackboardParam.h"
#include "unitysdk/Struct_2_C3F14E7E9EA24BAC.h"
#include "unitysdk/Struct_2_E33A8767CD3B76C6.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_441;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3BC6FFBFA6077E08_METHOD_1_3BBA09530A3B4317_OFFSET UNITYSDK_OFFSET(0x140749E0)
#define CLASS_1_3BC6FFBFA6077E08_METHOD_1_420F5543CED5025E_OFFSET UNITYSDK_OFFSET(0x14074EF0)
#define CLASS_1_3BC6FFBFA6077E08_METHOD_1_6887B965A98917AE_OFFSET UNITYSDK_OFFSET(0x14074360)
#define CLASS_1_3BC6FFBFA6077E08_METHOD_1_825EE3DA9EDF0C9D_OFFSET UNITYSDK_OFFSET(0x140745A0)
#define CLASS_1_3BC6FFBFA6077E08_METHOD_1_B4AC382607032DA3_OFFSET UNITYSDK_OFFSET(0x14074430)
#define CLASS_1_3BC6FFBFA6077E08_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x140749D0)
#define CLASS_1_3BC6FFBFA6077E08_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x14074230)
#define CLASS_1_3BC6FFBFA6077E08_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x14074EE0)
#define CLASS_1_3BC6FFBFA6077E08_METHOD_1_F8E930689C98BC4E_OFFSET UNITYSDK_OFFSET(0x14074780)
#define CLASS_1_3BC6FFBFA6077E08__CTOR_OFFSET UNITYSDK_OFFSET(0x140749C0)

inline static constexpr unsigned int Class_1_3BC6FFBFA6077E08_TypeDefinitionIndex = 69102;

class Class_1_3BC6FFBFA6077E08 : public ::System::Object
{
public:
	::Foundation::ViewObject::ViewObjectHandle Field_1_0; // 0x10
	::System::Int32 Field_1_2; // 0x20
	::System::Boolean Field_1_1; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BC6FFBFA6077E08__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BC6FFBFA6077E08_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_1_B4AC382607032DA3(::Enum_3_B1E3F4D4C32B440D a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_B1E3F4D4C32B440D))((::PBYTE)hIl2Cpp + CLASS_1_3BC6FFBFA6077E08_METHOD_1_B4AC382607032DA3_OFFSET))(this, a1);
	}

	::System::Void Method_1_825EE3DA9EDF0C9D(::Enum_3_B1E3F4D4C32B440D a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_B1E3F4D4C32B440D))((::PBYTE)hIl2Cpp + CLASS_1_3BC6FFBFA6077E08_METHOD_1_825EE3DA9EDF0C9D_OFFSET))(this, a1);
	}

	::System::Void Method_1_F8E930689C98BC4E(::System::String* a1, ::System::Collections::Generic::List_1<::Struct_2_E33A8767CD3B76C6>* a2, ::Struct_2_C3F14E7E9EA24BAC a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::Struct_2_E33A8767CD3B76C6>*, ::Struct_2_C3F14E7E9EA24BAC))((::PBYTE)hIl2Cpp + CLASS_1_3BC6FFBFA6077E08_METHOD_1_F8E930689C98BC4E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3BC6FFBFA6077E08_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_3BBA09530A3B4317(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>*))((::PBYTE)hIl2Cpp + CLASS_1_3BC6FFBFA6077E08_METHOD_1_3BBA09530A3B4317_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BC6FFBFA6077E08_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_441* Method_1_6887B965A98917AE()
	{
		return ((::Class_0_16E4307DCC419505_441*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BC6FFBFA6077E08_METHOD_1_6887B965A98917AE_OFFSET))(this);
	}

	::System::String* Method_1_420F5543CED5025E()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BC6FFBFA6077E08_METHOD_1_420F5543CED5025E_OFFSET))(this);
	}
};
