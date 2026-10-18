#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BundleUpdatePostFileOpItem; }
namespace RPG::Client { class IBundleUpdatePostFileOpItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_17C993E46F387C93_METHOD_1_136C0E6920490998_OFFSET UNITYSDK_OFFSET(0x155B28F0)
#define CLASS_1_17C993E46F387C93_METHOD_1_423DC5E63D621D3F_OFFSET UNITYSDK_OFFSET(0x155B2330)
#define CLASS_1_17C993E46F387C93_METHOD_1_65138EA51F724500_OFFSET UNITYSDK_OFFSET(0x155B29B0)
#define CLASS_1_17C993E46F387C93_METHOD_1_C0A8D327571D1A01_OFFSET UNITYSDK_OFFSET(0x155B2410)
#define CLASS_1_17C993E46F387C93_METHOD_1_CF48D47ABED5EA16_OFFSET UNITYSDK_OFFSET(0x155B2B40)
#define CLASS_1_17C993E46F387C93__CCTOR_OFFSET UNITYSDK_OFFSET(0x155B30F0)
#define CLASS_1_17C993E46F387C93__CTOR_OFFSET UNITYSDK_OFFSET(0x155B30E0)

inline static constexpr unsigned int Class_1_17C993E46F387C93_TypeDefinitionIndex = 61226;

class Class_1_17C993E46F387C93 : public ::System::Object
{
public:
	static ::System::Object** StaticGet_NEIMDKJOLOB()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Class_1_17C993E46F387C93_TypeDefinitionIndex)->GetStaticField(0x523D0);
	}
	static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_GOBMLFPGJLH()
	{
		return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_17C993E46F387C93_TypeDefinitionIndex)->GetStaticField(0x523D8);
	}
	// static const ::System::String* KLFGNENIAMP; // 0x0
	// static const ::System::String* EEGJEMMEEDI; // 0x0
	// static const ::System::String* GOMMGNEGKNE; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17C993E46F387C93__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_17C993E46F387C93__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_423DC5E63D621D3F(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_17C993E46F387C93_METHOD_1_423DC5E63D621D3F_OFFSET))(a1);
	}

	static ::System::Void Method_1_C0A8D327571D1A01(::RPG::Client::IBundleUpdatePostFileOpItem* a1)
	{
		return ((::System::Void(*)(::RPG::Client::IBundleUpdatePostFileOpItem*))((::PBYTE)hIl2Cpp + CLASS_1_17C993E46F387C93_METHOD_1_C0A8D327571D1A01_OFFSET))(a1);
	}

	static ::System::Void Method_1_136C0E6920490998(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_17C993E46F387C93_METHOD_1_136C0E6920490998_OFFSET))(a1, a2, a3);
	}

	static ::RPG::Client::BundleUpdatePostFileOpItem* Method_1_65138EA51F724500(::System::String* a1)
	{
		return ((::RPG::Client::BundleUpdatePostFileOpItem*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_17C993E46F387C93_METHOD_1_65138EA51F724500_OFFSET))(a1);
	}

	static ::System::Void Method_1_CF48D47ABED5EA16()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_17C993E46F387C93_METHOD_1_CF48D47ABED5EA16_OFFSET))();
	}
};
