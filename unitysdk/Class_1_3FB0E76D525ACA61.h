#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BundleArchiveFileJsonItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3FB0E76D525ACA61_METHOD_1_01DEB95A3D3BC467_OFFSET UNITYSDK_OFFSET(0x104D20A0)
#define CLASS_1_3FB0E76D525ACA61_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x104D2050)
#define CLASS_1_3FB0E76D525ACA61_METHOD_1_16E7BEC57D7DD893_OFFSET UNITYSDK_OFFSET(0x104D2390)
#define CLASS_1_3FB0E76D525ACA61_METHOD_1_3ECFFCD92D13AA8C_OFFSET UNITYSDK_OFFSET(0x104D1B50)
#define CLASS_1_3FB0E76D525ACA61_METHOD_1_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x104D1EB0)
#define CLASS_1_3FB0E76D525ACA61_METHOD_1_B8054C8E60613AB4_OFFSET UNITYSDK_OFFSET(0x104D1D40)
#define CLASS_1_3FB0E76D525ACA61_METHOD_1_BF9C25E762BD53B3_OFFSET UNITYSDK_OFFSET(0x104D1B00)
#define CLASS_1_3FB0E76D525ACA61__CTOR_OFFSET UNITYSDK_OFFSET(0x104D2400)

inline static constexpr unsigned int Class_1_3FB0E76D525ACA61_TypeDefinitionIndex = 49632;

class Class_1_3FB0E76D525ACA61 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::BundleArchiveFileJsonItem*>* Field_1_2; // 0x18
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FB0E76D525ACA61__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BF9C25E762BD53B3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FB0E76D525ACA61_METHOD_1_BF9C25E762BD53B3_OFFSET))(this);
	}

	::RPG::Client::BundleArchiveFileJsonItem* Method_1_B8054C8E60613AB4(::System::String* a1)
	{
		return ((::RPG::Client::BundleArchiveFileJsonItem*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3FB0E76D525ACA61_METHOD_1_B8054C8E60613AB4_OFFSET))(this, a1);
	}

	::System::Void Method_1_3ECFFCD92D13AA8C(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3FB0E76D525ACA61_METHOD_1_3ECFFCD92D13AA8C_OFFSET))(this, a1);
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
