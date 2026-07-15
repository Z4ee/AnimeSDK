#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TMPro { class TMP_FontAsset; }

#define CLASS_1_D0E2D5771F8F44AD_METHOD_1_2620058B0644EE05_OFFSET UNITYSDK_OFFSET(0x17D85A90)
#define CLASS_1_D0E2D5771F8F44AD_METHOD_1_3C246BCC649256E2_OFFSET UNITYSDK_OFFSET(0x17D85D30)
#define CLASS_1_D0E2D5771F8F44AD_METHOD_1_71F0872EB31B61BD_OFFSET UNITYSDK_OFFSET(0x17D85E50)
#define CLASS_1_D0E2D5771F8F44AD_METHOD_1_A0E798C8EA9BD165_OFFSET UNITYSDK_OFFSET(0x17D85B00)
#define CLASS_1_D0E2D5771F8F44AD__CTOR_OFFSET UNITYSDK_OFFSET(0x17D85ED0)

inline static constexpr unsigned int Class_1_D0E2D5771F8F44AD_TypeDefinitionIndex = 69627;

class Class_1_D0E2D5771F8F44AD : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0E2D5771F8F44AD__CTOR_OFFSET))(this);
	}

	static ::TMPro::TMP_FontAsset* Method_1_2620058B0644EE05(::System::String* a1)
	{
		return ((::TMPro::TMP_FontAsset*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D0E2D5771F8F44AD_METHOD_1_2620058B0644EE05_OFFSET))(a1);
	}

	static ::TMPro::TMP_FontAsset* Method_1_A0E798C8EA9BD165(::System::String* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
	{
		return ((::TMPro::TMP_FontAsset*(*)(::System::String*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_D0E2D5771F8F44AD_METHOD_1_A0E798C8EA9BD165_OFFSET))(a1, a2);
	}

	static ::TMPro::TMP_FontAsset* Method_1_3C246BCC649256E2()
	{
		return ((::TMPro::TMP_FontAsset*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D0E2D5771F8F44AD_METHOD_1_3C246BCC649256E2_OFFSET))();
	}

	static ::System::String* Method_1_71F0872EB31B61BD()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D0E2D5771F8F44AD_METHOD_1_71F0872EB31B61BD_OFFSET))();
	}
};
