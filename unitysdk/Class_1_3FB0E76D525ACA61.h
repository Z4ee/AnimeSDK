#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BundleArchiveFileJsonItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3FB0E76D525ACA61_METHOD_1_01DEB95A3D3BC467_OFFSET UNITYSDK_OFFSET(0x11779720)
#define CLASS_1_3FB0E76D525ACA61_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x117796D0)
#define CLASS_1_3FB0E76D525ACA61_METHOD_1_16E7BEC57D7DD893_OFFSET UNITYSDK_OFFSET(0x11779A10)
#define CLASS_1_3FB0E76D525ACA61_METHOD_1_1BBB005414AEB64F_OFFSET UNITYSDK_OFFSET(0x117790E0)
#define CLASS_1_3FB0E76D525ACA61_METHOD_1_826808110D5BB350_OFFSET UNITYSDK_OFFSET(0x11779130)
#define CLASS_1_3FB0E76D525ACA61_METHOD_1_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x11779530)
#define CLASS_1_3FB0E76D525ACA61_METHOD_1_B8054C8E60613AB4_OFFSET UNITYSDK_OFFSET(0x117793C0)
#define CLASS_1_3FB0E76D525ACA61__CTOR_OFFSET UNITYSDK_OFFSET(0x11779A80)

inline static constexpr unsigned int Class_1_3FB0E76D525ACA61_TypeDefinitionIndex = 56453;

class Class_1_3FB0E76D525ACA61 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::BundleArchiveFileJsonItem*>* Field_1_2; // 0x10
	::System::String* Field_1_0; // 0x18
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FB0E76D525ACA61__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1BBB005414AEB64F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FB0E76D525ACA61_METHOD_1_1BBB005414AEB64F_OFFSET))(this);
	}

	::RPG::Client::BundleArchiveFileJsonItem* Method_1_B8054C8E60613AB4(::System::String* a1)
	{
		return ((::RPG::Client::BundleArchiveFileJsonItem*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3FB0E76D525ACA61_METHOD_1_B8054C8E60613AB4_OFFSET))(this, a1);
	}

	::System::Void Method_1_826808110D5BB350(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3FB0E76D525ACA61_METHOD_1_826808110D5BB350_OFFSET))(this, a1);
	}

	::System::Void Method_1_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FB0E76D525ACA61_METHOD_1_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3FB0E76D525ACA61_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Void Method_1_01DEB95A3D3BC467(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3FB0E76D525ACA61_METHOD_1_01DEB95A3D3BC467_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_16E7BEC57D7DD893(::RPG::Client::BundleArchiveFileJsonItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BundleArchiveFileJsonItem*))((::PBYTE)hIl2Cpp + CLASS_1_3FB0E76D525ACA61_METHOD_1_16E7BEC57D7DD893_OFFSET))(this, a1);
	}
};
