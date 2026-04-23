#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TMPro { class TMP_FontAsset; }

#define CLASS_1_77383B81C29ABD75_METHOD_1_553FEF6E1CB265C0_OFFSET UNITYSDK_OFFSET(0x9527450)
#define CLASS_1_77383B81C29ABD75_METHOD_1_62C0DC55E78ECDB2_OFFSET UNITYSDK_OFFSET(0x95274C0)
#define CLASS_1_77383B81C29ABD75_METHOD_1_71F0872EB31B61BD_OFFSET UNITYSDK_OFFSET(0x9527830)
#define CLASS_1_77383B81C29ABD75_METHOD_1_B0326C6E6339DE99_OFFSET UNITYSDK_OFFSET(0x9527710)
#define CLASS_1_77383B81C29ABD75__CTOR_OFFSET UNITYSDK_OFFSET(0x95278B0)

inline static constexpr unsigned int Class_1_77383B81C29ABD75_TypeDefinitionIndex = 67197;

class Class_1_77383B81C29ABD75 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77383B81C29ABD75__CTOR_OFFSET))(this);
	}

	static ::TMPro::TMP_FontAsset* Method_1_553FEF6E1CB265C0(::System::String* a1)
	{
		return ((::TMPro::TMP_FontAsset*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_77383B81C29ABD75_METHOD_1_553FEF6E1CB265C0_OFFSET))(a1);
	}

	static ::TMPro::TMP_FontAsset* Method_1_62C0DC55E78ECDB2(::System::String* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
	{
		return ((::TMPro::TMP_FontAsset*(*)(::System::String*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_77383B81C29ABD75_METHOD_1_62C0DC55E78ECDB2_OFFSET))(a1, a2);
	}

	static ::TMPro::TMP_FontAsset* Method_1_B0326C6E6339DE99()
	{
		return ((::TMPro::TMP_FontAsset*(*)())((::PBYTE)hIl2Cpp + CLASS_1_77383B81C29ABD75_METHOD_1_B0326C6E6339DE99_OFFSET))();
	}

	static ::System::String* Method_1_71F0872EB31B61BD()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_77383B81C29ABD75_METHOD_1_71F0872EB31B61BD_OFFSET))();
	}
};
